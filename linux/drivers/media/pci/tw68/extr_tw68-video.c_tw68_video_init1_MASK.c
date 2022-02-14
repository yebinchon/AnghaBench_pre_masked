
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct tw68_dev {TYPE_1__ v4l2_dev; struct v4l2_ctrl_handler hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct v4l2_ctrl_handler*) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;

int FUNC_4(struct tw68_dev *VAR_7)
{
 struct v4l2_ctrl_handler *VAR_8 = &VAR_7->hdl;

 FUNC_1(VAR_8, 6);
 FUNC_3(VAR_8, &VAR_6,
   VAR_0, -128, 127, 1, 20);
 FUNC_3(VAR_8, &VAR_6,
   VAR_3, 0, 255, 1, 100);
 FUNC_3(VAR_8, &VAR_6,
   VAR_5, 0, 255, 1, 128);

 FUNC_3(VAR_8, &VAR_6,
   VAR_4, -128, 127, 1, 0);
 FUNC_3(VAR_8, &VAR_6,
   VAR_2, 0, 1, 1, 0);
 FUNC_3(VAR_8, &VAR_6,
   VAR_1, 0, 1, 1, 1);
 if (VAR_8->error) {
  FUNC_0(VAR_8);
  return VAR_8->error;
 }
 VAR_7->v4l2_dev.ctrl_handler = VAR_8;
 FUNC_2(VAR_8);
 return 0;
}
