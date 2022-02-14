
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {scalar_t__ type; } ;
struct hva_dev {int nb_of_instances; struct hva_ctx** instances; } ;
struct TYPE_12__ {TYPE_6__* m2m_ctx; } ;
struct TYPE_11__ {int pixelformat; } ;
struct TYPE_10__ {int streamformat; } ;
struct hva_ctx {unsigned int id; int sys_errors; TYPE_5__ fh; int enc; TYPE_4__ frameinfo; TYPE_3__ streaminfo; int name; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int q; } ;
struct TYPE_8__ {int q; } ;
struct TYPE_13__ {TYPE_2__ out_q_ctx; TYPE_1__ cap_q_ctx; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 struct device* FUNC_1 (struct hva_ctx*) ;
 struct hva_dev* FUNC_2 (struct hva_ctx*) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct hva_ctx*,int ,int ,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_8 (TYPE_6__*) ;
 struct vb2_v4l2_buffer* FUNC_9 (TYPE_6__*) ;
 struct hva_ctx* FUNC_10 (struct vb2_queue*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct vb2_queue *VAR_4, unsigned int VAR_5)
{
 struct hva_ctx *VAR_6 = FUNC_10(VAR_4);
 struct hva_dev *VAR_7 = FUNC_2(VAR_6);
 struct device *VAR_8 = FUNC_1(VAR_6);
 struct vb2_v4l2_buffer *VAR_9;
 int VAR_10;
 unsigned int VAR_11;
 bool VAR_12 = 0;

 FUNC_3(VAR_8, "%s %s start streaming\n", VAR_6->name,
  FUNC_6(VAR_4->type));


 if (FUNC_0(VAR_4->type)) {
  if (!FUNC_11(&VAR_6->fh.m2m_ctx->cap_q_ctx.q))
   return 0;
 } else {
  if (!FUNC_11(&VAR_6->fh.m2m_ctx->out_q_ctx.q))
   return 0;
 }


 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (!VAR_7->instances[VAR_11]) {
   VAR_7->instances[VAR_11] = VAR_6;

   VAR_6->id = VAR_11;
   VAR_12 = 1;
   break;
  }
 }

 if (!VAR_12) {
  FUNC_4(VAR_8, "%s maximum instances reached\n", VAR_6->name);
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_7->nb_of_instances++;

 if (!VAR_6->enc) {
  VAR_10 = FUNC_5(VAR_6,
           VAR_6->streaminfo.streamformat,
           VAR_6->frameinfo.pixelformat,
           &VAR_6->enc);
  if (VAR_10 < 0)
   goto err_ctx;
 }

 return 0;

err_ctx:
 VAR_7->instances[VAR_6->id] = ((void*)0);
 VAR_7->nb_of_instances--;
err:
 if (VAR_4->type == VAR_2) {

  while ((VAR_9 = FUNC_9(VAR_6->fh.m2m_ctx)))
   FUNC_7(VAR_9, VAR_3);
 } else {

  while ((VAR_9 = FUNC_8(VAR_6->fh.m2m_ctx)))
   FUNC_7(VAR_9, VAR_3);
 }

 VAR_6->sys_errors++;

 return VAR_10;
}
