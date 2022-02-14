
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static u8 FUNC_1(struct ieee80211_hw *VAR_7,
     enum wireless_mode VAR_8,
     u32 VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_0(VAR_7);
 struct rtl_phy *VAR_11 = &VAR_10->phy;
 u8 VAR_12 = VAR_0;

 if (VAR_11->rf_type == VAR_0)
  VAR_12 = VAR_0;
 else if (VAR_8 == VAR_3
  || VAR_8 == VAR_2
  || VAR_8 == VAR_4) {
  if (VAR_9 & 0xffc00000)
   VAR_12 = VAR_1;
 } else if (VAR_8 == VAR_6
  || VAR_8 == VAR_5) {
  if (VAR_9 & 0xfff00000)
   VAR_12 = VAR_1;
 }

 return VAR_12;
}
