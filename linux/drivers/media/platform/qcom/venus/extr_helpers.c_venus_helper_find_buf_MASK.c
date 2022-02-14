
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {struct v4l2_m2m_ctx* m2m_ctx; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct v4l2_m2m_ctx {int dummy; } ;


 unsigned int VAR_0 ;
 struct vb2_v4l2_buffer* FUNC_0 (struct v4l2_m2m_ctx*,int ) ;
 struct vb2_v4l2_buffer* FUNC_1 (struct v4l2_m2m_ctx*,int ) ;

struct vb2_v4l2_buffer *
FUNC_2(struct venus_inst *VAR_1, unsigned int VAR_2, u32 VAR_3)
{
 struct v4l2_m2m_ctx *VAR_4 = VAR_1->m2m_ctx;

 if (VAR_2 == VAR_0)
  return FUNC_1(VAR_4, VAR_3);
 else
  return FUNC_0(VAR_4, VAR_3);
}
