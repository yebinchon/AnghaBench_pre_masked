
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int whitebal; int brightness; int saturation; int sharpness; int hue; int backlight; int gamma; int contrast; } ;
struct TYPE_5__ {int AC50Hz; int whitebal; int brightness; int saturation; int sharpness; int hue; int backlight; int mirror; int flip; int gamma; int contrast; } ;
struct TYPE_4__ {int backlight; int brightness; int sharpness; int contrast; int gamma; int hue; int saturation; int whitebal; scalar_t__ mirror; scalar_t__ flip; scalar_t__ AC50Hz; } ;
struct sd {int mirrorMask; int swapRB; TYPE_3__ vmax; TYPE_2__ vold; TYPE_1__ vcur; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int,int,int,int,int,int*) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_9;

 s32 VAR_11 = VAR_10->vcur.backlight;
 s32 VAR_12 = VAR_10->vcur.brightness;
 s32 VAR_13 = VAR_10->vcur.sharpness;
 s32 VAR_14 = VAR_10->vcur.contrast;
 s32 VAR_15 = VAR_10->vcur.gamma;
 s32 VAR_16 = VAR_10->vcur.hue;
 s32 VAR_17 = VAR_10->vcur.saturation;
 s32 VAR_18 = VAR_10->vcur.whitebal;
 s32 VAR_19 = (((VAR_10->vcur.mirror > 0) ^ VAR_10->mirrorMask) > 0);
 s32 VAR_20 = (((VAR_10->vcur.flip > 0) ^ VAR_10->mirrorMask) > 0);
 s32 VAR_21 = (VAR_10->vcur.AC50Hz > 0);
 s32 VAR_22;

 if (VAR_21 != VAR_10->vold.AC50Hz) {
  VAR_10->vold.AC50Hz = VAR_21;

  VAR_21 = 2 * (VAR_21 == 0);
  FUNC_0(VAR_9, 0x40, 1, 0xba00, 0x00f0, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba02, 0x00f1, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 , 0x005b, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba01 + VAR_21, 0x00f1, 0, ((void*)0));
 }

 if (VAR_18 != VAR_10->vold.whitebal) {
  VAR_10->vold.whitebal = VAR_18;
  if (VAR_18 < 0 || VAR_18 > VAR_10->vmax.whitebal)
   VAR_18 = 0;

  for (VAR_22 = 0; VAR_22 < 2; VAR_22++) {
   if (VAR_18 == 0) {
    FUNC_0(VAR_9, 0x40, 1,
      0x0010, 0x0010, 0, ((void*)0));
    FUNC_0(VAR_9, 0x40, 1,
      0x0003, 0x00c1, 0, ((void*)0));
    FUNC_0(VAR_9, 0x40, 1,
      0x0042, 0x00c2, 0, ((void*)0));
    FUNC_0(VAR_9, 0x40, 3,
      0xba00, 0x0200, 48, VAR_3);
   }

   if (VAR_18 == 1) {
    FUNC_0(VAR_9, 0x40, 1,
      0x0010, 0x0010, 0, ((void*)0));
    FUNC_0(VAR_9, 0x40, 1,
      0x0004, 0x00c1, 0, ((void*)0));
    FUNC_0(VAR_9, 0x40, 1,
      0x0043, 0x00c2, 0, ((void*)0));
    FUNC_0(VAR_9, 0x40, 3,
      0xba00, 0x0200, 48, VAR_2);
   }

   if (VAR_18 == 2) {
    FUNC_0(VAR_9, 0x40, 1,
      0x0010, 0x0010, 0, ((void*)0));
    FUNC_0(VAR_9, 0x40, 1,
      0x0003, 0x00c1, 0, ((void*)0));
    FUNC_0(VAR_9, 0x40, 1,
      0x0042, 0x00c2, 0, ((void*)0));
    FUNC_0(VAR_9, 0x40, 3,
      0xba00, 0x0200, 44, VAR_1);
   }
  }
 }

 if (VAR_12 != VAR_10->vold.brightness) {
  VAR_10->vold.brightness = VAR_12;
  if (VAR_12 < 0 || VAR_12 > VAR_10->vmax.brightness)
   VAR_12 = 0;

  VAR_12 = VAR_5[VAR_12];
  FUNC_0(VAR_9, 0x40, 1, 0xba00, 0x00f0, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba01, 0x00f1, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 + VAR_12, 0x0034, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 + VAR_12, 0x00f1, 0, ((void*)0));
 }

 if (VAR_17 != VAR_10->vold.saturation) {
  VAR_10->vold.saturation = VAR_17;
  if (VAR_17 < 0 || VAR_17 > VAR_10->vmax.saturation)
   VAR_17 = 0;

  VAR_17 = VAR_8[VAR_17];
  FUNC_0(VAR_9, 0x40, 1, 0xba00, 0x00f0, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba01, 0x00f1, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 , 0x0025, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 + VAR_17, 0x00f1, 0, ((void*)0));
 }

 if (VAR_13 != VAR_10->vold.sharpness) {
  VAR_10->vold.sharpness = VAR_13;
  if (VAR_13 < 0 || VAR_13 > VAR_10->vmax.sharpness)
   VAR_13 = 0;

  FUNC_0(VAR_9, 0x40, 1, 0xba00, 0x00f0, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba01, 0x00f1, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 , 0x0005, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 + VAR_13, 0x00f1, 0, ((void*)0));
 }

 if (VAR_16 != VAR_10->vold.hue) {

  if (VAR_16 < 0 || VAR_16 > VAR_10->vmax.hue)
   VAR_16 = 0;
  if (VAR_16 == VAR_10->vmax.hue)
   VAR_10->swapRB = 1;
  else
   VAR_10->swapRB = 0;

  FUNC_0(VAR_9, 0x40, 1, 0xba00, 0x00f0, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba01, 0x00f1, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba70, 0x00e2, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 + VAR_16 * (VAR_16 < 6), 0x00f1,
       0, ((void*)0));
 }

 if (VAR_11 != VAR_10->vold.backlight) {
  VAR_10->vold.backlight = VAR_11;
  if (VAR_11 < 0 || VAR_11 > VAR_10->vmax.backlight)
   VAR_11 = 0;

  VAR_11 = VAR_4[VAR_11];
  for (VAR_22 = 0; VAR_22 < 2; VAR_22++) {
   FUNC_0(VAR_9, 0x40, 1, 0xba00, 0x00f0, 0, ((void*)0));
   FUNC_0(VAR_9, 0x40, 1, 0xba01, 0x00f1, 0, ((void*)0));
   FUNC_0(VAR_9, 0x40, 1, 0xba74, 0x0006, 0, ((void*)0));
   FUNC_0(VAR_9, 0x40, 1, 0xba80 + VAR_11, 0x00f1,
        0, ((void*)0));
  }
 }

 if (VAR_16 != VAR_10->vold.hue) {
  VAR_10->vold.hue = VAR_16;

  FUNC_0(VAR_9, 0x40, 1, 0xba00, 0x00f0, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba01, 0x00f1, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba70, 0x00e2, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 + VAR_16 * (VAR_16 < 6), 0x00f1,
       0, ((void*)0));
 }

 if (VAR_19 != VAR_10->vold.mirror || VAR_20 != VAR_10->vold.flip) {
  u8 VAR_23[4] = {0x20, 0x01, 0xf1, 0x00};
  VAR_10->vold.mirror = VAR_19;
  VAR_10->vold.flip = VAR_20;

  VAR_23[3] = VAR_20 + 2 * VAR_19;
  FUNC_0(VAR_9, 0x40, 3, 0xba00, 0x0200, 4, VAR_0);
  FUNC_0(VAR_9, 0x40, 3, 0xba00, 0x0200, 4, VAR_23);
 }

 if (VAR_15 != VAR_10->vold.gamma) {
  VAR_10->vold.gamma = VAR_15;
  if (VAR_15 < 0 || VAR_15 > VAR_10->vmax.gamma)
   VAR_15 = 0;

  VAR_15 = 2 * VAR_15;
  FUNC_0(VAR_9, 0x40, 1, 0xba00, 0x00f0, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba01, 0x00f1, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba04 , 0x003b, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba02 + VAR_15, 0x00f1, 0, ((void*)0));
 }

 if (VAR_14 != VAR_10->vold.contrast) {
  VAR_10->vold.contrast = VAR_14;
  if (VAR_14 < 0 || VAR_14 > VAR_10->vmax.contrast)
   VAR_14 = 0;

  FUNC_0(VAR_9, 0x40, 1, 0xba00, 0x00f0, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba01, 0x00f1, 0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 + VAR_6[VAR_14], 0x0035,
       0, ((void*)0));
  FUNC_0(VAR_9, 0x40, 1, 0xba00 + VAR_7[VAR_14], 0x00f1,
       0, ((void*)0));
 }

 return 0;
}
