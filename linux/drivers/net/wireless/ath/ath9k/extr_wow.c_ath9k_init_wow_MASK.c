
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {TYPE_1__* wiphy; struct ath_softc* priv; } ;
struct ath_softc {int driver_data; int dev; scalar_t__ force_wow; struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
struct TYPE_2__ {int * wowlan; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct ieee80211_hw *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_3->priv;
 struct ath_hw *VAR_5 = VAR_4->sc_ah;

 if ((VAR_4->driver_data & VAR_0) || VAR_4->force_wow) {
  if (FUNC_0(VAR_5) || FUNC_1(VAR_5))
   VAR_3->wiphy->wowlan = &VAR_1;
  else
   VAR_3->wiphy->wowlan = &VAR_2;

  FUNC_2(VAR_4->dev, 1);
 }
}
