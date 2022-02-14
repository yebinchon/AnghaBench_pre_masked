
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {void* contrast; void* autogain; void* hue; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int,void**) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *)VAR_5;
 struct v4l2_ctrl_handler *VAR_7 = &VAR_5->ctrl_handler;

 VAR_5->vdev.ctrl_handler = VAR_7;
 FUNC_2(VAR_7, 4);
 VAR_6->contrast = FUNC_3(VAR_7, &VAR_4,
   VAR_2, 0, 0x3f, 1, 0x20);
 VAR_6->hue = FUNC_3(VAR_7, &VAR_4,
   VAR_3, 1, 0x7f, 1, 0x40);
 FUNC_3(VAR_7, &VAR_4,
   VAR_1, 0, 0x3f, 1, 0x20);
 VAR_6->autogain = FUNC_3(VAR_7, &VAR_4,
   VAR_0, 0, 1, 1, 1);

 if (VAR_7->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_7->error;
 }
 FUNC_1(2, &VAR_6->contrast);
 return 0;
}
