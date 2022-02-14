
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {size_t sensor; scalar_t__ bridge; void* hflip; void* autobright; void* jpegqual; void* freq; void* vflip; void* brightness; } ;
struct TYPE_3__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {void* autogain; void* exposure; TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;
struct TYPE_4__ {scalar_t__ has_freq; scalar_t__ has_autogain; scalar_t__ has_autobright; scalar_t__ has_hvflip; scalar_t__ has_exposure; scalar_t__ has_sat; scalar_t__ has_contrast; scalar_t__ has_brightness; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
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
 int FUNC_0 (struct gspca_dev*,char*) ;
 int VAR_20 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,int *,int ,int ,int ,int ) ;
 TYPE_2__* VAR_21 ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_22)
{
 struct sd *VAR_23 = (struct sd *)VAR_22;
 struct v4l2_ctrl_handler *VAR_24 = &VAR_22->ctrl_handler;

 VAR_22->vdev.ctrl_handler = VAR_24;
 FUNC_3(VAR_24, 10);
 if (VAR_21[VAR_23->sensor].has_brightness)
  VAR_23->brightness = FUNC_4(VAR_24, &VAR_20,
   VAR_10, 0,
   VAR_23->sensor == VAR_6 ? 6 : 255, 1,
   VAR_23->sensor == VAR_6 ? 3 : 127);
 if (VAR_21[VAR_23->sensor].has_contrast) {
  if (VAR_23->sensor == VAR_6)
   FUNC_4(VAR_24, &VAR_20,
    VAR_11, 0, 6, 1, 3);
  else
   FUNC_4(VAR_24, &VAR_20,
    VAR_11, 0, 255, 1,
    (VAR_23->sensor == VAR_4 ||
     VAR_23->sensor == VAR_5) ? 200 : 127);
 }
 if (VAR_21[VAR_23->sensor].has_sat)
  FUNC_4(VAR_24, &VAR_20,
   VAR_18, 0,
   VAR_23->sensor == VAR_6 ? 4 : 255, 1,
   VAR_23->sensor == VAR_6 ? 2 : 127);
 if (VAR_21[VAR_23->sensor].has_exposure)
  VAR_22->exposure = FUNC_4(VAR_24, &VAR_20,
   VAR_12, 0, 255, 1, 127);
 if (VAR_21[VAR_23->sensor].has_hvflip) {
  VAR_23->hflip = FUNC_4(VAR_24, &VAR_20,
   VAR_13, 0, 1, 1, 0);
  VAR_23->vflip = FUNC_4(VAR_24, &VAR_20,
   VAR_19, 0, 1, 1, 0);
 }
 if (VAR_21[VAR_23->sensor].has_autobright)
  VAR_23->autobright = FUNC_4(VAR_24, &VAR_20,
   VAR_8, 0, 1, 1, 1);
 if (VAR_21[VAR_23->sensor].has_autogain)
  VAR_22->autogain = FUNC_4(VAR_24, &VAR_20,
   VAR_9, 0, 1, 1, 1);
 if (VAR_21[VAR_23->sensor].has_freq) {
  if (VAR_23->sensor == VAR_7)
   VAR_23->freq = FUNC_5(VAR_24, &VAR_20,
    VAR_15,
    VAR_17, 0,
    VAR_17);
  else
   VAR_23->freq = FUNC_5(VAR_24, &VAR_20,
    VAR_15,
    VAR_16, 0, 0);
 }
 if (VAR_23->bridge == VAR_0)
  VAR_23->jpegqual = FUNC_4(VAR_24, &VAR_20,
   VAR_14,
   VAR_3, VAR_2, 1, VAR_1);

 if (VAR_24->error) {
  FUNC_0(VAR_22, "Could not initialize controls\n");
  return VAR_24->error;
 }
 if (VAR_22->autogain)
  FUNC_1(3, &VAR_22->autogain, 0, 1);
 if (VAR_23->autobright)
  FUNC_1(2, &VAR_23->autobright, 0, 0);
 if (VAR_23->hflip)
  FUNC_2(2, &VAR_23->hflip);
 return 0;
}
