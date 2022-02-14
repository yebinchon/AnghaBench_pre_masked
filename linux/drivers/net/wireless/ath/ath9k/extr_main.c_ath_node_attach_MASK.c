
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ath_softc {int sc_ah; } ;
struct ath_node {int key_idx; struct ieee80211_vif* vif; struct ieee80211_sta* sta; struct ath_softc* sc; } ;


 int FUNC_0 (int ,struct ath_node*) ;
 int FUNC_1 (struct ath_softc*,struct ath_node*) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ath_softc *VAR_0, struct ieee80211_sta *VAR_1,
       struct ieee80211_vif *VAR_2)
{
 struct ath_node *VAR_3;
 VAR_3 = (struct ath_node *)VAR_1->drv_priv;

 VAR_3->sc = VAR_0;
 VAR_3->sta = VAR_1;
 VAR_3->vif = VAR_2;
 FUNC_2(&VAR_3->key_idx, 0, sizeof(VAR_3->key_idx));

 FUNC_1(VAR_0, VAR_3);

 FUNC_0(VAR_0->sc_ah, VAR_3);
}
