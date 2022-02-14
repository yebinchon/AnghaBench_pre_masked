
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct rtl_efuse {scalar_t__ autoload_failflag; } ;
struct rtl_dm {int swing_diff_2g; int swing_diff_5g; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int*) ;
 struct rtl_dm* FUNC_2 (struct rtl_priv*) ;
 struct rtl_efuse* FUNC_3 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

u32 FUNC_6(struct ieee80211_hw *VAR_5, u8 VAR_6,
      u8 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_5(VAR_5);
 struct rtl_hal *VAR_9 = FUNC_4(FUNC_5(VAR_5));
 struct rtl_dm *VAR_10 = FUNC_2(VAR_8);
 struct rtl_efuse *VAR_11 = FUNC_3(FUNC_5(VAR_5));
 s8 VAR_12 = -1;
 s8 VAR_13 = -1;
 s8 VAR_14 = -1 * VAR_12;
 s8 VAR_15 = -1 * VAR_13;
 u32 VAR_16 = 0x200;
 const s8 VAR_17 = -1;

 FUNC_0(VAR_8, VAR_2, VAR_3,
   "===> PHY_GetTXBBSwing_8812A, bbSwing_2G: %d, bbSwing_5G: %d,autoload_failflag=%d.\n",
   (int)VAR_14, (int)VAR_15,
   (int)VAR_11->autoload_failflag);

 if (VAR_11->autoload_failflag) {
  if (VAR_6 == VAR_0) {
   VAR_10->swing_diff_2g = VAR_14;
   if (VAR_14 == 0) {
    VAR_16 = 0x200;
   } else if (VAR_14 == -3) {
    VAR_16 = 0x16A;
   } else if (VAR_14 == -6) {
    VAR_16 = 0x101;
   } else if (VAR_14 == -9) {
    VAR_16 = 0x0B6;
   } else {
    VAR_10->swing_diff_2g = 0;
    VAR_16 = 0x200;
   }
  } else if (VAR_6 == VAR_1) {
   VAR_10->swing_diff_5g = VAR_15;
   if (VAR_15 == 0) {
    VAR_16 = 0x200;
   } else if (VAR_15 == -3) {
    VAR_16 = 0x16A;
   } else if (VAR_15 == -6) {
    VAR_16 = 0x101;
   } else if (VAR_15 == -9) {
    VAR_16 = 0x0B6;
   } else {
    if (VAR_9->hw_type == VAR_4) {
     VAR_10->swing_diff_5g = -3;
     VAR_16 = 0x16A;
    } else {
     VAR_10->swing_diff_5g = 0;
     VAR_16 = 0x200;
    }
   }
  } else {
   VAR_10->swing_diff_2g = -3;
   VAR_10->swing_diff_5g = -3;
   VAR_16 = 0x16A;
  }
 } else {
  u32 VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;

  if (VAR_6 == VAR_0) {
   if (VAR_12 == VAR_17) {
    FUNC_1(VAR_5, 1, 0xC6, (u32 *)&VAR_18);
    VAR_18 = (VAR_18 == 0xFF) ? 0x00 : VAR_18;
   } else if (VAR_14 == 0) {
    VAR_18 = 0x00;
   } else if (VAR_14 == -3) {
    VAR_18 = 0x05;
   } else if (VAR_14 == -6) {
    VAR_18 = 0x0A;
   } else if (VAR_14 == -9) {
    VAR_18 = 0xFF;
   } else {
    VAR_18 = 0x00;
   }
  } else {
   if (VAR_13 == VAR_17) {
    FUNC_1(VAR_5, 1, 0xC7, (u32 *)&VAR_18);
    VAR_18 = (VAR_18 == 0xFF) ? 0x00 : VAR_18;
   } else if (VAR_15 == 0) {
    VAR_18 = 0x00;
   } else if (VAR_15 == -3) {
    VAR_18 = 0x05;
   } else if (VAR_15 == -6) {
    VAR_18 = 0x0A;
   } else if (VAR_15 == -9) {
    VAR_18 = 0xFF;
   } else {
    VAR_18 = 0x00;
   }
  }

  VAR_19 = (VAR_18 & 0x3) >> 0;
  VAR_20 = (VAR_18 & 0xC) >> 2;
  FUNC_0(VAR_8, VAR_2, VAR_3,
    "===> PHY_GetTXBBSwing_8812A, swingA: 0x%X, swingB: 0x%X\n",
    VAR_19, VAR_20);


  if (VAR_19 == 0x0) {
   if (VAR_6 == VAR_0)
    VAR_10->swing_diff_2g = 0;
   else
    VAR_10->swing_diff_5g = 0;
   VAR_16 = 0x200;
  } else if (VAR_19 == 0x1) {
   if (VAR_6 == VAR_0)
    VAR_10->swing_diff_2g = -3;
   else
    VAR_10->swing_diff_5g = -3;
   VAR_16 = 0x16A;
  } else if (VAR_19 == 0x2) {
   if (VAR_6 == VAR_0)
    VAR_10->swing_diff_2g = -6;
   else
    VAR_10->swing_diff_5g = -6;
   VAR_16 = 0x101;
  } else if (VAR_19 == 0x3) {
   if (VAR_6 == VAR_0)
    VAR_10->swing_diff_2g = -9;
   else
    VAR_10->swing_diff_5g = -9;
   VAR_16 = 0x0B6;
  }

  if (VAR_20 == 0x0) {
   if (VAR_6 == VAR_0)
    VAR_10->swing_diff_2g = 0;
   else
    VAR_10->swing_diff_5g = 0;
   VAR_16 = 0x200;
  } else if (VAR_20 == 0x1) {
   if (VAR_6 == VAR_0)
    VAR_10->swing_diff_2g = -3;
   else
    VAR_10->swing_diff_5g = -3;
   VAR_16 = 0x16A;
  } else if (VAR_20 == 0x2) {
   if (VAR_6 == VAR_0)
    VAR_10->swing_diff_2g = -6;
   else
    VAR_10->swing_diff_5g = -6;
   VAR_16 = 0x101;
  } else if (VAR_20 == 0x3) {
   if (VAR_6 == VAR_0)
    VAR_10->swing_diff_2g = -9;
   else
    VAR_10->swing_diff_5g = -9;
   VAR_16 = 0x0B6;
  }
 }

 FUNC_0(VAR_8, VAR_2, VAR_3,
   "<=== PHY_GetTXBBSwing_8812A, out = 0x%X\n", VAR_16);
 return VAR_16;
}
