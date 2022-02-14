
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct v4l2_fract {int numerator; int denominator; } ;
struct TYPE_2__ {int width; int height; int hfrontporch; int vfrontporch; int hsync; unsigned int vsync; int hbackporch; unsigned int vbackporch; unsigned int il_vbackporch; int il_vfrontporch; unsigned int il_vsync; int pixelclock; int flags; int standards; int interlaced; scalar_t__ polarities; } ;
struct v4l2_dv_timings {TYPE_1__ bt; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int,scalar_t__) ;

bool FUNC_1(unsigned VAR_16,
  unsigned VAR_17,
  unsigned VAR_18,
  u32 VAR_19,
  bool VAR_20,
  struct v4l2_fract VAR_21,
  struct v4l2_dv_timings *VAR_22)
{
 int VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29, VAR_30;
 bool VAR_31;
 int VAR_32;

 if (VAR_18 != 3)
  return 0;

 if (VAR_19 == VAR_15)
  VAR_31 = 1;
 else if (VAR_19 == VAR_12)
  VAR_31 = 0;
 else
  return 0;

 if (VAR_17 == 0)
  return 0;


 VAR_24 = VAR_7;
 VAR_25 = (VAR_3 * VAR_17 + 500000) / 1000000 - VAR_18;
 if (VAR_20)
  VAR_29 = (VAR_16 - 2 * VAR_24 - 2 * VAR_18 - 2 * VAR_25) & ~0x1;
 else
  VAR_29 = (VAR_16 - VAR_24 - VAR_18 - VAR_25 + 1) & ~0x1;

 if (VAR_29 < 0)
  return 0;

 if (VAR_21.numerator == 0 || VAR_21.denominator == 0) {
  VAR_21.numerator = 16;
  VAR_21.denominator = 9;
 }
 VAR_30 = ((VAR_29 * VAR_21.numerator) / VAR_21.denominator);
 VAR_30 = (VAR_30 + VAR_0/2) & ~(VAR_0 - 1);


 if (VAR_31) {
  u64 VAR_33;
  u32 VAR_34;

  VAR_33 = ((VAR_30 * VAR_1 * (u64)VAR_17) -
        ((u64)VAR_30 * VAR_2 * 1000));
  VAR_34 = (VAR_17 * (100 - VAR_1) + VAR_2 * 1000) *
        (2 * VAR_0);
  VAR_32 = FUNC_0((VAR_33 + (VAR_34 >> 1)), VAR_34);
  VAR_32 *= (2 * VAR_0);
 } else {
  u64 VAR_35;
  u32 VAR_36;

  VAR_35 = ((VAR_30 * VAR_5 * (u64)VAR_17) -
        ((u64)VAR_30 * VAR_6 * 1000));
  VAR_36 = (VAR_17 * (100 - VAR_5) + VAR_6 * 1000) *
        (2 * VAR_0);
  VAR_32 = FUNC_0((VAR_35 + (VAR_36 >> 1)), VAR_36);
  VAR_32 *= (2 * VAR_0);
 }

 VAR_28 = VAR_30 + VAR_32;

 VAR_23 = (VAR_30 + VAR_32) * VAR_17;
 VAR_23 = VAR_23 / VAR_4 * VAR_4;

 VAR_27 = (VAR_28 * 8 + 50) / 100;
 VAR_27 = ((VAR_27 + VAR_0 / 2) / VAR_0) * VAR_0;

 VAR_26 = VAR_32 / 2 - VAR_27;

 VAR_22->type = VAR_8;
 VAR_22->bt.polarities = VAR_19;
 VAR_22->bt.width = VAR_30;
 VAR_22->bt.height = VAR_29;
 VAR_22->bt.hfrontporch = VAR_26;
 VAR_22->bt.vfrontporch = VAR_24;
 VAR_22->bt.hsync = VAR_27;
 VAR_22->bt.vsync = VAR_18;
 VAR_22->bt.hbackporch = VAR_28 - VAR_30 - VAR_26 - VAR_27;

 if (!VAR_20) {
  VAR_22->bt.vbackporch = VAR_16 - VAR_29 - VAR_24 - VAR_18;
  VAR_22->bt.interlaced = VAR_14;
 } else {
  VAR_22->bt.vbackporch = (VAR_16 - VAR_29 - 2 * VAR_24 -
          2 * VAR_18) / 2;
  VAR_22->bt.il_vbackporch = VAR_16 - VAR_29 - 2 * VAR_24 -
     2 * VAR_18 - VAR_22->bt.vbackporch;
  VAR_22->bt.il_vfrontporch = VAR_24;
  VAR_22->bt.il_vsync = VAR_18;
  VAR_22->bt.flags |= VAR_10;
  VAR_22->bt.interlaced = VAR_13;
 }

 VAR_22->bt.pixelclock = VAR_23;
 VAR_22->bt.standards = VAR_9;

 if (!VAR_31)
  VAR_22->bt.flags |= VAR_11;

 return 1;
}
