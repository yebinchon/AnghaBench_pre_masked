
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_trigger; int txpower_tracking; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int ,int,int) ;

void FUNC_5(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_3(VAR_4);

 if (!VAR_5->dm.txpower_tracking)
  return;

 if (!VAR_5->dm.tm_trigger) {
  FUNC_4(VAR_4, VAR_2, VAR_3, FUNC_0(17) |
         FUNC_0(16), 0x03);
  FUNC_1(VAR_5, VAR_0, VAR_1,
    "Trigger 92S Thermal Meter!!\n");
  VAR_5->dm.tm_trigger = 1;
  return;
 } else {
  FUNC_1(VAR_5, VAR_0, VAR_1,
    "Schedule TxPowerTracking direct call!!\n");
  FUNC_2(VAR_4);
  VAR_5->dm.tm_trigger = 0;
 }
}
