
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dynamic_txpower_enable; void* dynamic_txhighpower_lvl; void* last_dtp_lvl; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;


 void* VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_0(VAR_1);

 VAR_2->dm.dynamic_txpower_enable = 1;
 VAR_2->dm.last_dtp_lvl = VAR_0;
 VAR_2->dm.dynamic_txhighpower_lvl = VAR_0;
}
