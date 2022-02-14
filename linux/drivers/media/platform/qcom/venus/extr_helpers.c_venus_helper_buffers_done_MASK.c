
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int m2m_ctx; } ;
struct vb2_v4l2_buffer {int dummy; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;


 int FUNC_0 (struct vb2_v4l2_buffer*,int) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;

void FUNC_3(struct venus_inst *VAR_0,
          enum vb2_buffer_state VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2;

 while ((VAR_2 = FUNC_2(VAR_0->m2m_ctx)))
  FUNC_0(VAR_2, VAR_1);
 while ((VAR_2 = FUNC_1(VAR_0->m2m_ctx)))
  FUNC_0(VAR_2, VAR_1);
}
