
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ath_vif {int av_bslot; TYPE_2__* chanctx; int tsf_adjust; } ;
struct TYPE_3__ {struct ieee80211_vif** bslot; } ;
struct ath_softc {int bcon_tasklet; int sc_ah; TYPE_2__* cur_chan; TYPE_1__ beacon; } ;
struct ath_common {int dummy; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {scalar_t__ tsf_val; int tsf_ts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct ath_common* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct ath_common*,int ,char*,long long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct ath_softc *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_1(VAR_2->sc_ah);
 struct ieee80211_vif *VAR_4;
 struct ath_vif *VAR_5;
 s64 VAR_6;
 u32 VAR_7;
 int VAR_8 = VAR_0;
 int VAR_9;

 FUNC_6(&VAR_2->bcon_tasklet);


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (VAR_2->beacon.bslot[VAR_9]) {
   VAR_8 = VAR_9;
   break;
  }
 }
 if (VAR_8 == 0)
  goto out;


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (VAR_9 + VAR_8 < VAR_0) {
   VAR_4 = VAR_2->beacon.bslot[VAR_9 + VAR_8];
   VAR_2->beacon.bslot[VAR_9] = VAR_4;

   if (VAR_4) {
    VAR_5 = (void *)VAR_4->drv_priv;
    VAR_5->av_bslot = VAR_9;
   }
  } else {
   VAR_2->beacon.bslot[VAR_9] = ((void*)0);
  }
 }

 VAR_4 = VAR_2->beacon.bslot[0];
 if (FUNC_0(!VAR_4))
  goto out;


 VAR_5 = (void *)VAR_4->drv_priv;
 VAR_6 = FUNC_5(VAR_5->tsf_adjust);

 FUNC_4(VAR_3, VAR_1,
  "Adjusting global TSF after beacon slot reassignment: %lld\n",
  (signed long long)VAR_6);


 VAR_5->chanctx->tsf_val += VAR_6;
 if (VAR_2->cur_chan == VAR_5->chanctx) {
  VAR_7 = FUNC_2(&VAR_5->chanctx->tsf_ts, ((void*)0));
  FUNC_3(VAR_2->sc_ah, VAR_5->chanctx->tsf_val + VAR_7);
 }



out:
 FUNC_7(&VAR_2->bcon_tasklet);
}
