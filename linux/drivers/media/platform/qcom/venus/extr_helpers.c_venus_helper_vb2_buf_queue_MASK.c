
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {scalar_t__ session_type; int lock; scalar_t__ streamon_cap; scalar_t__ streamon_out; struct v4l2_m2m_ctx* m2m_ctx; } ;
struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {int vb2_queue; } ;
struct v4l2_m2m_ctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct venus_inst*,struct vb2_v4l2_buffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct venus_inst*,struct vb2_v4l2_buffer*) ;
 int FUNC_4 (struct venus_inst*,struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_5 (struct vb2_buffer*) ;
 int FUNC_6 (struct v4l2_m2m_ctx*,struct vb2_v4l2_buffer*) ;
 struct venus_inst* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

void FUNC_9(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_5(VAR_1);
 struct venus_inst *VAR_3 = FUNC_7(VAR_1->vb2_queue);
 struct v4l2_m2m_ctx *VAR_4 = VAR_3->m2m_ctx;
 int VAR_5;

 FUNC_1(&VAR_3->lock);

 FUNC_6(VAR_4, VAR_2);

 if (VAR_3->session_type == VAR_0 &&
     !(VAR_3->streamon_out && VAR_3->streamon_cap))
  goto unlock;

 if (FUNC_8(VAR_1->vb2_queue)) {
  VAR_5 = FUNC_0(VAR_3, VAR_2);
  if (VAR_5)
   goto unlock;

  VAR_5 = FUNC_4(VAR_3, VAR_2);
  if (VAR_5)
   FUNC_3(VAR_3, VAR_2);
 }

unlock:
 FUNC_2(&VAR_3->lock);
}
