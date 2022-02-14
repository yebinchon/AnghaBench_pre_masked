
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int type; int p2p; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_vif {int chanctx; } ;
struct ath_softc {int mutex; int sc_ah; } ;
struct ath_common {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_2 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_3 (struct ath_softc*,struct ieee80211_vif*) ;
 int FUNC_4 (struct ath_softc*,int ) ;
 struct ath_common* FUNC_5 (int ) ;
 int FUNC_6 (struct ath_softc*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct ath_common*,int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_3,
      struct ieee80211_vif *VAR_4,
      enum nl80211_iftype VAR_5,
      bool VAR_6)
{
 struct ath_softc *VAR_7 = VAR_3->priv;
 struct ath_common *VAR_8 = FUNC_5(VAR_7->sc_ah);
 struct ath_vif *VAR_9 = (void *)VAR_4->drv_priv;

 FUNC_9(&VAR_7->mutex);

 if (FUNC_0(VAR_1)) {
  FUNC_10(&VAR_7->mutex);
  return -VAR_2;
 }

 FUNC_8(VAR_8, VAR_0, "Change Interface\n");

 if (FUNC_7(VAR_4->type))
  FUNC_3(VAR_7, VAR_4);

 VAR_4->type = VAR_5;
 VAR_4->p2p = VAR_6;

 if (FUNC_7(VAR_4->type))
  FUNC_2(VAR_7, VAR_4);

 FUNC_1(VAR_3, VAR_4);
 FUNC_4(VAR_7, VAR_9->chanctx);

 FUNC_6(VAR_7, VAR_4);

 FUNC_10(&VAR_7->mutex);
 return 0;
}
