
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {struct v4l2_m2m_ctx* m2m_ctx; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct vb2_v4l2_buffer {TYPE_1__ vb2_buf; } ;
struct v4l2_m2m_ctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vb2_v4l2_buffer*,int ) ;
 int FUNC_1 (struct v4l2_m2m_ctx*,struct vb2_v4l2_buffer*) ;
 int FUNC_2 (struct v4l2_m2m_ctx*,struct vb2_v4l2_buffer*) ;

__attribute__((used)) static void FUNC_3(struct venus_inst *VAR_2,
        struct vb2_v4l2_buffer *VAR_3)
{
 struct v4l2_m2m_ctx *VAR_4 = VAR_2->m2m_ctx;

 if (VAR_3->vb2_buf.type == VAR_0)
  FUNC_2(VAR_4, VAR_3);
 else
  FUNC_1(VAR_4, VAR_3);

 FUNC_0(VAR_3, VAR_1);
}
