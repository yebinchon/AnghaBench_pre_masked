
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int dummy; } ;
struct vb2_buffer {scalar_t__ type; int vb2_queue; } ;
struct v4l2_m2m_ctx {int dummy; } ;
struct amvdec_session {int esparser_queue_work; int streamon_cap; int streamon_out; struct v4l2_m2m_ctx* m2m_ctx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct vb2_v4l2_buffer* FUNC_1 (struct vb2_buffer*) ;
 int FUNC_2 (struct v4l2_m2m_ctx*,struct vb2_v4l2_buffer*) ;
 struct amvdec_session* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct amvdec_session*) ;
 int FUNC_5 (struct amvdec_session*,struct vb2_buffer*) ;

__attribute__((used)) static void FUNC_6(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_1(VAR_1);
 struct amvdec_session *VAR_3 = FUNC_3(VAR_1->vb2_queue);
 struct v4l2_m2m_ctx *VAR_4 = VAR_3->m2m_ctx;

 FUNC_2(VAR_4, VAR_2);

 if (!VAR_3->streamon_out || !VAR_3->streamon_cap)
  return;

 if (VAR_1->type == VAR_0 &&
     FUNC_4(VAR_3))
  FUNC_5(VAR_3, VAR_1);

 FUNC_0(&VAR_3->esparser_queue_work);
}
