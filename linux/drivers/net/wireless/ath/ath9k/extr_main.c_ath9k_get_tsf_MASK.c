
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_vif {int tsf_adjust; TYPE_1__* chanctx; } ;
struct ath_softc {int mutex; TYPE_1__* cur_chan; int sc_ah; } ;
struct TYPE_2__ {int tsf_ts; scalar_t__ tsf_val; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static u64 FUNC_7(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct ath_softc *VAR_2 = VAR_0->priv;
 struct ath_vif *VAR_3 = (void *)VAR_1->drv_priv;
 u64 VAR_4;

 FUNC_5(&VAR_2->mutex);
 FUNC_3(VAR_2);

 if (VAR_2->cur_chan == VAR_3->chanctx) {
  VAR_4 = FUNC_1(VAR_2->sc_ah);
 } else {
  VAR_4 = VAR_2->cur_chan->tsf_val +
        FUNC_0(&VAR_2->cur_chan->tsf_ts, ((void*)0));
 }
 VAR_4 += FUNC_4(VAR_3->tsf_adjust);
 FUNC_2(VAR_2);
 FUNC_6(&VAR_2->mutex);

 return VAR_4;
}
