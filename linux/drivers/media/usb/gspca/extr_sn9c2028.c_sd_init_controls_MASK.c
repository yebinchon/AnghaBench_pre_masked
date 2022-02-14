
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int dummy; } ;
struct sd {int model; void* autogain; void* gain; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_1 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_3)
{
 struct v4l2_ctrl_handler *VAR_4 = &VAR_3->ctrl_handler;
 struct sd *VAR_5 = (struct sd *)VAR_3;

 VAR_3->vdev.ctrl_handler = VAR_4;
 FUNC_0(VAR_4, 2);

 switch (VAR_5->model) {
 case 0x7003:
  VAR_5->gain = FUNC_1(VAR_4, &VAR_2,
   VAR_1, 0, 20, 1, 0);
  VAR_5->autogain = FUNC_1(VAR_4, &VAR_2,
   VAR_0, 0, 1, 1, 1);
  break;
 default:
  break;
 }

 return 0;
}
