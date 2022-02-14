
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {struct ieee80211_channel* chan; } ;
struct ieee80211_conf {int flags; int power_level; TYPE_4__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct ath9k_htc_priv* priv; } ;
struct ieee80211_channel {int hw_value; int center_freq; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_priv {int ps_idle; int ps_enabled; int txpowlimit; int mutex; int curtxpow; TYPE_1__* ah; int ps_work; int htc_pm_lock; } ;
struct TYPE_5__ {int * channels; scalar_t__ is_monitoring; } ;


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
 int FUNC_0 (struct ieee80211_hw*,TYPE_1__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*,int ,int,int *) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ath9k_htc_priv*) ;
 int FUNC_5 (struct ath9k_htc_priv*) ;
 scalar_t__ FUNC_6 (struct ath9k_htc_priv*,struct ieee80211_hw*,int *) ;
 int FUNC_7 (struct ath9k_htc_priv*,int ) ;
 struct ath_common* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct ath_common*,int ,char*,int ) ;
 int FUNC_10 (struct ath_common*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_12, u32 VAR_13)
{
 struct ath9k_htc_priv *VAR_14 = VAR_12->priv;
 struct ath_common *VAR_15 = FUNC_8(VAR_14->ah);
 struct ieee80211_conf *VAR_16 = &VAR_12->conf;
 bool VAR_17 = 0;
 int VAR_18 = 0;

 FUNC_12(&VAR_14->mutex);
 FUNC_4(VAR_14);

 if (VAR_13 & VAR_5) {
  FUNC_12(&VAR_14->htc_pm_lock);

  VAR_14->ps_idle = !!(VAR_16->flags & VAR_9);
  if (!VAR_14->ps_idle)
   VAR_17 = 1;

  FUNC_13(&VAR_14->htc_pm_lock);
 }





 if (VAR_13 & VAR_6) {
  if ((VAR_16->flags & VAR_10) &&
      !VAR_14->ah->is_monitoring)
   FUNC_2(VAR_14);
  else if (VAR_14->ah->is_monitoring)
   FUNC_5(VAR_14);
 }

 if ((VAR_13 & VAR_4) || VAR_17) {
  struct ieee80211_channel *VAR_19 = VAR_12->conf.chandef.chan;
  int VAR_20 = VAR_19->hw_value;

  FUNC_9(VAR_15, VAR_2, "Set channel: %d MHz\n",
   VAR_19->center_freq);

  FUNC_0(VAR_12, VAR_14->ah, &VAR_12->conf.chandef);
  if (FUNC_6(VAR_14, VAR_12, &VAR_14->ah->channels[VAR_20]) < 0) {
   FUNC_10(VAR_15, "Unable to set channel\n");
   VAR_18 = -VAR_3;
   goto out;
  }

 }

 if (VAR_13 & VAR_8) {
  if (VAR_16->flags & VAR_11) {
   FUNC_7(VAR_14, VAR_1);
   VAR_14->ps_enabled = 1;
  } else {
   VAR_14->ps_enabled = 0;
   FUNC_11(&VAR_14->ps_work);
   FUNC_7(VAR_14, VAR_0);
  }
 }

 if (VAR_13 & VAR_7) {
  VAR_14->txpowlimit = 2 * VAR_16->power_level;
  FUNC_1(VAR_14->ah, VAR_14->curtxpow,
           VAR_14->txpowlimit, &VAR_14->curtxpow);
 }

out:
 FUNC_3(VAR_14);
 FUNC_13(&VAR_14->mutex);
 return VAR_18;
}
