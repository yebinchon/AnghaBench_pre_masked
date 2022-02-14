
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_conf {int flags; int chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct ath_softc* priv; } ;
struct ath_softc {int ps_idle; int mutex; struct ath_hw* sc_ah; int sc_pm_lock; struct ath_chanctx* cur_chan; } ;
struct ath_hw {int is_monitoring; } ;
struct ath_common {int dummy; } ;
struct ath_chanctx {int offchannel; int chandef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_softc*,struct ath_chanctx*,int *) ;
 int FUNC_10 (struct ath_common*,int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_15(struct ieee80211_hw *VAR_9, u32 VAR_10)
{
 struct ath_softc *VAR_11 = VAR_9->priv;
 struct ath_hw *VAR_12 = VAR_11->sc_ah;
 struct ath_common *VAR_13 = FUNC_2(VAR_12);
 struct ieee80211_conf *VAR_14 = &VAR_9->conf;
 struct ath_chanctx *VAR_15 = VAR_11->cur_chan;

 FUNC_5(VAR_11);
 FUNC_11(&VAR_11->mutex);

 if (VAR_10 & VAR_2) {
  VAR_11->ps_idle = !!(VAR_14->flags & VAR_5);
  if (VAR_11->ps_idle) {
   FUNC_8(VAR_11);
   FUNC_7(VAR_11);
  } else {
   FUNC_6(VAR_11);




   FUNC_9(VAR_11, VAR_15, &VAR_15->chandef);
  }
 }







 if (VAR_10 & VAR_4) {
  unsigned long VAR_16;
  FUNC_13(&VAR_11->sc_pm_lock, VAR_16);
  if (VAR_14->flags & VAR_8)
   FUNC_1(VAR_11);
  else
   FUNC_0(VAR_11);
  FUNC_14(&VAR_11->sc_pm_lock, VAR_16);
 }

 if (VAR_10 & VAR_3) {
  if (VAR_14->flags & VAR_6) {
   FUNC_10(VAR_13, VAR_0, "Monitor mode is enabled\n");
   VAR_11->sc_ah->is_monitoring = 1;
  } else {
   FUNC_10(VAR_13, VAR_0, "Monitor mode is disabled\n");
   VAR_11->sc_ah->is_monitoring = 0;
  }
 }

 if (!FUNC_3() && (VAR_10 & VAR_1)) {
  VAR_15->offchannel = !!(VAR_14->flags & VAR_7);
  FUNC_9(VAR_11, VAR_15, &VAR_9->conf.chandef);
 }

 FUNC_12(&VAR_11->mutex);
 FUNC_4(VAR_11);

 return 0;
}
