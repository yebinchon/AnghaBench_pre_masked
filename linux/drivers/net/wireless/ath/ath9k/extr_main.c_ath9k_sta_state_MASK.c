
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int sc_ah; } ;
struct ath_common {int dummy; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ath_common* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_4 (struct ath_softc*,struct ieee80211_vif*,int ) ;
 int FUNC_5 (struct ath_common*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_7,
      struct ieee80211_vif *VAR_8,
      struct ieee80211_sta *VAR_9,
      enum ieee80211_sta_state VAR_10,
      enum ieee80211_sta_state VAR_11)
{
 struct ath_softc *VAR_12 = VAR_7->priv;
 struct ath_common *VAR_13 = FUNC_0(VAR_12->sc_ah);
 int VAR_14 = 0;

 if (VAR_10 == VAR_5 &&
     VAR_11 == VAR_4) {
  VAR_14 = FUNC_2(VAR_7, VAR_8, VAR_9);
  FUNC_5(VAR_13, VAR_1,
   "Add station: %pM\n", VAR_9->addr);
 } else if (VAR_10 == VAR_4 &&
     VAR_11 == VAR_5) {
  VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_9);
  FUNC_5(VAR_13, VAR_1,
   "Remove station: %pM\n", VAR_9->addr);
 }

 if (FUNC_1()) {
  if (VAR_8->type == VAR_6) {
   if (VAR_10 == VAR_2 &&
       VAR_11 == VAR_3)
    FUNC_4(VAR_12, VAR_8,
        VAR_0);
  }
 }

 return VAR_14;
}
