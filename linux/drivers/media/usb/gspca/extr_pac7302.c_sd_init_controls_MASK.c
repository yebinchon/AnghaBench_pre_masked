
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {void* hflip; void* brightness; void* sharpness; void* vflip; void* blue_balance; void* red_balance; void* white_balance; void* saturation; void* contrast; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* autogain; void* gain; void* exposure; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*) ;
 int VAR_17 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_18)
{
 struct sd *VAR_19 = (struct sd *) VAR_18;
 struct v4l2_ctrl_handler *VAR_20 = &VAR_18->ctrl_handler;

 VAR_18->vdev.ctrl_handler = VAR_20;
 FUNC_3(VAR_20, 12);

 VAR_19->brightness = FUNC_4(VAR_20, &VAR_17,
     VAR_7, 0, 32, 1, 16);
 VAR_19->contrast = FUNC_4(VAR_20, &VAR_17,
     VAR_8, 0, 255, 1, 127);

 VAR_19->saturation = FUNC_4(VAR_20, &VAR_17,
     VAR_13, 0, 255, 1, 127);
 VAR_19->white_balance = FUNC_4(VAR_20, &VAR_17,
     VAR_16,
     0, 255, 1, 55);
 VAR_19->red_balance = FUNC_4(VAR_20, &VAR_17,
     VAR_12,
     VAR_4,
     VAR_3,
     1, VAR_2);
 VAR_19->blue_balance = FUNC_4(VAR_20, &VAR_17,
     VAR_6,
     VAR_4,
     VAR_3,
     1, VAR_2);

 VAR_18->autogain = FUNC_4(VAR_20, &VAR_17,
     VAR_5, 0, 1, 1, 1);
 VAR_18->exposure = FUNC_4(VAR_20, &VAR_17,
     VAR_9, 0, 1023, 1,
     VAR_0);
 VAR_18->gain = FUNC_4(VAR_20, &VAR_17,
     VAR_10, 0, 62, 1,
     VAR_1);

 VAR_19->hflip = FUNC_4(VAR_20, &VAR_17,
  VAR_11, 0, 1, 1, 0);
 VAR_19->vflip = FUNC_4(VAR_20, &VAR_17,
  VAR_15, 0, 1, 1, 0);

 VAR_19->sharpness = FUNC_4(VAR_20, &VAR_17,
     VAR_14, 0, 15, 1, 8);

 if (VAR_20->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_20->error;
 }

 FUNC_2(2, &VAR_19->brightness);
 FUNC_1(3, &VAR_18->autogain, 0, 0);
 FUNC_2(2, &VAR_19->hflip);
 return 0;
}
