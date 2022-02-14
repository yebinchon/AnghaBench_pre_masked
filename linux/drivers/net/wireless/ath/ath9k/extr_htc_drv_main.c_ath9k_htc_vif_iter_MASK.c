
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_bss_conf {scalar_t__ assoc; scalar_t__ enable_beacon; } ;
struct ieee80211_vif {scalar_t__ type; struct ieee80211_bss_conf bss_conf; } ;
struct ath9k_htc_priv {int reconfig_beacon; int rearm_ani; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(void *VAR_2, u8 *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct ath9k_htc_priv *VAR_5 = VAR_2;
 struct ieee80211_bss_conf *VAR_6 = &VAR_4->bss_conf;

 if ((VAR_4->type == VAR_0 ||
      VAR_4->type == VAR_1) &&
     VAR_6->enable_beacon) {
  VAR_5->reconfig_beacon = 1;
  VAR_5->rearm_ani = 1;
 }

 if (VAR_6->assoc) {
  VAR_5->rearm_ani = 1;
  VAR_5->reconfig_beacon = 1;
 }
}
