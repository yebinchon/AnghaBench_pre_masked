
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ath9k_htc_vif {scalar_t__ beacon_configured; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, u8 *VAR_2, struct ieee80211_vif *VAR_3)
{
 bool *VAR_4 = VAR_1;
 struct ath9k_htc_vif *VAR_5 = (struct ath9k_htc_vif *) VAR_3->drv_priv;

 if (VAR_3->type == VAR_0 &&
     VAR_5->beacon_configured)
  *VAR_4 = 1;
}
