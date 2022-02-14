
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ath_softc {int sc_ah; } ;
struct ath_node {int dummy; } ;


 int FUNC_0 (int ,struct ath_node*) ;
 int FUNC_1 (struct ath_softc*,struct ath_node*) ;

__attribute__((used)) static void FUNC_2(struct ath_softc *VAR_0, struct ieee80211_sta *VAR_1)
{
 struct ath_node *VAR_2 = (struct ath_node *)VAR_1->drv_priv;
 FUNC_1(VAR_0, VAR_2);

 FUNC_0(VAR_0->sc_ah, VAR_2);
}
