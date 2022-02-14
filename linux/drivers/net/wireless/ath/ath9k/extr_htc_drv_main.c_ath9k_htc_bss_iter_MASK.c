
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_bss_conf {int bssid; int aid; scalar_t__ assoc; } ;
struct ieee80211_vif {scalar_t__ type; struct ieee80211_bss_conf bss_conf; } ;
struct ath_common {int op_flags; int curbssid; int last_rssi; int curaid; } ;
struct ath9k_htc_priv {int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_4, u8 *VAR_5, struct ieee80211_vif *VAR_6)
{
 struct ath9k_htc_priv *VAR_7 = VAR_4;
 struct ath_common *VAR_8 = FUNC_0(VAR_7->ah);
 struct ieee80211_bss_conf *VAR_9 = &VAR_6->bss_conf;

 if ((VAR_6->type == VAR_3) && VAR_9->assoc) {
  VAR_8->curaid = VAR_9->aid;
  VAR_8->last_rssi = VAR_1;
  FUNC_1(VAR_8->curbssid, VAR_9->bssid, VAR_2);
  FUNC_2(VAR_0, &VAR_8->op_flags);
 }
}
