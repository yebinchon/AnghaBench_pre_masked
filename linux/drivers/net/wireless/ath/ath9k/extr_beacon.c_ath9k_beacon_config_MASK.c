
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ibss_creator; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; scalar_t__ drv_priv; } ;
struct ath_vif {struct ath_chanctx* chanctx; } ;
struct ath_softc {int ps_flags; int sc_pm_lock; struct ath_hw* sc_ah; } ;
struct ath_hw {scalar_t__ opmode; } ;
struct ath_common {int op_flags; } ;
struct ath_beacon_config {int enable_beacon; scalar_t__ beacon_interval; } ;
struct ath_chanctx {struct ath_beacon_config beacon; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*,struct ath_chanctx*,TYPE_1__*) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

void FUNC_9(struct ath_softc *VAR_5, struct ieee80211_vif *VAR_6,
    bool VAR_7)
{
 struct ath_hw *VAR_8 = VAR_5->sc_ah;
 struct ath_common *VAR_9 = FUNC_3(VAR_8);
 struct ath_vif *VAR_10;
 struct ath_chanctx *VAR_11;
 struct ath_beacon_config *VAR_12;
 unsigned long VAR_13;
 bool VAR_14;
 bool VAR_15 = 0;

 if (!VAR_7) {
  FUNC_5(VAR_0, &VAR_9->op_flags);
  FUNC_1(VAR_5);
  return;
 }

 if (FUNC_0(!VAR_6))
  return;

 VAR_10 = (void *)VAR_6->drv_priv;
 VAR_11 = VAR_10->chanctx;
 VAR_12 = &VAR_11->beacon;
 VAR_14 = VAR_12->enable_beacon;
 VAR_12->enable_beacon = VAR_7;

 if (VAR_5->sc_ah->opmode == VAR_2) {
  FUNC_2(VAR_5, VAR_11, &VAR_6->bss_conf);

  FUNC_4(VAR_5);
  FUNC_6(VAR_0, &VAR_9->op_flags);
  return;
 }


 FUNC_2(VAR_5, VAR_11, &VAR_6->bss_conf);





 if (VAR_12->beacon_interval) {





  if (VAR_5->sc_ah->opmode == VAR_1 &&
      !VAR_14 && VAR_7 && !VAR_6->bss_conf.ibss_creator) {
   FUNC_7(&VAR_5->sc_pm_lock, VAR_13);
   VAR_5->ps_flags |= VAR_3 | VAR_4;
   FUNC_8(&VAR_5->sc_pm_lock, VAR_13);
   VAR_15 = 1;
  }





  if (VAR_7 && !VAR_15) {
   FUNC_6(VAR_0, &VAR_9->op_flags);
   FUNC_4(VAR_5);
  } else {
   FUNC_5(VAR_0, &VAR_9->op_flags);
   FUNC_1(VAR_5);
  }
 } else {
  FUNC_5(VAR_0, &VAR_9->op_flags);
  FUNC_1(VAR_5);
 }
}
