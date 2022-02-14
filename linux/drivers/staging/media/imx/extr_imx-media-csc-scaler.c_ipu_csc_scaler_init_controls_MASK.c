
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_handler {int error; } ;
struct ipu_csc_scaler_ctx {struct v4l2_ctrl_handler ctrl_hdlr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_ctrl_handler*) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct ipu_csc_scaler_ctx *VAR_4)
{
 struct v4l2_ctrl_handler *VAR_5 = &VAR_4->ctrl_hdlr;

 FUNC_1(VAR_5, 3);

 FUNC_3(VAR_5, &VAR_3, VAR_0,
     0, 1, 1, 0);
 FUNC_3(VAR_5, &VAR_3, VAR_2,
     0, 1, 1, 0);
 FUNC_3(VAR_5, &VAR_3, VAR_1,
     0, 270, 90, 0);

 if (VAR_5->error) {
  FUNC_0(VAR_5);
  return VAR_5->error;
 }

 FUNC_2(VAR_5);
 return 0;
}
