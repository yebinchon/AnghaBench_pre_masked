
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wmi_rate_set_arg {size_t num_rates; int * rates; } ;
struct wmi_peer_assoc_complete_arg {struct wmi_rate_set_arg peer_legacy_rates; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_supported_band {struct ieee80211_rate* bitrates; } ;
struct ieee80211_sta {int* supp_rates; } ;
struct ieee80211_rate {int bitrate; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct TYPE_10__ {TYPE_4__* control; } ;
struct ath10k_vif {TYPE_5__ bitrate_mask; } ;
struct ath10k {TYPE_3__* hw; int conf_mutex; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_9__ {int legacy; } ;
struct TYPE_8__ {TYPE_2__* wiphy; } ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_6__ {int band; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_vif*,struct cfg80211_chan_def*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_0,
          struct ieee80211_vif *VAR_1,
          struct ieee80211_sta *VAR_2,
          struct wmi_peer_assoc_complete_arg *VAR_3)
{
 struct ath10k_vif *VAR_4 = (void *)VAR_1->drv_priv;
 struct wmi_rate_set_arg *VAR_5 = &VAR_3->peer_legacy_rates;
 struct cfg80211_chan_def VAR_6;
 const struct ieee80211_supported_band *VAR_7;
 const struct ieee80211_rate *VAR_8;
 enum nl80211_band VAR_9;
 u32 VAR_10;
 u8 VAR_11;
 int VAR_12;

 FUNC_3(&VAR_0->conf_mutex);

 if (FUNC_0(FUNC_2(VAR_1, &VAR_6)))
  return;

 VAR_9 = VAR_6.chan->band;
 VAR_7 = VAR_0->hw->wiphy->bands[VAR_9];
 VAR_10 = VAR_2->supp_rates[VAR_9];
 VAR_10 &= VAR_4->bitrate_mask.control[VAR_9].legacy;
 VAR_8 = VAR_7->bitrates;

 VAR_5->num_rates = 0;

 for (VAR_12 = 0; VAR_12 < 32; VAR_12++, VAR_10 >>= 1, VAR_8++) {
  if (!(VAR_10 & 1))
   continue;

  VAR_11 = FUNC_1(VAR_8->bitrate);
  VAR_5->rates[VAR_5->num_rates] = VAR_11;
  VAR_5->num_rates++;
 }
}
