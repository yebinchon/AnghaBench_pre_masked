
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct v4l2_ctrl_config {int def; int id; void* name; } ;
struct pwc_device {int type; int features; void* motor_pan; void* motor_tilt_reset; void* motor_pan_reset; void* motor_tilt; void* awb_delay; void* awb_speed; TYPE_2__* restore_factory; TYPE_1__* restore_user; void* save_user; void* noise_reduction; void* flicker; void* backlight; void* autocontour; void* contour; void* colorfx; void** autogain_expo_cluster; void* exposure; void* gain; void* autogain; void* exposure_auto; void* auto_white_balance; void* blue_balance; void* red_balance; void* gamma; void* saturation; int saturation_fmt; void* contrast; void* brightness; struct v4l2_ctrl_handler ctrl_handler; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 struct v4l2_ctrl_config VAR_43 ;
 struct v4l2_ctrl_config VAR_44 ;
 struct v4l2_ctrl_config VAR_45 ;
 struct v4l2_ctrl_config VAR_46 ;
 struct v4l2_ctrl_config VAR_47 ;
 struct v4l2_ctrl_config VAR_48 ;
 int VAR_49 ;
 struct v4l2_ctrl_config VAR_50 ;
 int FUNC_2 (struct pwc_device*,int ,int ,int*) ;
 int FUNC_3 (struct pwc_device*,int ,int ,int*) ;
 int FUNC_4 (struct pwc_device*,int ,int ,int*) ;
 struct v4l2_ctrl_config VAR_51 ;
 struct v4l2_ctrl_config VAR_52 ;
 struct v4l2_ctrl_config VAR_53 ;
 struct v4l2_ctrl_config VAR_54 ;
 int FUNC_5 (int,void**,int ,int) ;
 int FUNC_6 (int,void**) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_9 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_config*,int *) ;
 void* FUNC_10 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 void* FUNC_11 (struct v4l2_ctrl_handler*,int *,int ,int,int ,int) ;

int FUNC_12(struct pwc_device *VAR_55)
{
 struct v4l2_ctrl_handler *VAR_56;
 struct v4l2_ctrl_config VAR_57;
 int VAR_58, VAR_59;

 VAR_56 = &VAR_55->ctrl_handler;
 VAR_58 = FUNC_8(VAR_56, 20);
 if (VAR_58)
  return VAR_58;


 VAR_58 = FUNC_4(VAR_55, VAR_13, VAR_5, &VAR_59);
 if (VAR_58 || VAR_59 > 127)
  VAR_59 = 63;
 VAR_55->brightness = FUNC_10(VAR_56, &VAR_49,
    VAR_25, 0, 127, 1, VAR_59);

 VAR_58 = FUNC_4(VAR_55, VAR_13, VAR_7, &VAR_59);
 if (VAR_58 || VAR_59 > 63)
  VAR_59 = 31;
 VAR_55->contrast = FUNC_10(VAR_56, &VAR_49,
    VAR_27, 0, 63, 1, VAR_59);

 if (VAR_55->type >= 675) {
  if (VAR_55->type < 730)
   VAR_55->saturation_fmt = VAR_21;
  else
   VAR_55->saturation_fmt = VAR_20;
  VAR_58 = FUNC_2(VAR_55, VAR_12, VAR_55->saturation_fmt,
        &VAR_59);
  if (VAR_58 || VAR_59 < -100 || VAR_59 > 100)
   VAR_59 = 0;
  VAR_55->saturation = FUNC_10(VAR_56, &VAR_49,
          VAR_35, -100, 100, 1, VAR_59);
 }

 VAR_58 = FUNC_4(VAR_55, VAR_13, VAR_11, &VAR_59);
 if (VAR_58 || VAR_59 > 31)
  VAR_59 = 15;
 VAR_55->gamma = FUNC_10(VAR_56, &VAR_49,
    VAR_31, 0, 31, 1, VAR_59);


 VAR_58 = FUNC_4(VAR_55, VAR_12, VAR_40, &VAR_59);
 if (VAR_58 || VAR_59 > VAR_41)
  VAR_59 = VAR_41;
 VAR_57 = VAR_43;
 VAR_57.name = FUNC_7(VAR_57.id);
 VAR_57.def = VAR_59;
 VAR_55->auto_white_balance = FUNC_9(VAR_56, &VAR_57, ((void*)0));

 if (!VAR_55->auto_white_balance)
  return VAR_56->error;

 VAR_58 = FUNC_4(VAR_55, VAR_12,
       VAR_18, &VAR_59);
 if (VAR_58)
  VAR_59 = 127;
 VAR_55->red_balance = FUNC_10(VAR_56, &VAR_49,
    VAR_34, 0, 255, 1, VAR_59);

 VAR_58 = FUNC_4(VAR_55, VAR_12,
       VAR_17, &VAR_59);
 if (VAR_58)
  VAR_59 = 127;
 VAR_55->blue_balance = FUNC_10(VAR_56, &VAR_49,
    VAR_24, 0, 255, 1, VAR_59);

 FUNC_5(3, &VAR_55->auto_white_balance, VAR_42, 1);


 VAR_58 = FUNC_4(VAR_55, VAR_13, VAR_0, &VAR_59);
 if (VAR_58 || (VAR_59 != 0 && VAR_59 != 0xff))
  VAR_59 = 0;

 VAR_55->autogain = FUNC_10(VAR_56, &VAR_49,
    VAR_23, 0, 1, 1, VAR_59 == 0);
 if (!VAR_55->autogain)
  return VAR_56->error;

 VAR_58 = FUNC_4(VAR_55, VAR_13, VAR_15, &VAR_59);
 if (VAR_58 || VAR_59 > 63)
  VAR_59 = 31;
 VAR_55->gain = FUNC_10(VAR_56, &VAR_49,
    VAR_30, 0, 63, 1, VAR_59);


 if (FUNC_0(VAR_55->type)) {
  VAR_58 = FUNC_4(VAR_55, VAR_13, VAR_22,
        &VAR_59);
  if (VAR_58 || (VAR_59 != 0 && VAR_59 != 0xff))
   VAR_59 = 0;




  VAR_55->exposure_auto = FUNC_11(VAR_56,
     &VAR_49,
     VAR_29,
     1, 0, VAR_59 != 0);
  if (!VAR_55->exposure_auto)
   return VAR_56->error;


  VAR_58 = FUNC_3(VAR_55, VAR_14,
         VAR_19, &VAR_59);
  if (VAR_58 || VAR_59 > 655)
   VAR_59 = 655;
  VAR_55->exposure = FUNC_10(VAR_56, &VAR_49,
     VAR_28, 0, 655, 1, VAR_59);

  FUNC_5(2, &VAR_55->autogain, 0, 1);
  FUNC_5(2, &VAR_55->exposure_auto,
           VAR_39, 1);
 } else if (FUNC_1(VAR_55->type)) {

  VAR_58 = FUNC_3(VAR_55, VAR_14,
         VAR_19, &VAR_59);
  if (VAR_58 || VAR_59 > 255)
   VAR_59 = 255;
  VAR_55->exposure = FUNC_10(VAR_56, &VAR_49,
     VAR_28, 0, 255, 1, VAR_59);

  VAR_55->autogain_expo_cluster[0] = VAR_55->autogain;
  VAR_55->autogain_expo_cluster[1] = VAR_55->gain;
  VAR_55->autogain_expo_cluster[2] = VAR_55->exposure;
  FUNC_5(3, VAR_55->autogain_expo_cluster,
           0, 1);
 }


 VAR_58 = FUNC_4(VAR_55, VAR_12, VAR_6,
    &VAR_59);
 if (VAR_58 || (VAR_59 != 0 && VAR_59 != 0xff))
  VAR_59 = 0xff;

 VAR_55->colorfx = FUNC_11(VAR_56, &VAR_49,
    VAR_26, 1, 0, VAR_59 == 0);


 VAR_58 = FUNC_4(VAR_55, VAR_13, VAR_1, &VAR_59);
 if (VAR_58 || (VAR_59 != 0 && VAR_59 != 0xff))
  VAR_59 = 0;
 VAR_57 = VAR_44;
 VAR_57.def = VAR_59 == 0;
 VAR_55->autocontour = FUNC_9(VAR_56, &VAR_57, ((void*)0));
 if (!VAR_55->autocontour)
  return VAR_56->error;

 VAR_58 = FUNC_4(VAR_55, VAR_13, VAR_16, &VAR_59);
 if (VAR_58 || VAR_59 > 63)
  VAR_59 = 31;
 VAR_57 = VAR_48;
 VAR_57.def = VAR_59;
 VAR_55->contour = FUNC_9(VAR_56, &VAR_57, ((void*)0));

 FUNC_5(2, &VAR_55->autocontour, 0, 0);


 VAR_58 = FUNC_4(VAR_55, VAR_13,
       VAR_4, &VAR_59);
 if (VAR_58 || (VAR_59 != 0 && VAR_59 != 0xff))
  VAR_59 = 0;
 VAR_57 = VAR_47;
 VAR_57.name = FUNC_7(VAR_57.id);
 VAR_57.def = VAR_59 == 0;
 VAR_55->backlight = FUNC_9(VAR_56, &VAR_57, ((void*)0));


 VAR_58 = FUNC_4(VAR_55, VAR_13,
       VAR_10, &VAR_59);
 if (VAR_58 || (VAR_59 != 0 && VAR_59 != 0xff))
  VAR_59 = 0;
 VAR_57 = VAR_50;
 VAR_57.name = FUNC_7(VAR_57.id);
 VAR_57.def = VAR_59 == 0;
 VAR_55->flicker = FUNC_9(VAR_56, &VAR_57, ((void*)0));


 VAR_58 = FUNC_4(VAR_55, VAR_13,
       VAR_8, &VAR_59);
 if (VAR_58 || VAR_59 > 3)
  VAR_59 = 2;
 VAR_57 = VAR_51;
 VAR_57.def = VAR_59;
 VAR_55->noise_reduction = FUNC_9(VAR_56, &VAR_57, ((void*)0));


 VAR_55->save_user = FUNC_9(VAR_56, &VAR_54, ((void*)0));
 VAR_55->restore_user = FUNC_9(VAR_56, &VAR_53,
        ((void*)0));
 if (VAR_55->restore_user)
  VAR_55->restore_user->flags |= VAR_38;
 VAR_55->restore_factory = FUNC_9(VAR_56,
           &VAR_52,
           ((void*)0));
 if (VAR_55->restore_factory)
  VAR_55->restore_factory->flags |= VAR_38;


 VAR_58 = FUNC_4(VAR_55, VAR_12,
       VAR_3, &VAR_59);
 if (VAR_58 || VAR_59 < 1 || VAR_59 > 32)
  VAR_59 = 1;
 VAR_57 = VAR_46;
 VAR_57.def = VAR_59;
 VAR_55->awb_speed = FUNC_9(VAR_56, &VAR_57, ((void*)0));

 VAR_58 = FUNC_4(VAR_55, VAR_12,
       VAR_2, &VAR_59);
 if (VAR_58 || VAR_59 > 63)
  VAR_59 = 0;
 VAR_57 = VAR_45;
 VAR_57.def = VAR_59;
 VAR_55->awb_delay = FUNC_9(VAR_56, &VAR_57, ((void*)0));

 if (!(VAR_55->features & VAR_9))
  return VAR_56->error;


 VAR_55->motor_pan = FUNC_10(VAR_56, &VAR_49,
    VAR_32, -4480, 4480, 64, 0);
 if (!VAR_55->motor_pan)
  return VAR_56->error;
 VAR_55->motor_tilt = FUNC_10(VAR_56, &VAR_49,
    VAR_36, -1920, 1920, 64, 0);
 VAR_55->motor_pan_reset = FUNC_10(VAR_56, &VAR_49,
    VAR_33, 0, 0, 0, 0);
 VAR_55->motor_tilt_reset = FUNC_10(VAR_56, &VAR_49,
    VAR_37, 0, 0, 0, 0);
 FUNC_6(4, &VAR_55->motor_pan);

 return VAR_56->error;
}
