
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {void* sat; void* contrast; void* brightness; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_2 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *)VAR_4;
 struct v4l2_ctrl_handler *VAR_6 = &VAR_4->ctrl_handler;

 VAR_4->vdev.ctrl_handler = VAR_6;
 FUNC_1(VAR_6, 3);
 VAR_5->brightness = FUNC_2(VAR_6, &VAR_3,
   VAR_0, 0, 255, 1, 0xd4);
 VAR_5->contrast = FUNC_2(VAR_6, &VAR_3,
   VAR_1, 0x0a, 0x1f, 1, 0x0c);
 VAR_5->sat = FUNC_2(VAR_6, &VAR_3,
   VAR_2, 0, 7, 1, 3);
 if (VAR_6->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_6->error;
 }
 return 0;
}
