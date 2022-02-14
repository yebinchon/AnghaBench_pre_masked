
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_phy {size_t pwrgroup_cnt; scalar_t__** mcs_offset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,size_t,int,scalar_t__) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_17,
         u32 VAR_18, u32 VAR_19,
         u32 VAR_20)
{
 struct rtl_priv *VAR_21 = FUNC_1(VAR_17);
 struct rtl_phy *VAR_22 = &(VAR_21->phy);
 int VAR_23;

 if (VAR_18 == VAR_7)
  VAR_23 = 0;
 else if (VAR_18 == VAR_8)
  VAR_23 = 1;
 else if (VAR_18 == VAR_2)
  VAR_23 = 6;
 else if (VAR_18 == VAR_9 && VAR_19 == 0xffffff00)
  VAR_23 = 7;
 else if (VAR_18 == VAR_3)
  VAR_23 = 2;
 else if (VAR_18 == VAR_4)
  VAR_23 = 3;
 else if (VAR_18 == VAR_5)
  VAR_23 = 4;
 else if (VAR_18 == VAR_6)
  VAR_23 = 5;
 else if (VAR_18 == VAR_15)
  VAR_23 = 8;
 else if (VAR_18 == VAR_16)
  VAR_23 = 9;
 else if (VAR_18 == VAR_10)
  VAR_23 = 14;
 else if (VAR_18 == VAR_9 && VAR_19 == 0x000000ff)
  VAR_23 = 15;
 else if (VAR_18 == VAR_11)
  VAR_23 = 10;
 else if (VAR_18 == VAR_12)
  VAR_23 = 11;
 else if (VAR_18 == VAR_13)
  VAR_23 = 12;
 else if (VAR_18 == VAR_14)
  VAR_23 = 13;
 else
  return;

 VAR_22->mcs_offset[VAR_22->pwrgroup_cnt][VAR_23] = VAR_20;
 FUNC_0(VAR_21, VAR_0, VAR_1,
   "MCSTxPowerLevelOriginalOffset[%d][%d] = 0x%x\n",
   VAR_22->pwrgroup_cnt, VAR_23,
   VAR_22->mcs_offset[VAR_22->pwrgroup_cnt][VAR_23]);
 if (VAR_23 == 13)
  VAR_22->pwrgroup_cnt++;
}
