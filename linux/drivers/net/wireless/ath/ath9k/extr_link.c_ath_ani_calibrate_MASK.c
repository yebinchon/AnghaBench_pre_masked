
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
struct timer_list {int dummy; } ;
struct ath_softc {int paprd_work; int hw; int sc_pm_lock; int ps_flags; struct ath_hw* sc_ah; } ;
struct TYPE_5__ {unsigned int ani_poll_interval; } ;
struct ath_hw {scalar_t__ opmode; scalar_t__ power_mode; scalar_t__ ani_skip_count; int paprd_table_write_done; TYPE_3__* caldata; TYPE_1__ config; int rxchainmask; int curchan; } ;
struct TYPE_6__ {unsigned int longcal_timer; int caldone; unsigned int shortcal_timer; unsigned int resetcal_timer; unsigned int checkani_timer; int timer; } ;
struct ath_common {TYPE_2__ ani; int cc_lock; scalar_t__ priv; } ;
struct TYPE_8__ {int timer; } ;
struct TYPE_7__ {int cal_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_4__ VAR_13 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ,int) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ath_softc*,int ) ;
 int FUNC_7 (struct ath_common*,int ,char*,scalar_t__,char*,char*,char*,char*) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_softc*) ;
 struct ath_common* VAR_14 ;
 struct ath_common* FUNC_10 (int ,struct timer_list*,int ) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ VAR_15 ;
 unsigned int FUNC_12 (scalar_t__) ;
 unsigned int FUNC_13 (unsigned int,unsigned int) ;
 int FUNC_14 (int *,scalar_t__) ;
 scalar_t__ FUNC_15 (unsigned int) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 scalar_t__ FUNC_18 (int ,int *) ;

void FUNC_19(struct timer_list *VAR_16)
{
 struct ath_common *VAR_17 = FUNC_10(VAR_17, VAR_16, VAR_13.timer);
 struct ath_softc *VAR_18 = (struct ath_softc *)VAR_17->priv;
 struct ath_hw *VAR_19 = VAR_18->sc_ah;
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 bool VAR_22 = 0;
 unsigned int VAR_23 = FUNC_12(VAR_15);
 u32 VAR_24, VAR_25, VAR_26;
 unsigned long VAR_27;

 if (VAR_19->caldata && FUNC_18(VAR_8, &VAR_19->caldata->cal_flags))
  VAR_26 = VAR_5;
 else
  VAR_26 = VAR_4;

 VAR_25 = (VAR_19->opmode == VAR_9) ?
  VAR_3 : VAR_7;


 if (VAR_18->sc_ah->power_mode != VAR_1) {
  if (++VAR_19->ani_skip_count >= VAR_2) {
   FUNC_16(&VAR_18->sc_pm_lock, VAR_27);
   VAR_18->ps_flags |= VAR_11;
   FUNC_17(&VAR_18->sc_pm_lock, VAR_27);
  }
  goto set_timer;
 }
 VAR_19->ani_skip_count = 0;
 FUNC_16(&VAR_18->sc_pm_lock, VAR_27);
 VAR_18->ps_flags &= ~VAR_11;
 FUNC_17(&VAR_18->sc_pm_lock, VAR_27);

 FUNC_5(VAR_18);


 if ((VAR_23 - VAR_17->ani.longcal_timer) >= VAR_26) {
  VAR_20 = 1;
  VAR_17->ani.longcal_timer = VAR_23;
 }


 if (!VAR_17->ani.caldone) {
  if ((VAR_23 - VAR_17->ani.shortcal_timer) >= VAR_25) {
   VAR_21 = 1;
   VAR_17->ani.shortcal_timer = VAR_23;
   VAR_17->ani.resetcal_timer = VAR_23;
  }
 } else {
  if ((VAR_23 - VAR_17->ani.resetcal_timer) >=
      VAR_6) {
   VAR_17->ani.caldone = FUNC_3(VAR_19);
   if (VAR_17->ani.caldone)
    VAR_17->ani.resetcal_timer = VAR_23;
  }
 }


 if ((VAR_23 - VAR_17->ani.checkani_timer) >= VAR_19->config.ani_poll_interval) {
  VAR_22 = 1;
  VAR_17->ani.checkani_timer = VAR_23;
 }


 if (VAR_22) {
  FUNC_16(&VAR_17->cc_lock, VAR_27);
  FUNC_1(VAR_19, VAR_19->curchan);
  FUNC_9(VAR_18);
  FUNC_17(&VAR_17->cc_lock, VAR_27);
 }


 if (VAR_20 || VAR_21) {
  int VAR_28 = FUNC_2(VAR_19, VAR_19->curchan, VAR_19->rxchainmask,
          VAR_20);
  if (VAR_28 < 0) {
   VAR_17->ani.caldone = 0;
   FUNC_6(VAR_18, VAR_12);
   return;
  }

  VAR_17->ani.caldone = VAR_28;
 }

 FUNC_7(VAR_17, VAR_0,
  "Calibration @%lu finished: %s %s %s, caldone: %s\n",
  VAR_15,
  VAR_20 ? "long" : "", VAR_21 ? "short" : "",
  VAR_22 ? "ani" : "", VAR_17->ani.caldone ? "true" : "false");

 FUNC_4(VAR_18);

set_timer:





 VAR_24 = VAR_4;
 VAR_24 = FUNC_13(VAR_24, (u32)VAR_19->config.ani_poll_interval);
 if (!VAR_17->ani.caldone)
  VAR_24 = FUNC_13(VAR_24, (u32)VAR_25);

 FUNC_14(&VAR_17->ani.timer, VAR_15 + FUNC_15(VAR_24));

 if (FUNC_0(VAR_19) && VAR_19->caldata) {
  if (!FUNC_18(VAR_10, &VAR_19->caldata->cal_flags)) {
   FUNC_11(VAR_18->hw, &VAR_18->paprd_work);
  } else if (!VAR_19->paprd_table_write_done) {
   FUNC_5(VAR_18);
   FUNC_8(VAR_18);
   FUNC_4(VAR_18);
  }
 }
}
