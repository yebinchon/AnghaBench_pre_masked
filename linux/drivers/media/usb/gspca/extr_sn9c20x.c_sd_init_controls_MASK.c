
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {scalar_t__ sensor; void* autogain; void* hflip; void* blue; void* brightness; void* jpegqual; void* gain; void* exposure; void* vflip; void* red; void* gamma; void* hue; void* saturation; void* contrast; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
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
 int FUNC_0 (char*) ;
 int VAR_21 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_22)
{
 struct sd *VAR_23 = (struct sd *) VAR_22;
 struct v4l2_ctrl_handler *VAR_24 = &VAR_22->ctrl_handler;

 VAR_22->vdev.ctrl_handler = VAR_24;
 FUNC_3(VAR_24, 13);

 VAR_23->brightness = FUNC_4(VAR_24, &VAR_21,
   VAR_10, 0, 255, 1, 127);
 VAR_23->contrast = FUNC_4(VAR_24, &VAR_21,
   VAR_11, 0, 255, 1, 127);
 VAR_23->saturation = FUNC_4(VAR_24, &VAR_21,
   VAR_19, 0, 255, 1, 127);
 VAR_23->hue = FUNC_4(VAR_24, &VAR_21,
   VAR_16, -180, 180, 1, 0);

 VAR_23->gamma = FUNC_4(VAR_24, &VAR_21,
   VAR_14, 0, 255, 1, 0x10);

 VAR_23->blue = FUNC_4(VAR_24, &VAR_21,
   VAR_9, 0, 127, 1, 0x28);
 VAR_23->red = FUNC_4(VAR_24, &VAR_21,
   VAR_18, 0, 127, 1, 0x28);

 if (VAR_23->sensor != VAR_6 && VAR_23->sensor != VAR_7 &&
     VAR_23->sensor != VAR_5 && VAR_23->sensor != VAR_0 &&
     VAR_23->sensor != VAR_4) {
  VAR_23->hflip = FUNC_4(VAR_24, &VAR_21,
   VAR_15, 0, 1, 1, 0);
  VAR_23->vflip = FUNC_4(VAR_24, &VAR_21,
   VAR_20, 0, 1, 1, 0);
 }

 if (VAR_23->sensor != VAR_7 && VAR_23->sensor != VAR_4 &&
     VAR_23->sensor != VAR_2 && VAR_23->sensor != VAR_1 &&
     VAR_23->sensor != VAR_3)
  VAR_23->exposure = FUNC_4(VAR_24, &VAR_21,
   VAR_12, 0, 0x1780, 1, 0x33);

 if (VAR_23->sensor != VAR_4 && VAR_23->sensor != VAR_2 &&
     VAR_23->sensor != VAR_1 && VAR_23->sensor != VAR_3) {
  VAR_23->gain = FUNC_4(VAR_24, &VAR_21,
   VAR_13, 0, 28, 1, 0);
  VAR_23->autogain = FUNC_4(VAR_24, &VAR_21,
   VAR_8, 0, 1, 1, 1);
 }

 VAR_23->jpegqual = FUNC_4(VAR_24, &VAR_21,
   VAR_17, 50, 90, 1, 80);
 if (VAR_24->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_24->error;
 }

 FUNC_2(4, &VAR_23->brightness);
 FUNC_2(2, &VAR_23->blue);
 if (VAR_23->hflip)
  FUNC_2(2, &VAR_23->hflip);
 if (VAR_23->autogain) {
  if (VAR_23->sensor == VAR_7)



   FUNC_1(3, &VAR_23->autogain, 0, 0);
  else

   FUNC_1(2, &VAR_23->autogain, 0, 0);
 }
 return 0;
}
