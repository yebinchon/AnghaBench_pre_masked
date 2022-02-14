
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {struct ieee80211_channel* chan; } ;
struct TYPE_10__ {int flags; TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_4__ conf; } ;
struct ieee80211_conf {int dummy; } ;
struct ieee80211_channel {int center_freq; } ;
struct ath_hw {TYPE_3__* curchan; } ;
struct ath_common {int op_flags; TYPE_1__* hw; } ;
struct ath9k_hw_cal_data {int dummy; } ;
struct TYPE_12__ {scalar_t__ spectral_mode; } ;
struct TYPE_11__ {int cleanup_timer; } ;
struct ath9k_htc_priv {TYPE_6__ spec_priv; TYPE_5__ tx; int htc; int curtxpow; int txpowlimit; struct ath9k_hw_cal_data caldata; struct ath_hw* ah; } ;
struct ath9k_channel {int dummy; } ;
typedef enum htc_phymode { ____Placeholder_htc_phymode } htc_phymode ;
typedef int __be16 ;
struct TYPE_9__ {int channel; } ;
struct TYPE_7__ {struct ieee80211_conf conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct ath_common*,TYPE_6__*) ;
 int FUNC_3 (struct ath_hw*,int ,int ,int *) ;
 int FUNC_4 (struct ath9k_htc_priv*) ;
 int FUNC_5 (struct ath9k_htc_priv*,struct ath9k_channel*) ;
 int FUNC_6 (struct ath9k_htc_priv*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*) ;
 int FUNC_9 (struct ath9k_htc_priv*) ;
 int FUNC_10 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*,struct ath9k_channel*,struct ath9k_hw_cal_data*,int) ;
 int FUNC_13 (struct ath9k_htc_priv*) ;
 int FUNC_14 (struct ath_common*,int ,char*,int ,int ,int ,int ,int) ;
 int FUNC_15 (struct ath_common*,char*,int ,int) ;
 int FUNC_16 (struct ieee80211_conf*) ;
 int FUNC_17 (struct ieee80211_conf*) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_21 (int *,scalar_t__) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ,int *) ;

__attribute__((used)) static int FUNC_24(struct ath9k_htc_priv *VAR_14,
     struct ieee80211_hw *VAR_15,
     struct ath9k_channel *VAR_16)
{
 struct ath_hw *VAR_17 = VAR_14->ah;
 struct ath_common *VAR_18 = FUNC_11(VAR_17);
 struct ieee80211_conf *VAR_19 = &VAR_18->hw->conf;
 bool VAR_20;
 struct ieee80211_channel *VAR_21 = VAR_15->conf.chandef.chan;
 struct ath9k_hw_cal_data *VAR_22;
 enum htc_phymode VAR_23;
 __be16 VAR_24;
 u8 VAR_25;
 int VAR_26;

 if (FUNC_23(VAR_1, &VAR_18->op_flags))
  return -VAR_4;

 VAR_20 = !!(VAR_15->conf.flags & VAR_5);

 FUNC_7(VAR_14);

 FUNC_8(VAR_14);
 FUNC_19(&VAR_14->tx.cleanup_timer);
 FUNC_9(VAR_14);

 FUNC_0(VAR_7);
 FUNC_0(VAR_8);
 FUNC_0(VAR_12);

 FUNC_13(VAR_14);

 FUNC_14(VAR_18, VAR_3,
  "(%u MHz) -> (%u MHz), HT: %d, HT40: %d fastcc: %d\n",
  VAR_14->ah->curchan->channel,
  VAR_21->center_freq, FUNC_16(VAR_19), FUNC_17(VAR_19),
  VAR_20);
 VAR_22 = VAR_20 ? ((void*)0) : &VAR_14->caldata;
 VAR_26 = FUNC_12(VAR_17, VAR_16, VAR_22, VAR_20);
 if (VAR_26) {
  FUNC_15(VAR_18,
   "Unable to reset channel (%u Mhz) reset status %d\n",
   VAR_21->center_freq, VAR_26);
  goto err;
 }

 FUNC_3(VAR_17, VAR_14->curtxpow, VAR_14->txpowlimit,
          &VAR_14->curtxpow);

 FUNC_0(VAR_11);
 if (VAR_26)
  goto err;

 FUNC_4(VAR_14);

 VAR_23 = FUNC_5(VAR_14, VAR_16);
 VAR_24 = FUNC_18(VAR_23);
 FUNC_1(VAR_10, &VAR_24);
 if (VAR_26)
  goto err;

 FUNC_0(VAR_9);
 if (VAR_26)
  goto err;

 FUNC_20(VAR_14->htc);

 if (!FUNC_23(VAR_2, &VAR_18->op_flags) &&
     !(VAR_15->conf.flags & VAR_5))
  FUNC_10(VAR_14);

 FUNC_21(&VAR_14->tx.cleanup_timer,
    VAR_13 + FUNC_22(VAR_0));


 if (FUNC_23(VAR_2, &VAR_18->op_flags) &&
       VAR_14->spec_priv.spectral_mode == VAR_6)
  FUNC_2(VAR_18, &VAR_14->spec_priv);
err:
 FUNC_6(VAR_14);
 return VAR_26;
}
