
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_phy {size_t pwrgroup_cnt; scalar_t__** mcs_offset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_7,
  u32 VAR_8, u32 VAR_9, u32 VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_0(VAR_7);
 struct rtl_phy *VAR_12 = &(VAR_11->phy);
 int VAR_13;

 if (VAR_8 == VAR_5)
  VAR_13 = 0;
 else if (VAR_8 == VAR_6)
  VAR_13 = 1;
 else if (VAR_8 == VAR_0)
  VAR_13 = 6;
 else if (VAR_8 == VAR_1)
  VAR_13 = 2;
 else if (VAR_8 == VAR_2)
  VAR_13 = 3;
 else if (VAR_8 == VAR_3)
  VAR_13 = 4;
 else if (VAR_8 == VAR_4)
  VAR_13 = 5;
 else
  return;

 VAR_12->mcs_offset[VAR_12->pwrgroup_cnt][VAR_13] = VAR_10;
 if (VAR_13 == 5)
  VAR_12->pwrgroup_cnt++;
}
