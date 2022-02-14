
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m2m_ctx; } ;
struct vpe_ctx {TYPE_2__* dev; struct vb2_v4l2_buffer* dst_vb; struct vb2_v4l2_buffer** src_vbs; TYPE_1__ fh; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {int type; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
struct TYPE_4__ {int lock; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;
 struct vb2_v4l2_buffer* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct vpe_ctx *VAR_0, struct vb2_queue *VAR_1,
       enum vb2_buffer_state VAR_2)
{
 struct vb2_v4l2_buffer *VAR_3;
 unsigned long VAR_4;

 for (;;) {
  if (FUNC_0(VAR_1->type))
   VAR_3 = FUNC_5(VAR_0->fh.m2m_ctx);
  else
   VAR_3 = FUNC_4(VAR_0->fh.m2m_ctx);
  if (!VAR_3)
   break;
  FUNC_1(&VAR_0->dev->lock, VAR_4);
  FUNC_3(VAR_3, VAR_2);
  FUNC_2(&VAR_0->dev->lock, VAR_4);
 }






 if (FUNC_0(VAR_1->type)) {
  FUNC_1(&VAR_0->dev->lock, VAR_4);

  if (VAR_0->src_vbs[2])
   FUNC_3(VAR_0->src_vbs[2], VAR_2);

  if (VAR_0->src_vbs[1] && (VAR_0->src_vbs[1] != VAR_0->src_vbs[2]))
   FUNC_3(VAR_0->src_vbs[1], VAR_2);

  if (VAR_0->src_vbs[0] &&
      (VAR_0->src_vbs[0] != VAR_0->src_vbs[1]) &&
      (VAR_0->src_vbs[0] != VAR_0->src_vbs[2]))
   FUNC_3(VAR_0->src_vbs[0], VAR_2);

  VAR_0->src_vbs[2] = ((void*)0);
  VAR_0->src_vbs[1] = ((void*)0);
  VAR_0->src_vbs[0] = ((void*)0);

  FUNC_2(&VAR_0->dev->lock, VAR_4);
 } else {
  if (VAR_0->dst_vb) {
   FUNC_1(&VAR_0->dev->lock, VAR_4);

   FUNC_3(VAR_0->dst_vb, VAR_2);
   VAR_0->dst_vb = ((void*)0);
   FUNC_2(&VAR_0->dev->lock, VAR_4);
  }
 }
}
