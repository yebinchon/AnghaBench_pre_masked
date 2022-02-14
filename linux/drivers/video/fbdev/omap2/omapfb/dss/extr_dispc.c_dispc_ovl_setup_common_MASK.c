
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct omap_video_timings {int interlace; } ;
typedef int s32 ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;
typedef enum omap_dss_rotation_type { ____Placeholder_omap_dss_rotation_type } omap_dss_rotation_type ;
typedef enum omap_color_mode { ____Placeholder_omap_color_mode } omap_color_mode ;
struct TYPE_4__ {TYPE_1__* feat; } ;
struct TYPE_3__ {scalar_t__ last_pixel_inc_missing; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int,int,int,int,int,unsigned int,unsigned int*,unsigned int*,int*,int*,int,int) ;
 int FUNC_3 (int,int,int,int,unsigned int,unsigned int*,unsigned int*,int*,int*,int,int) ;
 int FUNC_4 (int ,int,int,int,int,int,int,unsigned int,unsigned int*,unsigned int*,int*,int*,int,int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_5 (unsigned long,unsigned long,int,struct omap_video_timings const*,int,int,int,int,int,int*,int*,int*,int,int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int,scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int,int) ;
 int FUNC_14 (int,int,int) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int,int,int,int) ;
 int FUNC_17 (int,int,int ) ;
 int FUNC_18 (int,int ,int,int,int) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 (int,int,int,int,int,int,int,int,int,int ) ;
 int FUNC_21 (int,int) ;
 int FUNC_22 (int,int,int ) ;
 int FUNC_23 (int,int,int ) ;
 unsigned long FUNC_24 (int) ;
 unsigned long FUNC_25 (int) ;
 int FUNC_26 (int,int) ;

__attribute__((used)) static int FUNC_27(enum omap_plane VAR_6,
  enum omap_overlay_caps VAR_7, u32 VAR_8, u32 VAR_9,
  u16 VAR_10, int VAR_11, int VAR_12, u16 VAR_13, u16 VAR_14,
  u16 VAR_15, u16 VAR_16, enum omap_color_mode VAR_17,
  u8 VAR_18, bool VAR_19, u8 VAR_20, u8 VAR_21,
  u8 VAR_22, enum omap_dss_rotation_type VAR_23,
  bool VAR_24, const struct omap_video_timings *VAR_25,
  bool VAR_26)
{
 bool VAR_27 = 1;
 bool VAR_28 = 0;
 int VAR_29, VAR_30 = 0;
 unsigned VAR_31, VAR_32;
 s32 VAR_33;
 s32 VAR_34;
 u16 VAR_35, VAR_36;
 unsigned int VAR_37 = 0;
 u16 VAR_38 = VAR_14;
 u16 VAR_39 = VAR_13;
 int VAR_40 = 1, VAR_41 = 1;
 bool VAR_42 = VAR_25->interlace;
 unsigned long VAR_43 = FUNC_25(VAR_6);
 unsigned long VAR_44 = FUNC_24(VAR_6);

 if (VAR_8 == 0 && VAR_23 != VAR_3)
  return -VAR_0;

 switch (VAR_17) {
 case 128:
 case 129:
 case 130:
  if (VAR_39 & 1) {
   FUNC_1("input width %d is not even for YUV format\n",
    VAR_39);
   return -VAR_0;
  }
  break;

 default:
  break;
 }

 VAR_15 = VAR_15 == 0 ? VAR_13 : VAR_15;
 VAR_16 = VAR_16 == 0 ? VAR_14 : VAR_16;

 if (VAR_42 && VAR_14 == VAR_16)
  VAR_28 = 1;

 if (VAR_42) {
  if (VAR_28)
   VAR_38 /= 2;
  VAR_12 /= 2;
  VAR_16 /= 2;

  FUNC_0("adjusting for ilace: height %d, pos_y %d, "
   "out_height %d\n", VAR_38, VAR_12,
   VAR_16);
 }

 if (!FUNC_26(VAR_6, VAR_17))
  return -VAR_0;

 VAR_29 = FUNC_5(VAR_43, VAR_44, VAR_7, VAR_25, VAR_39,
   VAR_38, VAR_15, VAR_16, VAR_17,
   &VAR_27, &VAR_40, &VAR_41, VAR_11,
   VAR_23, VAR_26);
 if (VAR_29)
  return VAR_29;

 VAR_39 = VAR_39 / VAR_40;
 VAR_38 = VAR_38 / VAR_41;

 if (VAR_40 > 1 || VAR_41 > 1)
  FUNC_0("predecimation %d x %x, new input size %d x %d\n",
   VAR_40, VAR_41, VAR_39, VAR_38);

 switch (VAR_17) {
 case 128:
 case 129:
 case 130:
  if (VAR_39 & 1) {
   FUNC_0("predecimated input width is not even for YUV format\n");
   FUNC_0("adjusting input width %d -> %d\n",
    VAR_39, VAR_39 & ~1);

   VAR_39 &= ~1;
  }
  break;

 default:
  break;
 }

 if (VAR_17 == 128 ||
   VAR_17 == 129 ||
   VAR_17 == 130)
  VAR_30 = 1;

 if (VAR_42 && !VAR_28) {







  if (!VAR_38 || VAR_38 == VAR_16)
   VAR_37 = 0;
  else
   VAR_37 = VAR_38 / VAR_16 / 2;
 }


 if (VAR_28)
  VAR_37 = 1;

 VAR_31 = 0;
 VAR_32 = 0;
 VAR_33 = 0;
 VAR_34 = 0;

 if (VAR_6 == VAR_4) {
  VAR_35 = VAR_15;
  VAR_36 = VAR_16;
 } else {
  VAR_35 = VAR_39;
  VAR_36 = VAR_14;
 }

 if (VAR_23 == VAR_3)
  FUNC_3(VAR_10, VAR_35,
    VAR_17, VAR_28, VAR_37,
    &VAR_31, &VAR_32, &VAR_33, &VAR_34,
    VAR_40, VAR_41);
 else if (VAR_23 == VAR_2)
  FUNC_2(VAR_18, VAR_19, VAR_10,
    VAR_35, VAR_36,
    VAR_17, VAR_28, VAR_37,
    &VAR_31, &VAR_32, &VAR_33, &VAR_34,
    VAR_40, VAR_41);
 else
  FUNC_4(VAR_18, VAR_19,
    VAR_10, VAR_35, VAR_36,
    VAR_17, VAR_28, VAR_37,
    &VAR_31, &VAR_32, &VAR_33, &VAR_34,
    VAR_40, VAR_41);

 FUNC_0("offset0 %u, offset1 %u, row_inc %d, pix_inc %d\n",
   VAR_31, VAR_32, VAR_33, VAR_34);

 FUNC_12(VAR_6, VAR_17);

 FUNC_6(VAR_6, VAR_23);

 FUNC_8(VAR_6, VAR_8 + VAR_31);
 FUNC_10(VAR_6, VAR_8 + VAR_32);

 if (130 == VAR_17) {
  FUNC_9(VAR_6, VAR_9 + VAR_31);
  FUNC_11(VAR_6, VAR_9 + VAR_32);
 }

 if (VAR_5.feat->last_pixel_inc_missing)
  VAR_33 += VAR_34 - 1;

 FUNC_19(VAR_6, VAR_33);
 FUNC_15(VAR_6, VAR_34);

 FUNC_0("%d,%d %dx%d -> %dx%d\n", VAR_11, VAR_12, VAR_39,
   VAR_38, VAR_15, VAR_16);

 FUNC_16(VAR_6, VAR_7, VAR_11, VAR_12);

 FUNC_13(VAR_6, VAR_39, VAR_38);

 if (VAR_7 & VAR_1) {
  FUNC_20(VAR_6, VAR_39, VAR_38, VAR_15,
       VAR_16, VAR_42, VAR_27, VAR_28,
       VAR_17, VAR_18);
  FUNC_14(VAR_6, VAR_15, VAR_16);
  FUNC_21(VAR_6, VAR_30);
 }

 FUNC_18(VAR_6, VAR_18, VAR_23, VAR_19,
   VAR_17);

 FUNC_22(VAR_6, VAR_7, VAR_20);
 FUNC_17(VAR_6, VAR_7, VAR_21);
 FUNC_23(VAR_6, VAR_7, VAR_22);

 FUNC_7(VAR_6, VAR_7, VAR_24);

 return 0;
}
