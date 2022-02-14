
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {void* hflip; void* contrast; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* autogain; void* gain; void* exposure; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_8;
 struct v4l2_ctrl_handler *VAR_10 = &VAR_8->ctrl_handler;

 VAR_8->vdev.ctrl_handler = VAR_10;
 FUNC_2(VAR_10, 5);

 VAR_9->contrast = FUNC_3(VAR_10, &VAR_7,
     VAR_3, 0, 15, 1, 7);
 VAR_8->autogain = FUNC_3(VAR_10, &VAR_7,
     VAR_2, 0, 1, 1, 1);
 VAR_8->exposure = FUNC_3(VAR_10, &VAR_7,
     VAR_4, 2, 63, 1,
     VAR_0);
 VAR_8->gain = FUNC_3(VAR_10, &VAR_7,
     VAR_5, 0, 244, 1,
     VAR_1);
 VAR_9->hflip = FUNC_3(VAR_10, &VAR_7,
  VAR_6, 0, 1, 1, 0);

 if (VAR_10->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_10->error;
 }

 FUNC_1(3, &VAR_8->autogain, 0, 0);
 return 0;
}
