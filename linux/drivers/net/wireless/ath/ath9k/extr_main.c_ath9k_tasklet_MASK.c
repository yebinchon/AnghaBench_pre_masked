
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ath_softc {int intrstatus; scalar_t__ gtt_cnt; int ps_flags; int sc_pcu_lock; struct ath_hw* sc_ah; int tx_wait; int sc_pm_lock; scalar_t__ ps_enabled; int intr_lock; } ;
struct TYPE_4__ {int hw_caps; } ;
struct TYPE_3__ {int hw_hang_checks; } ;
struct ath_hw {TYPE_2__ caps; TYPE_1__ config; } ;
struct ath_common {int cc_lock; } ;
typedef enum ath_reset_type { ____Placeholder_ath_reset_type } ath_reset_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_softc*,int) ;
 int FUNC_3 (struct ath_hw*) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (struct ath_softc*,int) ;
 int FUNC_9 (struct ath_common*,int ,char*) ;
 int FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (struct ath_common*) ;
 int FUNC_12 (struct ath_softc*,int ,int) ;
 int FUNC_13 (struct ath_softc*) ;
 int FUNC_14 (struct ath_softc*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *) ;

void FUNC_20(unsigned long VAR_21)
{
 struct ath_softc *VAR_22 = (struct ath_softc *)VAR_21;
 struct ath_hw *VAR_23 = VAR_22->sc_ah;
 struct ath_common *VAR_24 = FUNC_4(VAR_23);
 enum ath_reset_type VAR_25;
 unsigned long VAR_26;
 u32 VAR_27;
 u32 VAR_28;

 FUNC_16(&VAR_22->intr_lock, VAR_26);
 VAR_27 = VAR_22->intrstatus;
 VAR_22->intrstatus = 0;
 FUNC_18(&VAR_22->intr_lock, VAR_26);

 FUNC_7(VAR_22);
 FUNC_15(&VAR_22->sc_pcu_lock);

 if (VAR_27 & VAR_2) {
  VAR_25 = VAR_19;
  FUNC_8(VAR_22, VAR_25);
  FUNC_9(VAR_24, VAR_17, "FATAL: Skipping interrupts\n");
  goto out;
 }

 if ((VAR_23->config.hw_hang_checks & VAR_12) &&
     (VAR_27 & VAR_1)) {
  FUNC_16(&VAR_24->cc_lock, VAR_26);
  FUNC_11(VAR_24);
  FUNC_1(VAR_23);
  FUNC_18(&VAR_24->cc_lock, VAR_26);

  if (FUNC_0(VAR_23)) {
   VAR_25 = VAR_18;
   FUNC_8(VAR_22, VAR_25);

   FUNC_9(VAR_24, VAR_17,
    "BB_WATCHDOG: Skipping interrupts\n");
   goto out;
  }
 }

 if (VAR_27 & VAR_4) {
  VAR_22->gtt_cnt++;

  if ((VAR_22->gtt_cnt >= VAR_13) && !FUNC_3(VAR_23)) {
   VAR_25 = VAR_20;
   FUNC_8(VAR_22, VAR_25);
   FUNC_9(VAR_24, VAR_17,
    "GTT: Skipping interrupts\n");
   goto out;
  }
 }

 FUNC_16(&VAR_22->sc_pm_lock, VAR_26);
 if ((VAR_27 & VAR_10) && VAR_22->ps_enabled) {




  FUNC_9(VAR_24, VAR_14, "TSFOOR - Sync with next Beacon\n");
  VAR_22->ps_flags |= VAR_16 | VAR_15;
 }
 FUNC_18(&VAR_22->sc_pm_lock, VAR_26);

 if (VAR_23->caps.hw_caps & VAR_0)
  VAR_28 = (VAR_7 | VAR_8 | VAR_6 |
     VAR_9);
 else
  VAR_28 = (VAR_5 | VAR_6 | VAR_9);

 if (VAR_27 & VAR_28) {

  if ((VAR_23->caps.hw_caps & VAR_0) &&
      (VAR_27 & VAR_7))
   FUNC_12(VAR_22, 0, 1);

  FUNC_12(VAR_22, 0, 0);
 }

 if (VAR_27 & VAR_11) {
  if (VAR_23->caps.hw_caps & VAR_0) {






   VAR_22->gtt_cnt = 0;

   FUNC_13(VAR_22);
  } else {
   FUNC_14(VAR_22);
  }

  FUNC_19(&VAR_22->tx_wait);
 }

 if (VAR_27 & VAR_3)
  FUNC_10(VAR_22->sc_ah);

 FUNC_2(VAR_22, VAR_27);


 FUNC_5(VAR_23);
out:
 FUNC_17(&VAR_22->sc_pcu_lock);
 FUNC_6(VAR_22);
}
