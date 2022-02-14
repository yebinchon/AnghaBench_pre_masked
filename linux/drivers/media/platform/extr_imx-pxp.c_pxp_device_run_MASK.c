
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int dummy; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct pxp_ctx {TYPE_1__ fh; } ;


 int FUNC_0 (struct pxp_ctx*,struct vb2_v4l2_buffer*,struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct pxp_ctx *VAR_1 = VAR_0;
 struct vb2_v4l2_buffer *VAR_2, *VAR_3;

 VAR_2 = FUNC_2(VAR_1->fh.m2m_ctx);
 VAR_3 = FUNC_1(VAR_1->fh.m2m_ctx);

 FUNC_0(VAR_1, VAR_2, VAR_3);
}
