
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_supported_band {struct ieee80211_channel* channels; int n_channels; } ;
struct ieee80211_channel {int dummy; } ;
struct ath_softc {struct ath_chanctx* chanctx; int sc_ah; } ;
struct ath_common {struct ieee80211_supported_band* sbands; } ;
struct ath_chanctx {int flush_timeout; TYPE_1__* acq; int txpower; int vifs; int chandef; } ;
struct TYPE_2__ {int lock; int acq_old; int acq_new; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct ath_common* FUNC_2 (int ) ;
 int FUNC_3 (int *,struct ieee80211_channel*,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct ath_softc *VAR_6)
{
 struct ath_chanctx *VAR_7;
 struct ath_common *VAR_8 = FUNC_2(VAR_6->sc_ah);
 struct ieee80211_supported_band *VAR_9;
 struct ieee80211_channel *VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = &VAR_8->sbands[VAR_3];
 if (!VAR_9->n_channels)
  VAR_9 = &VAR_8->sbands[VAR_4];

 VAR_10 = &VAR_9->channels[0];
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  VAR_7 = &VAR_6->chanctx[VAR_11];
  FUNC_3(&VAR_7->chandef, VAR_10, VAR_5);
  FUNC_1(&VAR_7->vifs);
  VAR_7->txpower = VAR_1;
  VAR_7->flush_timeout = VAR_2 / 5;
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_7->acq); VAR_12++) {
   FUNC_1(&VAR_7->acq[VAR_12].acq_new);
   FUNC_1(&VAR_7->acq[VAR_12].acq_old);
   FUNC_4(&VAR_7->acq[VAR_12].lock);
  }
 }
}
