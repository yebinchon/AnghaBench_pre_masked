
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int m2m_ctx; } ;
struct vb2_v4l2_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct venus_inst *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2;

 while ((VAR_2 = FUNC_1(VAR_1->m2m_ctx)))
  FUNC_0(VAR_2, VAR_0);
}
