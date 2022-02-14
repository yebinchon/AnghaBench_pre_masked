
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_vif {TYPE_1__* chanctx; } ;
struct ath_softc {int mutex; int sc_ah; TYPE_1__* cur_chan; } ;
struct TYPE_2__ {scalar_t__ tsf_val; int tsf_ts; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct ath_softc *VAR_2 = VAR_0->priv;
 struct ath_vif *VAR_3 = (void *)VAR_1->drv_priv;

 FUNC_4(&VAR_2->mutex);

 FUNC_2(VAR_2);
 FUNC_3(&VAR_3->chanctx->tsf_ts);
 if (VAR_2->cur_chan == VAR_3->chanctx)
  FUNC_0(VAR_2->sc_ah);
 VAR_3->chanctx->tsf_val = 0;
 FUNC_1(VAR_2);

 FUNC_5(&VAR_2->mutex);
}
