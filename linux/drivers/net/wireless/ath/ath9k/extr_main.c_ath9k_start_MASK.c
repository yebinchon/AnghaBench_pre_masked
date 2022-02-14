
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int chandef; } ;
struct ieee80211_hw {TYPE_1__ conf; struct ath_softc* priv; } ;
struct ieee80211_channel {int center_freq; } ;
struct ath_softc {int mutex; int sc_pcu_lock; struct ath_hw* sc_ah; int cur_chandef; struct ath_chanctx* cur_chan; } ;
struct TYPE_7__ {int hw_hang_checks; scalar_t__ led_active_high; } ;
struct TYPE_6__ {int hw_caps; } ;
struct ath_hw {int reset_power_on; int imask; int is_monitoring; scalar_t__ led_pin; TYPE_3__ config; TYPE_2__ caps; int caldata; int intr_ref_cnt; } ;
struct ath_common {int op_flags; } ;
struct TYPE_8__ {struct ieee80211_channel* chan; } ;
struct ath_chanctx {TYPE_4__ chandef; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct ath9k_channel* FUNC_1 (struct ieee80211_hw*,struct ath_hw*,TYPE_4__*) ;
 int FUNC_2 (struct ath_hw*) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_hw*,scalar_t__,int *,int ) ;
 int FUNC_6 (struct ath_hw*,struct ath9k_channel*,int ,int) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (struct ath_softc*) ;
 int FUNC_11 (struct ath_softc*) ;
 int FUNC_12 (struct ath_softc*,int) ;
 int FUNC_13 (struct ath_common*,int ,char*,int ) ;
 int FUNC_14 (struct ath_common*,char*,int,int ) ;
 int FUNC_15 (struct ath_softc*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct ieee80211_hw *VAR_17)
{
 struct ath_softc *VAR_18 = VAR_17->priv;
 struct ath_hw *VAR_19 = VAR_18->sc_ah;
 struct ath_common *VAR_20 = FUNC_3(VAR_19);
 struct ieee80211_channel *VAR_21 = VAR_18->cur_chan->chandef.chan;
 struct ath_chanctx *VAR_22 = VAR_18->cur_chan;
 struct ath9k_channel *VAR_23;
 int VAR_24;

 FUNC_13(VAR_20, VAR_15,
  "Starting driver with initial channel: %d MHz\n",
  VAR_21->center_freq);

 FUNC_10(VAR_18);
 FUNC_18(&VAR_18->mutex);

 VAR_23 = FUNC_1(VAR_17, VAR_19, &VAR_22->chandef);
 VAR_18->cur_chandef = VAR_17->conf.chandef;


 FUNC_4(VAR_19, 0);
 FUNC_20(&VAR_18->sc_pcu_lock);

 FUNC_16(&VAR_19->intr_ref_cnt, -1);

 VAR_24 = FUNC_6(VAR_19, VAR_23, VAR_19->caldata, 0);
 if (VAR_24) {
  FUNC_14(VAR_20,
   "Unable to reset hardware; reset status %d (freq %u MHz)\n",
   VAR_24, VAR_21->center_freq);
  VAR_19->reset_power_on = 0;
 }


 VAR_19->imask = VAR_13 | VAR_9 |
      VAR_12 | VAR_5 |
      VAR_6;

 if (VAR_19->caps.hw_caps & VAR_1)
  VAR_19->imask |= VAR_10 |
        VAR_11;
 else
  VAR_19->imask |= VAR_8;

 if (VAR_19->config.hw_hang_checks & VAR_16)
  VAR_19->imask |= VAR_3;





 if (FUNC_0(VAR_19))
  VAR_19->imask |= VAR_7;

 if (VAR_19->caps.hw_caps & VAR_2)
  VAR_19->imask |= VAR_4;

 FUNC_15(VAR_18);

 FUNC_17(VAR_14, &VAR_20->op_flags);
 VAR_18->sc_ah->is_monitoring = 0;

 if (!FUNC_12(VAR_18, 0))
  VAR_19->reset_power_on = 0;

 if (VAR_19->led_pin >= 0) {
  FUNC_8(VAR_19, VAR_19->led_pin,
      (VAR_19->config.led_active_high) ? 1 : 0);
  FUNC_5(VAR_19, VAR_19->led_pin, ((void*)0),
       VAR_0);
 }





 FUNC_2(VAR_18->sc_ah);

 FUNC_7(VAR_19);

 FUNC_21(&VAR_18->sc_pcu_lock);

 FUNC_11(VAR_18);

 FUNC_19(&VAR_18->mutex);

 FUNC_9(VAR_18);

 return 0;
}
