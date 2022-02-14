
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct cfg80211_bitrate_mask {TYPE_2__* control; } ;
struct ath10k_vif {int vht_num_rates; int vdev_id; scalar_t__ vht_pfr; struct cfg80211_bitrate_mask bitrate_mask; struct ath10k* ar; } ;
struct TYPE_7__ {int fw_features; } ;
struct TYPE_8__ {TYPE_3__ fw_file; } ;
struct ath10k {int ht_cap_info; int conf_mutex; int hw; int num_rf_chains; TYPE_4__ normal_mode_fw; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_6__ {scalar_t__* ht_mcs; scalar_t__ gi; int * vht_mcs; } ;
struct TYPE_5__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath10k*,int,struct cfg80211_bitrate_mask const*,int*) ;
 int FUNC_1 (struct ath10k*,int,struct cfg80211_bitrate_mask const*,scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (struct ath10k*,int,struct cfg80211_bitrate_mask const*,int*) ;
 int FUNC_3 (struct ath10k*,int,struct cfg80211_bitrate_mask const*,int) ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__ const*) ;
 int FUNC_5 (int const*) ;
 int VAR_7 ;
 int FUNC_6 (struct ath10k_vif*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct ieee80211_vif*,struct cfg80211_chan_def*) ;
 int FUNC_8 (struct ath10k*,char*,int ,int) ;
 int FUNC_9 (int ,int ,struct ath10k_vif*) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(struct ieee80211_hw *VAR_8,
       struct ieee80211_vif *VAR_9,
       const struct cfg80211_bitrate_mask *VAR_10)
{
 struct ath10k_vif *VAR_11 = (void *)VAR_9->drv_priv;
 struct cfg80211_chan_def VAR_12;
 struct ath10k *VAR_13 = VAR_11->ar;
 enum nl80211_band VAR_14;
 const u8 *VAR_15;
 const u16 *VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 u8 VAR_19;
 u8 VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23, VAR_24;
 u8 VAR_25;
 bool VAR_26 = 1;

 if (FUNC_7(VAR_9, &VAR_12))
  return -VAR_2;

 VAR_14 = VAR_12.chan->band;
 VAR_15 = VAR_10->control[VAR_14].ht_mcs;
 VAR_16 = VAR_10->control[VAR_14].vht_mcs;
 VAR_20 = !!(VAR_13->ht_cap_info & VAR_5);

 VAR_19 = VAR_10->control[VAR_14].gi;
 if (VAR_19 == VAR_3)
  return -VAR_1;

 VAR_24 = FUNC_14(VAR_0,
        VAR_13->normal_mode_fw.fw_file.fw_features);
 if (VAR_24) {
  FUNC_12(&VAR_13->conf_mutex);
  FUNC_9(VAR_13->hw,
        VAR_6,
        VAR_11);
  FUNC_13(&VAR_13->conf_mutex);
 }

 if (FUNC_2(VAR_13, VAR_14, VAR_10,
          &VAR_23)) {
  VAR_22 = FUNC_1(VAR_13, VAR_14, VAR_10,
             &VAR_17, &VAR_18,
             0);
  if (VAR_22) {
   FUNC_8(VAR_13, "failed to get single rate for vdev %i: %d\n",
        VAR_11->vdev_id, VAR_22);
   return VAR_22;
  }
 } else if (FUNC_0(VAR_13, VAR_14, VAR_10,
         &VAR_21)) {
  VAR_17 = VAR_4;
  VAR_18 = VAR_21;
 } else {
  VAR_17 = VAR_4;
  VAR_18 = FUNC_11(VAR_13->num_rf_chains,
     FUNC_10(FUNC_4(VAR_15),
         FUNC_5(VAR_16)));

  if (!FUNC_3(VAR_13, VAR_14, VAR_10,
           VAR_24)) {
   u8 VAR_27;

   if (!VAR_24 || VAR_23 != 1)
    return -VAR_1;





   FUNC_1(VAR_13, VAR_14, VAR_10,
        &VAR_25,
        &VAR_27,
        1);
   VAR_26 = 0;
  } else {
   VAR_25 = 0;
  }

  FUNC_12(&VAR_13->conf_mutex);

  if (VAR_26)
   VAR_11->bitrate_mask = *VAR_10;
  VAR_11->vht_num_rates = VAR_23;
  VAR_11->vht_pfr = VAR_25;
  FUNC_9(VAR_13->hw,
        VAR_7,
        VAR_11);

  FUNC_13(&VAR_13->conf_mutex);
 }

 FUNC_12(&VAR_13->conf_mutex);

 VAR_22 = FUNC_6(VAR_11, VAR_17, VAR_18, VAR_19, VAR_20);
 if (VAR_22) {
  FUNC_8(VAR_13, "failed to set fixed rate params on vdev %i: %d\n",
       VAR_11->vdev_id, VAR_22);
  goto exit;
 }

exit:
 FUNC_13(&VAR_13->conf_mutex);

 return VAR_22;
}
