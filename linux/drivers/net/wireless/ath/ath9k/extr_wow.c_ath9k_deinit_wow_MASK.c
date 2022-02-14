
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int driver_data; int dev; scalar_t__ force_wow; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct ieee80211_hw *VAR_1)
{
 struct ath_softc *VAR_2 = VAR_1->priv;

 if ((VAR_2->driver_data & VAR_0) || VAR_2->force_wow)
  FUNC_0(VAR_2->dev, 0);
}
