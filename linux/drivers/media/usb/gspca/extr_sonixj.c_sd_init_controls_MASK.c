
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {scalar_t__ sensor; int flags; void* vflip; void* red_bal; int freq; void* hflip; void* illum; void* sharpness; void* gamma; void* blue_bal; void* saturation; void* contrast; void* brightness; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* autogain; void* gain; void* exposure; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
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
 int FUNC_0 (char*) ;
 int VAR_30 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_31)
{
 struct sd *VAR_32 = (struct sd *) VAR_31;
 struct v4l2_ctrl_handler *VAR_33 = &VAR_31->ctrl_handler;

 VAR_31->vdev.ctrl_handler = VAR_33;
 FUNC_3(VAR_33, 14);

 VAR_32->brightness = FUNC_4(VAR_33, &VAR_30,
   VAR_16, 0, 255, 1, 128);

 VAR_32->contrast = FUNC_4(VAR_33, &VAR_30,
   VAR_17, 0, 127, 1, 20);

 VAR_32->saturation = FUNC_4(VAR_33, &VAR_30,
   VAR_27, 0, 40, 1, 25);
 VAR_32->red_bal = FUNC_4(VAR_33, &VAR_30,
   VAR_26, 24, 40, 1, 32);
 VAR_32->blue_bal = FUNC_4(VAR_33, &VAR_30,
   VAR_15, 24, 40, 1, 32);

 VAR_32->gamma = FUNC_4(VAR_33, &VAR_30,
   VAR_20, 0, 40, 1, 20);

 if (VAR_32->sensor == VAR_6)
  VAR_32->sharpness = FUNC_4(VAR_33, &VAR_30,
   VAR_28, 0, 255, 1, 16);
 else
  VAR_32->sharpness = FUNC_4(VAR_33, &VAR_30,
   VAR_28, 0, 255, 1, 90);

 if (VAR_32->flags & VAR_2)
  VAR_32->illum = FUNC_4(VAR_33, &VAR_30,
   VAR_22, 0, 1, 1, 0);

 if (VAR_32->sensor == VAR_11) {
  VAR_31->exposure = FUNC_4(VAR_33, &VAR_30,
   VAR_18, 500, 1500, 1, 1024);
  VAR_31->gain = FUNC_4(VAR_33, &VAR_30,
   VAR_19, 4, 49, 1, 15);
  VAR_32->hflip = FUNC_4(VAR_33, &VAR_30,
   VAR_21, 0, 1, 1, 0);
 }

 if (VAR_32->sensor != VAR_4 && VAR_32->sensor != VAR_9 &&
     VAR_32->sensor != VAR_10 && VAR_32->sensor != VAR_12 &&
     VAR_32->sensor != VAR_13)
  VAR_31->autogain = FUNC_4(VAR_33, &VAR_30,
   VAR_14, 0, 1, 1, 1);

 if (VAR_32->sensor == VAR_5 || VAR_32->sensor == VAR_7 ||
     VAR_32->sensor == VAR_8 || VAR_32->sensor == VAR_11)
  VAR_32->vflip = FUNC_4(VAR_33, &VAR_30,
   VAR_29, 0, 1, 1, 0);

 if (VAR_32->sensor == VAR_7 || VAR_32->sensor == VAR_8 ||
     VAR_32->sensor == VAR_9)
  VAR_32->freq = FUNC_5(VAR_33, &VAR_30,
   VAR_23,
   VAR_25, 0,
   VAR_24);

 if (VAR_33->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_33->error;
 }

 FUNC_2(2, &VAR_32->red_bal);
 if (VAR_32->sensor == VAR_11) {
  FUNC_2(2, &VAR_32->vflip);
  FUNC_1(3, &VAR_31->autogain, 0, 0);
 }

 return 0;
}
