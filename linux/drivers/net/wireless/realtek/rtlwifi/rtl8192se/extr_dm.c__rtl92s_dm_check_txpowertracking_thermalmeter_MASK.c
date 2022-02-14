
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ txpowercount; int tm_trigger; int txpower_tracking; } ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {TYPE_1__ dm; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(
     struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_4);
 struct rtl_phy *VAR_6 = &(VAR_5->phy);
 u8 VAR_7 = 5;


 if (VAR_6->rf_type == VAR_2)
  return;

 if (!VAR_5->dm.txpower_tracking)
  return;

 if (VAR_5->dm.txpowercount <= VAR_7) {
  VAR_5->dm.txpowercount++;
  return;
 }

 if (!VAR_5->dm.tm_trigger) {
  FUNC_2(VAR_4, VAR_0, VAR_3,
         VAR_1, 0x60);
  VAR_5->dm.tm_trigger = 1;
 } else {
  FUNC_0(VAR_4);
  VAR_5->dm.tm_trigger = 0;
 }
}
