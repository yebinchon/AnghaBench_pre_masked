
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct TYPE_2__ {scalar_t__ m2m_ctx; } ;
struct hva_ctx {TYPE_1__ fh; } ;


 struct vb2_v4l2_buffer* FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (scalar_t__,struct vb2_v4l2_buffer*) ;
 struct hva_ctx* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct vb2_buffer *VAR_0)
{
 struct hva_ctx *VAR_1 = FUNC_2(VAR_0->vb2_queue);
 struct vb2_v4l2_buffer *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1->fh.m2m_ctx)
  FUNC_1(VAR_1->fh.m2m_ctx, VAR_2);
}
