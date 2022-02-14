
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int sc_ah; } ;
struct ath_node {int ps_key; int* key_idx; } ;
struct ath_common {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;
 int FUNC_2 (struct ath_softc*,struct ieee80211_sta*,struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_2,
    struct ieee80211_vif *VAR_3,
    struct ieee80211_sta *VAR_4)
{
 struct ath_softc *VAR_5 = VAR_2->priv;
 struct ath_common *VAR_6 = FUNC_0(VAR_5->sc_ah);
 struct ath_node *VAR_7 = (struct ath_node *) VAR_4->drv_priv;
 struct ieee80211_key_conf VAR_8 = { };
 int VAR_9;

 FUNC_2(VAR_5, VAR_4, VAR_3);

 if (VAR_3->type != VAR_0 &&
     VAR_3->type != VAR_1)
  return 0;

 VAR_9 = FUNC_1(VAR_6, VAR_3, VAR_4, &VAR_8);
 if (VAR_9 > 0) {
  VAR_7->ps_key = VAR_9;
  VAR_7->key_idx[0] = VAR_9;
 }

 return 0;
}
