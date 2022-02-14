
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {int type; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct rga_ctx {TYPE_1__ fh; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;
 struct rga_ctx* FUNC_4 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_5(struct vb2_queue *VAR_0,
       enum vb2_buffer_state VAR_1)
{
 struct rga_ctx *VAR_2 = FUNC_4(VAR_0);
 struct vb2_v4l2_buffer *VAR_3;

 for (;;) {
  if (FUNC_0(VAR_0->type))
   VAR_3 = FUNC_3(VAR_2->fh.m2m_ctx);
  else
   VAR_3 = FUNC_2(VAR_2->fh.m2m_ctx);
  if (!VAR_3)
   break;
  FUNC_1(VAR_3, VAR_1);
 }
}
