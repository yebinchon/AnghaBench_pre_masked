
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int wiphy; struct ath_softc* priv; } ;
struct ath_softc {int dummy; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct ieee80211_hw *VAR_0)
{
 struct ath_softc *VAR_1 = VAR_0->priv;
 bool VAR_2 = !!FUNC_0(VAR_1);

 FUNC_1(VAR_0->wiphy, VAR_2);
}
