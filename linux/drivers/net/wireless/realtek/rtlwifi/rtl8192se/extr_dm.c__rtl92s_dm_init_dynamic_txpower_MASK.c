
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dm_type; int dynamic_txpower_enable; void* dynamic_txhighpower_lvl; void* last_dtp_lvl; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);

 if ((FUNC_0(VAR_3) >= 60) &&
     (VAR_3->dm.dm_type == VAR_0))
  VAR_3->dm.dynamic_txpower_enable = 1;
 else
  VAR_3->dm.dynamic_txpower_enable = 0;

 VAR_3->dm.last_dtp_lvl = VAR_1;
 VAR_3->dm.dynamic_txhighpower_lvl = VAR_1;
}
