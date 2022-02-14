
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct gsc_ctx {scalar_t__ m2m_ctx; int state; } ;


 int FUNC_0 (char*,struct gsc_ctx*,int ) ;
 struct vb2_v4l2_buffer* FUNC_1 (struct vb2_buffer*) ;
 int FUNC_2 (scalar_t__,struct vb2_v4l2_buffer*) ;
 struct gsc_ctx* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vb2_buffer *VAR_0)
{
 struct vb2_v4l2_buffer *VAR_1 = FUNC_1(VAR_0);
 struct gsc_ctx *VAR_2 = FUNC_3(VAR_0->vb2_queue);

 FUNC_0("ctx: %p, ctx->state: 0x%x", VAR_2, VAR_2->state);

 if (VAR_2->m2m_ctx)
  FUNC_2(VAR_2->m2m_ctx, VAR_1);
}
