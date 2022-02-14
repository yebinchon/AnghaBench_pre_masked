
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int mutex; int dev; int sc_ah; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,int ,char*,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ieee80211_hw *VAR_1, bool VAR_2)
{
 struct ath_softc *VAR_3 = VAR_1->priv;
 struct ath_common *VAR_4 = FUNC_0(VAR_3->sc_ah);

 FUNC_3(&VAR_3->mutex);
 FUNC_2(VAR_3->dev, VAR_2);
 FUNC_4(&VAR_3->mutex);

 FUNC_1(VAR_4, VAR_0, "WoW wakeup source is %s\n",
  (VAR_2) ? "enabled" : "disabled");
}
