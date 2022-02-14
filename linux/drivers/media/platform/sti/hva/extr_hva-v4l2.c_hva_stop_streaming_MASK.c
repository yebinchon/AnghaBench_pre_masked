
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {scalar_t__ type; } ;
struct hva_enc {int (* close ) (struct hva_ctx*) ;int name; } ;
struct hva_dev {int nb_of_instances; int ** instances; } ;
struct TYPE_8__ {TYPE_4__* m2m_ctx; } ;
struct hva_ctx {size_t id; int aborting; struct hva_enc* enc; int name; TYPE_3__ fh; scalar_t__ stream_num; scalar_t__ frame_num; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int q; } ;
struct TYPE_6__ {int q; } ;
struct TYPE_9__ {TYPE_2__ cap_q_ctx; TYPE_1__ out_q_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 struct device* FUNC_1 (struct hva_ctx*) ;
 struct hva_dev* FUNC_2 (struct hva_ctx*) ;
 int FUNC_3 (struct device*,char*,int ,int ,...) ;
 int FUNC_4 (struct hva_ctx*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_7 (TYPE_4__*) ;
 struct vb2_v4l2_buffer* FUNC_8 (TYPE_4__*) ;
 struct hva_ctx* FUNC_9 (struct vb2_queue*) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct vb2_queue *VAR_2)
{
 struct hva_ctx *VAR_3 = FUNC_9(VAR_2);
 struct hva_dev *VAR_4 = FUNC_2(VAR_3);
 struct device *VAR_5 = FUNC_1(VAR_3);
 const struct hva_enc *VAR_6 = VAR_3->enc;
 struct vb2_v4l2_buffer *VAR_7;

 FUNC_3(VAR_5, "%s %s stop streaming\n", VAR_3->name,
  FUNC_5(VAR_2->type));

 if (VAR_2->type == VAR_0) {

  VAR_3->frame_num = 0;
  while ((VAR_7 = FUNC_8(VAR_3->fh.m2m_ctx)))
   FUNC_6(VAR_7, VAR_1);
 } else {

  VAR_3->stream_num = 0;
  while ((VAR_7 = FUNC_7(VAR_3->fh.m2m_ctx)))
   FUNC_6(VAR_7, VAR_1);
 }

 if ((FUNC_0(VAR_2->type) &&
      FUNC_10(&VAR_3->fh.m2m_ctx->cap_q_ctx.q)) ||
     (!FUNC_0(VAR_2->type) &&
      FUNC_10(&VAR_3->fh.m2m_ctx->out_q_ctx.q))) {
  FUNC_3(VAR_5, "%s %s out=%d cap=%d\n",
   VAR_3->name, FUNC_5(VAR_2->type),
   FUNC_10(&VAR_3->fh.m2m_ctx->out_q_ctx.q),
   FUNC_10(&VAR_3->fh.m2m_ctx->cap_q_ctx.q));
  return;
 }


 if (VAR_6) {
  FUNC_3(VAR_5, "%s %s encoder closed\n", VAR_3->name, VAR_6->name);
  VAR_6->close(VAR_3);
  VAR_3->enc = ((void*)0);


  VAR_4->instances[VAR_3->id] = ((void*)0);
  VAR_4->nb_of_instances--;
 }

 VAR_3->aborting = 0;
}
