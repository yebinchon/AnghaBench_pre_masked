
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_vif {TYPE_1__* chanctx; int tsf_adjust; } ;
struct ath_softc {int mutex; int sc_ah; TYPE_1__* cur_chan; } ;
struct TYPE_2__ {int tsf_val; int tsf_ts; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_0,
     struct ieee80211_vif *VAR_1,
     u64 VAR_2)
{
 struct ath_softc *VAR_3 = VAR_0->priv;
 struct ath_vif *VAR_4 = (void *)VAR_1->drv_priv;

 FUNC_5(&VAR_3->mutex);
 FUNC_2(VAR_3);
 VAR_2 -= FUNC_4(VAR_4->tsf_adjust);
 FUNC_3(&VAR_4->chanctx->tsf_ts);
 if (VAR_3->cur_chan == VAR_4->chanctx)
  FUNC_0(VAR_3->sc_ah, VAR_2);
 VAR_4->chanctx->tsf_val = VAR_2;
 FUNC_1(VAR_3);
 FUNC_6(&VAR_3->mutex);
}
