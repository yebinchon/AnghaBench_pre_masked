
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct cfg80211_wowlan {int dummy; } ;
struct ath_softc {int wow_intr_before_sleep; int mutex; int intr_tq; int irq; int sc_pcu_lock; TYPE_1__* cur_chan; struct ath_hw* sc_ah; } ;
struct ath_hw {int imask; } ;
struct ath_common {int op_flags; } ;
struct TYPE_2__ {int nvifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (struct ath_softc*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (struct ath_softc*) ;
 int FUNC_11 (struct ath_softc*) ;
 int FUNC_12 (struct ath_softc*,struct cfg80211_wowlan*) ;
 int FUNC_13 (struct ath_softc*,struct cfg80211_wowlan*) ;
 int FUNC_14 (struct ath_softc*) ;
 int FUNC_15 (struct ath_common*,int ,char*,...) ;
 int FUNC_16 (struct ath_common*,char*,...) ;
 int FUNC_17 (struct ath_softc*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int ,int *) ;

int FUNC_26(struct ieee80211_hw *VAR_10,
    struct cfg80211_wowlan *VAR_11)
{
 struct ath_softc *VAR_12 = VAR_10->priv;
 struct ath_hw *VAR_13 = VAR_12->sc_ah;
 struct ath_common *VAR_14 = FUNC_2(VAR_13);
 u8 VAR_15;
 int VAR_16 = 0;

 FUNC_1(VAR_12);

 FUNC_18(&VAR_12->mutex);

 if (FUNC_25(VAR_3, &VAR_14->op_flags)) {
  FUNC_16(VAR_14, "Device not present\n");
  VAR_16 = -VAR_8;
  goto fail_wow;
 }

 if (FUNC_0(!VAR_11)) {
  FUNC_16(VAR_14, "None of the WoW triggers enabled\n");
  VAR_16 = -VAR_7;
  goto fail_wow;
 }

 if (VAR_12->cur_chan->nvifs > 1) {
  FUNC_15(VAR_14, VAR_9, "WoW for multivif is not yet supported\n");
  VAR_16 = 1;
  goto fail_wow;
 }

 if (FUNC_7()) {
  if (FUNC_25(VAR_4, &VAR_14->op_flags)) {
   FUNC_15(VAR_14, VAR_9,
    "Multi-channel WOW is not supported\n");
   VAR_16 = 1;
   goto fail_wow;
  }
 }

 if (!FUNC_25(VAR_5, &VAR_14->op_flags)) {
  FUNC_15(VAR_14, VAR_9, "None of the STA vifs are associated\n");
  VAR_16 = 1;
  goto fail_wow;
 }

 VAR_15 = FUNC_13(VAR_12, VAR_11);
 if (!VAR_15) {
  FUNC_15(VAR_14, VAR_9, "No valid WoW triggers\n");
  VAR_16 = 1;
  goto fail_wow;
 }

 FUNC_14(VAR_12);
 FUNC_17(VAR_12);

 FUNC_9(VAR_12);

 FUNC_10(VAR_12);





 VAR_16 = FUNC_11(VAR_12);
 if (VAR_16) {
  FUNC_16(VAR_14,
   "Unable to add disassoc/deauth pattern: %d\n", VAR_16);
  goto fail_wow;
 }

 if (VAR_15 & VAR_0) {
  VAR_16 = FUNC_12(VAR_12, VAR_11);
  if (VAR_16) {
   FUNC_16(VAR_14,
    "Unable to add user pattern: %d\n", VAR_16);
   goto fail_wow;
  }
 }

 FUNC_21(&VAR_12->sc_pcu_lock);





 VAR_12->wow_intr_before_sleep = VAR_13->imask;
 VAR_13->imask &= ~VAR_2;
 FUNC_3(VAR_13);
 VAR_13->imask = VAR_1 | VAR_2;
 FUNC_5(VAR_13);
 FUNC_4(VAR_13);

 FUNC_22(&VAR_12->sc_pcu_lock);





 FUNC_23(VAR_12->irq);
 FUNC_24(&VAR_12->intr_tq);

 FUNC_6(VAR_13, VAR_15);

 FUNC_8(VAR_12);
 FUNC_15(VAR_14, VAR_9, "Suspend with WoW triggers: 0x%x\n", VAR_15);

 FUNC_20(VAR_6, &VAR_14->op_flags);
fail_wow:
 FUNC_19(&VAR_12->mutex);
 return VAR_16;
}
