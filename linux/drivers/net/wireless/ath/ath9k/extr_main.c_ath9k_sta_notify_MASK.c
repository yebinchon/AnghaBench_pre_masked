
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int sc_ah; } ;
struct ath_node {int sleeping; } ;
typedef enum sta_notify_cmd { ____Placeholder_sta_notify_cmd } sta_notify_cmd ;




 int FUNC_0 (int ,struct ath_node*,int) ;
 int FUNC_1 (struct ieee80211_sta*,struct ath_softc*,struct ath_node*) ;
 int FUNC_2 (struct ath_softc*,struct ath_node*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0,
    struct ieee80211_vif *VAR_1,
    enum sta_notify_cmd VAR_2,
    struct ieee80211_sta *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_0->priv;
 struct ath_node *VAR_5 = (struct ath_node *) VAR_3->drv_priv;

 switch (VAR_2) {
 case 128:
  VAR_5->sleeping = 1;
  FUNC_1(VAR_3, VAR_4, VAR_5);
  FUNC_0(VAR_4->sc_ah, VAR_5, 1);
  break;
 case 129:
  FUNC_0(VAR_4->sc_ah, VAR_5, 0);
  VAR_5->sleeping = 0;
  FUNC_2(VAR_4, VAR_5);
  break;
 }
}
