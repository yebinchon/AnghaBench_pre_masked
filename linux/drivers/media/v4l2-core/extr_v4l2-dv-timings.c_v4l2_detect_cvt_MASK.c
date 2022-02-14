
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int width; int height; int hfrontporch; int vfrontporch; int hsync; unsigned int vsync; int hbackporch; unsigned int vbackporch; unsigned int il_vbackporch; int il_vfrontporch; unsigned int il_vsync; unsigned int pixelclock; int flags; int standards; int interlaced; scalar_t__ polarities; } ;
struct v4l2_dv_timings {TYPE_1__ bt; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;

bool FUNC_0(unsigned VAR_25,
       unsigned VAR_26,
       unsigned VAR_27,
       unsigned VAR_28,
       u32 VAR_29,
       bool VAR_30,
       struct v4l2_dv_timings *VAR_31)
{
 int VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 int VAR_37, VAR_38, VAR_39;
 bool VAR_40;
 bool VAR_41 = 0;
 unsigned VAR_42;

 if (VAR_27 < 4 || VAR_27 > 8)
  return 0;

 if (VAR_29 == VAR_24)
  VAR_40 = 0;
 else if (VAR_29 == VAR_21)
  VAR_40 = 1;
 else
  return 0;

 if (VAR_40 && VAR_27 == 8)
  VAR_41 = 1;

 if (VAR_41 && VAR_28 == 0)
  return 0;

 if (!VAR_41 && VAR_27 > 7)
  return 0;

 if (VAR_26 == 0)
  return 0;


 if (VAR_40) {
  if (VAR_41) {
   VAR_33 = VAR_15;
   VAR_32 = (VAR_11 * VAR_26) / 1000000 + 1;
   VAR_32 -= VAR_27 + VAR_33;

   if (VAR_32 < VAR_14)
    VAR_32 = VAR_14;
  } else {
   VAR_32 = VAR_16;
   VAR_33 = (VAR_11 * VAR_26) / 1000000 + 1;
   VAR_33 -= VAR_27 + VAR_32;

   if (VAR_33 < VAR_12)
    VAR_33 = VAR_12;
  }
 } else {
  VAR_32 = VAR_5;
  VAR_33 = (VAR_3 * VAR_26) / 1000000 + 1 - VAR_27;

  if (VAR_33 < VAR_4)
   VAR_33 = VAR_4;
 }

 if (VAR_30)
  VAR_38 = (VAR_25 - 2 * VAR_32 - 2 * VAR_27 - 2 * VAR_33) & ~0x1;
 else
  VAR_38 = (VAR_25 - VAR_32 - VAR_27 - VAR_33 + 1) & ~0x1;

 if (VAR_38 < 0)
  return 0;


 switch (VAR_27) {
 case 4:
  VAR_39 = (VAR_38 * 4) / 3;
  break;
 case 5:
  VAR_39 = (VAR_38 * 16) / 9;
  break;
 case 6:
  VAR_39 = (VAR_38 * 16) / 10;
  break;
 case 7:

  if (VAR_38 == 1024)
   VAR_39 = (VAR_38 * 5) / 4;
  else if (VAR_38 == 768)
   VAR_39 = (VAR_38 * 15) / 9;
  else
   return 0;
  break;
 case 8:
  VAR_39 = VAR_28;
  break;
 default:
  return 0;
 }

 if (!VAR_41)
  VAR_39 = VAR_39 & ~7;


 if (VAR_40) {
  int VAR_43;
  int VAR_44;

  VAR_43 = VAR_41 ? VAR_13 : VAR_9;
  VAR_44 = VAR_41 ? VAR_8 : VAR_7;

  VAR_42 = (VAR_39 + VAR_43) * VAR_26;
  VAR_42 = (VAR_42 / VAR_44) * VAR_44;

  VAR_35 = VAR_43 / 2;
  VAR_36 = VAR_10;
  VAR_34 = VAR_43 - VAR_35 - VAR_36;

  VAR_37 = VAR_39 + VAR_43;
 } else {
  unsigned VAR_45 =
   100 * VAR_1 - (VAR_6 * 100000) / VAR_26;
  int VAR_46;

  if (VAR_45 < 2000)
   VAR_45 = 2000;

  VAR_46 = VAR_39 * VAR_45 /
     (10000 - VAR_45);
  VAR_46 = (VAR_46 / (2 * VAR_0)) * 2 * VAR_0;

  VAR_42 = (VAR_39 + VAR_46) * VAR_26;
  VAR_42 = (VAR_42 / VAR_7) * VAR_7;

  VAR_35 = VAR_46 / 2;
  VAR_37 = VAR_39 + VAR_46;

  VAR_36 = VAR_37 * VAR_2 / 100;
  VAR_36 = (VAR_36 / VAR_0) * VAR_0;
  VAR_34 = VAR_46 - VAR_36 - VAR_35;
 }

 VAR_31->type = VAR_17;
 VAR_31->bt.polarities = VAR_29;
 VAR_31->bt.width = VAR_39;
 VAR_31->bt.height = VAR_38;
 VAR_31->bt.hfrontporch = VAR_34;
 VAR_31->bt.vfrontporch = VAR_32;
 VAR_31->bt.hsync = VAR_36;
 VAR_31->bt.vsync = VAR_27;
 VAR_31->bt.hbackporch = VAR_37 - VAR_39 - VAR_34 - VAR_36;

 if (!VAR_30) {
  VAR_31->bt.vbackporch = VAR_25 - VAR_38 - VAR_32 - VAR_27;
  VAR_31->bt.interlaced = VAR_23;
 } else {
  VAR_31->bt.vbackporch = (VAR_25 - VAR_38 - 2 * VAR_32 -
          2 * VAR_27) / 2;
  VAR_31->bt.il_vbackporch = VAR_25 - VAR_38 - 2 * VAR_32 -
     2 * VAR_27 - VAR_31->bt.vbackporch;
  VAR_31->bt.il_vfrontporch = VAR_32;
  VAR_31->bt.il_vsync = VAR_27;
  VAR_31->bt.flags |= VAR_19;
  VAR_31->bt.interlaced = VAR_22;
 }

 VAR_31->bt.pixelclock = VAR_42;
 VAR_31->bt.standards = VAR_18;

 if (VAR_40)
  VAR_31->bt.flags |= VAR_20;

 return 1;
}
