
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_chan_def {int dummy; } ;
struct ath_softc {int chan_lock; struct ath_chanctx* cur_chan; int sc_ah; } ;
struct ath_common {int dummy; } ;
struct ath_chanctx {int chandef; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,int ,char*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (int *,struct cfg80211_chan_def*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ath_softc *VAR_1, struct ath_chanctx *VAR_2,
        struct cfg80211_chan_def *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_1->sc_ah);
 bool VAR_5;

 FUNC_4(&VAR_1->chan_lock);
 if (VAR_3)
  FUNC_3(&VAR_2->chandef, VAR_3, sizeof(*VAR_3));
 VAR_5 = VAR_1->cur_chan == VAR_2;
 FUNC_5(&VAR_1->chan_lock);

 if (!VAR_5) {
  FUNC_1(VAR_4, VAR_0,
   "Current context differs from the new context\n");
  return;
 }

 FUNC_2(VAR_1);
}
