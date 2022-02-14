
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {size_t AC50Hz; size_t whitebal; size_t mirror; size_t flip; size_t brightness; size_t contrast; size_t gamma; size_t backlight; size_t sharpness; size_t hue; } ;
struct TYPE_6__ {size_t whitebal; size_t brightness; size_t contrast; size_t gamma; size_t backlight; size_t sharpness; } ;
struct TYPE_10__ {size_t backlight; size_t brightness; size_t sharpness; size_t contrast; size_t gamma; scalar_t__ hue; scalar_t__ mirror; scalar_t__ flip; scalar_t__ AC50Hz; size_t whitebal; } ;
struct sd {int mirrorMask; int nbIm; int waitSet; size_t swapRB; TYPE_2__ vold; TYPE_1__ vmax; TYPE_5__ vcur; } ;
struct TYPE_9__ {TYPE_3__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_4__ cam; } ;
typedef size_t s32 ;
struct TYPE_8__ {size_t priv; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int,int,int,int,int,int*) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_19)
{
 struct sd *VAR_20 = (struct sd *) VAR_19;
 s32 VAR_21 = VAR_19->cam.cam_mode[(s32) VAR_19->curr_mode].priv;

 s32 VAR_22 = VAR_20->vcur.backlight;
 s32 VAR_23 = VAR_20->vcur.brightness;
 s32 VAR_24 = VAR_20->vcur.sharpness;
 s32 VAR_25 = VAR_20->vcur.contrast;
 s32 VAR_26 = VAR_20->vcur.gamma;
 s32 VAR_27 = (VAR_20->vcur.hue > 0);
 s32 VAR_28 = (((VAR_20->vcur.mirror > 0) ^ VAR_20->mirrorMask) > 0);
 s32 VAR_29 = (((VAR_20->vcur.flip > 0) ^ VAR_20->mirrorMask) > 0);
 s32 VAR_30 = (VAR_20->vcur.AC50Hz > 0);
 s32 VAR_31 = VAR_20->vcur.whitebal;

 u8 VAR_32[] = {0x6c, 0x00, 0x08};
 u8 VAR_33[] = {0x90, 0x00, 0x00};
 u8 VAR_34[] = {0x90, 0x00, 0x80};
 u8 VAR_35[] = {0x8c, 0xa7, 0x00};
 u8 VAR_36[] = {0x90, 0x00, 0x00};
 u8 VAR_37[] = {0x8c, 0xa7, 0x00};
 u8 VAR_38[] = {0x90, 0x00, 0x00};
 u8 VAR_39[] = {0x90, 0x04, 0x6c};
 u8 VAR_40[] = {0x90, 0x00, 0x24};
 u8 VAR_41[] = {0x90, 0x00, 0x00};


 if (VAR_20->nbIm < 4) {
  VAR_20->waitSet = 1;
  return 0;
 }
 VAR_20->waitSet = 0;

 if (VAR_30 != VAR_20->vold.AC50Hz) {
  VAR_20->vold.AC50Hz = VAR_30;

  VAR_34[2] = VAR_30 ? 0xc0 : 0x80;
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_7);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_34);
  FUNC_3(20);
 }

 if (VAR_31 != VAR_20->vold.whitebal) {
  VAR_20->vold.whitebal = VAR_31;
  if (VAR_31 < 0 || VAR_31 > VAR_20->vmax.whitebal)
   VAR_31 = 0;

  VAR_35[2] = 0x9d;
  VAR_37[2] = VAR_35[2] + 1;
  if (VAR_31 == 0) {
   VAR_38[2] = VAR_36[2] = 0;
   VAR_41[2] = 0x17;
  } else if (VAR_31 == 1) {
   VAR_38[2] = VAR_36[2] = 0;
   VAR_41[2] = 0x35;
  } else if (VAR_31 == 2) {
   VAR_38[2] = VAR_36[2] = 0x20;
   VAR_41[2] = 0x17;
  }
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_35);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_36);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_37);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_38);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_14);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_41);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_12);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_13);
 }

 if (VAR_28 != VAR_20->vold.mirror || VAR_29 != VAR_20->vold.flip) {
  VAR_20->vold.mirror = VAR_28;
  VAR_20->vold.flip = VAR_29;

  VAR_39[2] = 0x6c + 2 * (1 - VAR_29) + (1 - VAR_28);
  VAR_40[2] = 0x24 + 2 * (1 - VAR_29) + (1 - VAR_28);

  FUNC_2(VAR_19, VAR_16,
    FUNC_0(VAR_16));

  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_8);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_39);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_9);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_40);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_10);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_11);
  FUNC_3(40);

  if (VAR_21 == VAR_0 || VAR_21 == VAR_1)
   FUNC_2(VAR_19, VAR_18,
     FUNC_0(VAR_18));
  else
   FUNC_2(VAR_19, VAR_17,
     FUNC_0(VAR_17));

  FUNC_2(VAR_19, VAR_15,
    FUNC_0(VAR_15));
 }

 if (VAR_23 != VAR_20->vold.brightness) {
  VAR_20->vold.brightness = VAR_23;
  if (VAR_23 < 0 || VAR_23 > VAR_20->vmax.brightness)
   VAR_23 = 0;

  VAR_33[2] = VAR_23;
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_2);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_33);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_3);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_4);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_5);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_6);
 }

 if (VAR_25 != VAR_20->vold.contrast || VAR_26 != VAR_20->vold.gamma) {
  VAR_20->vold.contrast = VAR_25;
  if (VAR_25 < 0 || VAR_25 > VAR_20->vmax.contrast)
   VAR_25 = 0;
  VAR_20->vold.gamma = VAR_26;
  if (VAR_26 < 0 || VAR_26 > VAR_20->vmax.gamma)
   VAR_26 = 0;

  VAR_35[2] = 0x6d;
  VAR_37[2] = VAR_35[2] + 1;
  if (VAR_25 == 0)
   VAR_25 = 4;
  VAR_38[2] = VAR_36[2] = VAR_25 * 0x10 + 2 - VAR_26;
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_35);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_36);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_37);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_38);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_12);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_13);
 }

 if (VAR_22 != VAR_20->vold.backlight) {
  VAR_20->vold.backlight = VAR_22;
  if (VAR_22 < 0 || VAR_22 > VAR_20->vmax.backlight)
   VAR_22 = 0;

  VAR_35[2] = 0x9d;
  VAR_37[2] = VAR_35[2] + 1;
  VAR_38[2] = VAR_36[2] = VAR_22;
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_35);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_36);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_37);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_38);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_12);
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0033, 3, VAR_13);
 }

 if (VAR_24 != VAR_20->vold.sharpness) {
  VAR_20->vold.sharpness = VAR_24;
  if (VAR_24 < 0 || VAR_24 > VAR_20->vmax.sharpness)
   VAR_24 = 0;

  VAR_32[1] = VAR_24;
  FUNC_1(VAR_19, 0x40, 3, 0x7a00, 0x0032, 3, VAR_32);
 }

 if (VAR_27 != VAR_20->vold.hue) {
  VAR_20->swapRB = VAR_27;
  VAR_20->vold.hue = VAR_27;
 }

 return 0;
}
