
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_handler {int error; } ;
struct amvdec_session {int ctrl_min_buf_capture; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_ctrl_handler*) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct amvdec_session *VAR_1)
{
 struct v4l2_ctrl_handler *VAR_2 = &VAR_1->ctrl_handler;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, 1);
 if (VAR_3)
  return VAR_3;

 VAR_1->ctrl_min_buf_capture =
  FUNC_2(VAR_2, ((void*)0),
      VAR_0, 1, 32, 1,
      1);

 VAR_3 = VAR_2->error;
 if (VAR_3) {
  FUNC_0(VAR_2);
  return VAR_3;
 }

 return 0;
}
