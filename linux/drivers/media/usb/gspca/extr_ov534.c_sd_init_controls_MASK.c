
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {scalar_t__ sensor; void* autoexposure; void* autogain; void* plfreq; void* vflip; void* hflip; void* sharpness; void* autowhitebalance; void* exposure; void* gain; void* contrast; void* brightness; void* saturation; void* hue; struct v4l2_ctrl_handler ctrl_handler; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 void* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_20)
{
 struct sd *VAR_21 = (struct sd *) VAR_20;
 struct v4l2_ctrl_handler *VAR_22 = &VAR_21->ctrl_handler;

 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;

 if (VAR_21->sensor == VAR_0) {
  VAR_23 = 0,
  VAR_24 = 6,
  VAR_25 = 3,
  VAR_26 = -127;
  VAR_27 = 127;
  VAR_28 = 0;
  VAR_29 = 0x80;
  VAR_30 = 0x40;
  VAR_31 = 0x08;
  VAR_32 = 0x60;
  VAR_33 = 0x13;
  VAR_34 = 1;
 } else {
  VAR_23 = 0,
  VAR_24 = 255,
  VAR_25 = 64,
  VAR_26 = 0;
  VAR_27 = 255;
  VAR_28 = 0;
  VAR_29 = 255;
  VAR_30 = 32;
  VAR_31 = 0;
  VAR_32 = 255;
  VAR_33 = 120;
  VAR_34 = 0;
 }

 VAR_20->vdev.ctrl_handler = VAR_22;

 FUNC_2(VAR_22, 13);

 if (VAR_21->sensor == VAR_1)
  VAR_21->hue = FUNC_3(VAR_22, &VAR_19,
    VAR_10, -90, 90, 1, 0);

 VAR_21->saturation = FUNC_3(VAR_22, &VAR_19,
   VAR_14, VAR_23, VAR_24, 1,
   VAR_25);
 VAR_21->brightness = FUNC_3(VAR_22, &VAR_19,
   VAR_4, VAR_26, VAR_27, 1,
   VAR_28);
 VAR_21->contrast = FUNC_3(VAR_22, &VAR_19,
   VAR_5, 0, VAR_29, 1, VAR_30);

 if (VAR_21->sensor == VAR_1) {
  VAR_21->autogain = FUNC_3(VAR_22, &VAR_19,
    VAR_2, 0, 1, 1, 1);
  VAR_21->gain = FUNC_3(VAR_22, &VAR_19,
    VAR_8, 0, 63, 1, 20);
 }

 VAR_21->autoexposure = FUNC_4(VAR_22, &VAR_19,
   VAR_7,
   VAR_18, 0,
   VAR_17);
 VAR_21->exposure = FUNC_3(VAR_22, &VAR_19,
   VAR_6, VAR_31, VAR_32, 1,
   VAR_33);

 VAR_21->autowhitebalance = FUNC_3(VAR_22, &VAR_19,
   VAR_3, 0, 1, 1, 1);

 if (VAR_21->sensor == VAR_1)
  VAR_21->sharpness = FUNC_3(VAR_22, &VAR_19,
    VAR_15, 0, 63, 1, 0);

 VAR_21->hflip = FUNC_3(VAR_22, &VAR_19,
   VAR_9, 0, 1, 1, VAR_34);
 VAR_21->vflip = FUNC_3(VAR_22, &VAR_19,
   VAR_16, 0, 1, 1, 0);
 VAR_21->plfreq = FUNC_4(VAR_22, &VAR_19,
   VAR_11,
   VAR_12, 0,
   VAR_13);

 if (VAR_22->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_22->error;
 }

 if (VAR_21->sensor == VAR_1)
  FUNC_1(2, &VAR_21->autogain, 0, 1);

 FUNC_1(2, &VAR_21->autoexposure, VAR_18,
          1);

 return 0;
}
