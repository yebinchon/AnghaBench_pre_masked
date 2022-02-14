
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct gsc_ctx {int m2m_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct gsc_ctx *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2, *VAR_3;

 while (FUNC_3(VAR_1->m2m_ctx) > 0) {
  VAR_2 = FUNC_4(VAR_1->m2m_ctx);
  FUNC_0(VAR_2, VAR_0);
 }

 while (FUNC_2(VAR_1->m2m_ctx) > 0) {
  VAR_3 = FUNC_1(VAR_1->m2m_ctx);
  FUNC_0(VAR_3, VAR_0);
 }
}
