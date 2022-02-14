
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {TYPE_3__* vb2_queue; } ;
struct TYPE_8__ {unsigned int width; unsigned int height; } ;
struct jpu_q_data {TYPE_4__ format; int fmtinfo; } ;
struct TYPE_5__ {scalar_t__ m2m_ctx; } ;
struct jpu_ctx {TYPE_2__* jpu; TYPE_1__ fh; struct jpu_q_data out_q; int encoder; } ;
struct jpu_buffer {scalar_t__ subsampling; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct jpu_ctx*,int *,TYPE_4__*,int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (void*,unsigned long,unsigned int*,unsigned int*) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct vb2_buffer*) ;
 int FUNC_5 (scalar_t__,struct vb2_v4l2_buffer*) ;
 int FUNC_6 (struct vb2_buffer*,int ) ;
 struct jpu_ctx* FUNC_7 (TYPE_3__*) ;
 unsigned long FUNC_8 (struct vb2_buffer*,int ) ;
 void* FUNC_9 (struct vb2_buffer*,int ) ;
 struct jpu_buffer* FUNC_10 (struct vb2_v4l2_buffer*) ;

__attribute__((used)) static void FUNC_11(struct vb2_buffer *VAR_4)
{
 struct vb2_v4l2_buffer *VAR_5 = FUNC_4(VAR_4);
 struct jpu_ctx *VAR_6 = FUNC_7(VAR_4->vb2_queue);

 if (!VAR_6->encoder && FUNC_0(VAR_4->vb2_queue->type)) {
  struct jpu_buffer *VAR_7 = FUNC_10(VAR_5);
  struct jpu_q_data *VAR_8, VAR_9;
  void *VAR_10 = FUNC_9(VAR_4, 0);
  unsigned long VAR_11 = FUNC_8(VAR_4, 0);
  unsigned int VAR_12, VAR_13;

  u8 VAR_14 = FUNC_3(VAR_10, VAR_11, &VAR_12,
       &VAR_13);


  if (VAR_14 != VAR_1 && VAR_14 != VAR_0)
   goto format_error;

  VAR_8 = &VAR_6->out_q;

  VAR_9 = *VAR_8;
  VAR_9.format.width = VAR_12;
  VAR_9.format.height = VAR_13;

  FUNC_1(VAR_6, &VAR_9.fmtinfo, &VAR_9.format,
         VAR_2);

  if (VAR_9.format.width != VAR_8->format.width ||
      VAR_9.format.height != VAR_8->format.height)
   goto format_error;





  VAR_7->subsampling = VAR_14;
 }

 if (VAR_6->fh.m2m_ctx)
  FUNC_5(VAR_6->fh.m2m_ctx, VAR_5);

 return;

format_error:
 FUNC_2(VAR_6->jpu->dev, "incompatible or corrupted JPEG data\n");
 FUNC_6(VAR_4, VAR_3);
}
