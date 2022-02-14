
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_queue {int dummy; } ;
struct vb2_buffer {struct vb2_queue* vb2_queue; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct delta_ctx {TYPE_1__ fh; } ;


 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (int ,struct vb2_v4l2_buffer*) ;
 struct delta_ctx* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static void FUNC_3(struct vb2_buffer *VAR_0)
{
 struct vb2_queue *VAR_1 = VAR_0->vb2_queue;
 struct delta_ctx *VAR_2 = FUNC_2(VAR_1);
 struct vb2_v4l2_buffer *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->fh.m2m_ctx, VAR_3);
}
