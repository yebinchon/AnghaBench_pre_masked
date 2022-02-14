
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_6__ {int backlight; int sharpness; int whitebal; int AC50Hz; int flip; int mirror; int gamma; int hue; int saturation; int contrast; int brightness; } ;
struct TYPE_5__ {scalar_t__ backlight; scalar_t__ sharpness; scalar_t__ whitebal; scalar_t__ AC50Hz; scalar_t__ flip; scalar_t__ mirror; scalar_t__ gamma; scalar_t__ hue; scalar_t__ saturation; scalar_t__ contrast; scalar_t__ brightness; } ;
struct sd {TYPE_3__ vcur; TYPE_2__ vmax; } ;
struct TYPE_4__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


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
 int FUNC_0 (char*) ;
 int VAR_11 ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int *,int ,int ,scalar_t__,int,int ) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_12)
{
 struct sd *VAR_13 = (struct sd *) VAR_12;
 struct v4l2_ctrl_handler *VAR_14 = &VAR_12->ctrl_handler;

 VAR_12->vdev.ctrl_handler = VAR_14;
 FUNC_1(VAR_14, 11);

 if (VAR_13->vmax.brightness)
  FUNC_2(VAR_14, &VAR_11, VAR_1,
      0, VAR_13->vmax.brightness, 1,
      VAR_13->vcur.brightness);

 if (VAR_13->vmax.contrast)
  FUNC_2(VAR_14, &VAR_11, VAR_2,
      0, VAR_13->vmax.contrast, 1,
      VAR_13->vcur.contrast);

 if (VAR_13->vmax.saturation)
  FUNC_2(VAR_14, &VAR_11, VAR_7,
      0, VAR_13->vmax.saturation, 1,
      VAR_13->vcur.saturation);

 if (VAR_13->vmax.hue)
  FUNC_2(VAR_14, &VAR_11, VAR_5,
      0, VAR_13->vmax.hue, 1, VAR_13->vcur.hue);

 if (VAR_13->vmax.gamma)
  FUNC_2(VAR_14, &VAR_11, VAR_3,
      0, VAR_13->vmax.gamma, 1, VAR_13->vcur.gamma);

 if (VAR_13->vmax.mirror)
  FUNC_2(VAR_14, &VAR_11, VAR_4,
      0, VAR_13->vmax.mirror, 1, VAR_13->vcur.mirror);

 if (VAR_13->vmax.flip)
  FUNC_2(VAR_14, &VAR_11, VAR_9,
      0, VAR_13->vmax.flip, 1, VAR_13->vcur.flip);

 if (VAR_13->vmax.AC50Hz)
  FUNC_3(VAR_14, &VAR_11,
      VAR_6,
      VAR_13->vmax.AC50Hz, 0, VAR_13->vcur.AC50Hz);

 if (VAR_13->vmax.whitebal)
  FUNC_2(VAR_14, &VAR_11,
      VAR_10,
      0, VAR_13->vmax.whitebal, 1, VAR_13->vcur.whitebal);

 if (VAR_13->vmax.sharpness)
  FUNC_2(VAR_14, &VAR_11, VAR_8,
      0, VAR_13->vmax.sharpness, 1,
      VAR_13->vcur.sharpness);

 if (VAR_13->vmax.backlight)
  FUNC_2(VAR_14, &VAR_11,
      VAR_0,
      0, VAR_13->vmax.backlight, 1,
      VAR_13->vcur.backlight);

 if (VAR_14->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_14->error;
 }

 return 0;
}
