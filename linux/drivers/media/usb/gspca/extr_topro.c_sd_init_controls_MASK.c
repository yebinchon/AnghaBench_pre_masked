
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {scalar_t__ sensor; scalar_t__ bridge; void* jpegqual; void* gamma; void* sharpness; void* blue; void* red; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* exposure; void* autogain; void* gain; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 int VAR_13 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_14)
{
 struct sd *VAR_15 = (struct sd *)VAR_14;
 struct v4l2_ctrl_handler *VAR_16 = &VAR_14->ctrl_handler;

 VAR_14->vdev.ctrl_handler = VAR_16;
 FUNC_3(VAR_16, 4);
 VAR_14->exposure = FUNC_4(VAR_16, &VAR_13,
   VAR_7, 1, 0xdc, 1, 0x4e);
 if (VAR_15->sensor == VAR_3) {
  VAR_15->red = FUNC_4(VAR_16, &VAR_13,
   VAR_11, 0, 4095, 1, 256);
  VAR_15->blue = FUNC_4(VAR_16, &VAR_13,
   VAR_6, 0, 4095, 1, 256);
 }
 if (VAR_15->sensor == VAR_4)
  VAR_14->gain = FUNC_4(VAR_16, &VAR_13,
   VAR_8, 0, 15, 1, 3);
 else
  VAR_14->gain = FUNC_4(VAR_16, &VAR_13,
   VAR_8, 0, 4095, 1, 256);
 VAR_15->sharpness = FUNC_4(VAR_16, &VAR_13,
   VAR_12, 0, 3, 1, 2);
 VAR_15->gamma = FUNC_4(VAR_16, &VAR_13,
   VAR_9, 0, VAR_2 - 1, 1,
   (VAR_15->sensor == VAR_4 &&
    VAR_15->bridge == VAR_0) ? 0 : 1);
 if (VAR_15->bridge == VAR_1)
  VAR_14->autogain = FUNC_4(VAR_16, &VAR_13,
   VAR_5, 0, 1, 1, 1);
 if (VAR_15->sensor == VAR_4)
  VAR_15->jpegqual = FUNC_4(VAR_16, &VAR_13,
   VAR_10,
   0, 15, 1, (VAR_15->bridge == VAR_1) ? 0 : 13);

 if (VAR_16->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_16->error;
 }
 if (VAR_14->autogain)
  FUNC_1(3, &VAR_14->autogain, 0, 0);
 else
  FUNC_2(2, &VAR_14->exposure);
 return 0;
}
