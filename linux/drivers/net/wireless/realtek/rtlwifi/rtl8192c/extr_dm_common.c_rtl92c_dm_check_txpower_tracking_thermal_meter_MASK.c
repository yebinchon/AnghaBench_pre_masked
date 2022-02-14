
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_trigger; int txpower_tracking; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(
      struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_2(VAR_5);

 if (!VAR_6->dm.txpower_tracking)
  return;

 if (!VAR_6->dm.tm_trigger) {
  FUNC_3(VAR_5, VAR_2, VAR_4, VAR_3,
         0x60);
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "Trigger 92S Thermal Meter!!\n");
  VAR_6->dm.tm_trigger = 1;
  return;
 } else {
  FUNC_0(VAR_6, VAR_0, VAR_1,
    "Schedule TxPowerTracking direct call!!\n");
  FUNC_1(VAR_5);
  VAR_6->dm.tm_trigger = 0;
 }
}
