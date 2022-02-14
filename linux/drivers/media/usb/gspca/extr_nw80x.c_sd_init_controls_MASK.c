
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {int webcam; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* autogain; void* exposure; void* gain; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *)VAR_4;
 struct v4l2_ctrl_handler *VAR_6 = &VAR_4->ctrl_handler;

 VAR_4->vdev.ctrl_handler = VAR_6;
 FUNC_2(VAR_6, 3);
 switch (VAR_5->webcam) {
 case 128:
  VAR_4->autogain = FUNC_3(VAR_6, &VAR_3,
   VAR_0, 0, 1, 1, 1);


  VAR_4->gain = FUNC_3(VAR_6, &VAR_3,
   VAR_2, 0, 127, 1, 127 / 5 * 2);
  VAR_4->exposure = FUNC_3(VAR_6, &VAR_3,
   VAR_1, 0, 9, 1, 9);
  break;
 case 130:
  VAR_4->autogain = FUNC_3(VAR_6, &VAR_3,
   VAR_0, 0, 1, 1, 1);
  VAR_4->gain = FUNC_3(VAR_6, &VAR_3,
   VAR_2, 0, 253, 1, 128);

 case 132:
 case 131:
 case 129:
  VAR_4->exposure = FUNC_3(VAR_6, &VAR_3,
   VAR_1, 0, 315, 1, 150);
  break;
 default:
  break;
 }

 if (VAR_6->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_6->error;
 }
 if (VAR_4->autogain)
  FUNC_1(3, &VAR_4->autogain, 0, 0);
 return 0;
}
