
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lcd_ctrl_config {int panel_shade; int bpp; scalar_t__ sync_edge; int stn_565_mode; int ac_bias_intrpt; int ac_bias; int tft_alt_mode; int mono_8bit_mode; } ;
struct fb_videomode {int sync; } ;




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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(const struct lcd_ctrl_config *VAR_19,
  struct fb_videomode *VAR_20)
{
 u32 VAR_21;
 u32 VAR_22;

 VAR_21 = FUNC_1(VAR_8) & ~(VAR_14 |
      VAR_7 |
      VAR_6);

 switch (VAR_19->panel_shade) {
 case 128:
  VAR_21 |= VAR_6;
  if (VAR_19->mono_8bit_mode)
   VAR_21 |= VAR_7;
  break;
 case 130:
  VAR_21 |= VAR_14;
  if (VAR_19->tft_alt_mode)
   VAR_21 |= VAR_13;
  break;

 case 129:

  FUNC_0(VAR_19->ac_bias, VAR_19->ac_bias_intrpt);
  if (VAR_19->bpp == 12 && VAR_19->stn_565_mode)
   VAR_21 |= VAR_10;
  break;

 default:
  return -VAR_0;
 }


 if (VAR_18 == VAR_17) {
  VAR_21 |= VAR_15;
 } else {
  VAR_22 = FUNC_1(VAR_3) |
   VAR_16;
  FUNC_2(VAR_22, VAR_3);
 }

 FUNC_2(VAR_21, VAR_8);

 VAR_21 = FUNC_1(VAR_9);

 VAR_21 |= VAR_11;

 if (VAR_19->sync_edge)
  VAR_21 |= VAR_12;
 else
  VAR_21 &= ~VAR_12;

 if ((VAR_20->sync & VAR_1) == 0)
  VAR_21 |= VAR_5;
 else
  VAR_21 &= ~VAR_5;

 if ((VAR_20->sync & VAR_2) == 0)
  VAR_21 |= VAR_4;
 else
  VAR_21 &= ~VAR_4;

 FUNC_2(VAR_21, VAR_9);

 return 0;
}
