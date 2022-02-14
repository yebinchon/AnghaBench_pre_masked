
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m2m_ctx; } ;
struct vim2m_ctx {int irqlock; int hdl; TYPE_1__ fh; int work_run; } ;
struct TYPE_5__ {int req; } ;
struct TYPE_6__ {TYPE_2__ req_obj; } ;
struct vb2_v4l2_buffer {TYPE_3__ vb2_buf; } ;
struct vb2_queue {int type; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_6 (int ) ;
 struct vb2_v4l2_buffer* FUNC_7 (int ) ;
 struct vim2m_ctx* FUNC_8 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_9(struct vb2_queue *VAR_1)
{
 struct vim2m_ctx *VAR_2 = FUNC_8(VAR_1);
 struct vb2_v4l2_buffer *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->work_run);

 for (;;) {
  if (FUNC_0(VAR_1->type))
   VAR_3 = FUNC_7(VAR_2->fh.m2m_ctx);
  else
   VAR_3 = FUNC_6(VAR_2->fh.m2m_ctx);
  if (!VAR_3)
   return;
  FUNC_4(VAR_3->vb2_buf.req_obj.req,
        &VAR_2->hdl);
  FUNC_2(&VAR_2->irqlock, VAR_4);
  FUNC_5(VAR_3, VAR_0);
  FUNC_3(&VAR_2->irqlock, VAR_4);
 }
}
