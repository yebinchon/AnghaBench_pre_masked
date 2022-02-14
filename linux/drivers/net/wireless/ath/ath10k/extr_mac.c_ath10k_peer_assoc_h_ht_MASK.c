
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_14__ {int* rates; int num_rates; } ;
struct wmi_peer_assoc_complete_arg {int peer_max_mpdu; int peer_ht_caps; int peer_rate_caps; int peer_num_spatial_streams; TYPE_7__ peer_ht_rates; int addr; int peer_flags; int peer_mpdu_density; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_13__ {int* rx_mask; } ;
struct ieee80211_sta_ht_cap {int ampdu_factor; int cap; TYPE_6__ mcs; int ampdu_density; int ht_supported; } ;
struct ieee80211_sta {scalar_t__ bandwidth; int rx_nss; struct ieee80211_sta_ht_cap ht_cap; } ;
struct cfg80211_chan_def {TYPE_1__* chan; } ;
struct TYPE_10__ {TYPE_2__* control; } ;
struct ath10k_vif {TYPE_3__ bitrate_mask; } ;
struct TYPE_12__ {TYPE_4__* peer_flags; } ;
struct ath10k {TYPE_5__ wmi; int conf_mutex; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_11__ {int stbc; int bw40; int ldbc; int ht; } ;
struct TYPE_9__ {int* ht_mcs; scalar_t__ gi; int * vht_mcs; } ;
struct TYPE_8__ {int band; } ;


 int VAR_0 ;
 int const FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int,int ) ;
 int FUNC_3 (struct ieee80211_vif*,struct cfg80211_chan_def*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(struct ath10k *VAR_18,
       struct ieee80211_vif *VAR_19,
       struct ieee80211_sta *VAR_20,
       struct wmi_peer_assoc_complete_arg *VAR_21)
{
 const struct ieee80211_sta_ht_cap *VAR_22 = &VAR_20->ht_cap;
 struct ath10k_vif *VAR_23 = (void *)VAR_19->drv_priv;
 struct cfg80211_chan_def VAR_24;
 enum nl80211_band VAR_25;
 const u8 *VAR_26;
 const u16 *VAR_27;
 int VAR_28, VAR_29;
 u8 VAR_30;
 u32 VAR_31;

 FUNC_7(&VAR_18->conf_mutex);

 if (FUNC_1(FUNC_3(VAR_19, &VAR_24)))
  return;

 if (!VAR_22->ht_supported)
  return;

 VAR_25 = VAR_24.chan->band;
 VAR_26 = VAR_23->bitrate_mask.control[VAR_25].ht_mcs;
 VAR_27 = VAR_23->bitrate_mask.control[VAR_25].vht_mcs;

 if (FUNC_5(VAR_26) &&
     FUNC_6(VAR_27))
  return;

 VAR_21->peer_flags |= VAR_18->wmi.peer_flags->ht;
 VAR_21->peer_max_mpdu = (1 << (VAR_7 +
        VAR_22->ampdu_factor)) - 1;

 VAR_21->peer_mpdu_density =
  FUNC_4(VAR_22->ampdu_density);

 VAR_21->peer_ht_caps = VAR_22->cap;
 VAR_21->peer_rate_caps |= VAR_13;

 if (VAR_22->cap & VAR_1)
  VAR_21->peer_flags |= VAR_18->wmi.peer_flags->ldbc;

 if (VAR_20->bandwidth >= VAR_9) {
  VAR_21->peer_flags |= VAR_18->wmi.peer_flags->bw40;
  VAR_21->peer_rate_caps |= VAR_11;
 }

 if (VAR_23->bitrate_mask.control[VAR_25].gi != VAR_10) {
  if (VAR_22->cap & VAR_4)
   VAR_21->peer_rate_caps |= VAR_15;

  if (VAR_22->cap & VAR_5)
   VAR_21->peer_rate_caps |= VAR_15;
 }

 if (VAR_22->cap & VAR_6) {
  VAR_21->peer_rate_caps |= VAR_17;
  VAR_21->peer_flags |= VAR_18->wmi.peer_flags->stbc;
 }

 if (VAR_22->cap & VAR_2) {
  VAR_31 = VAR_22->cap & VAR_2;
  VAR_31 = VAR_31 >> VAR_3;
  VAR_31 = VAR_31 << VAR_14;
  VAR_21->peer_rate_caps |= VAR_31;
  VAR_21->peer_flags |= VAR_18->wmi.peer_flags->stbc;
 }

 if (VAR_22->mcs.rx_mask[1] && VAR_22->mcs.rx_mask[2])
  VAR_21->peer_rate_caps |= VAR_16;
 else if (VAR_22->mcs.rx_mask[1])
  VAR_21->peer_rate_caps |= VAR_12;

 for (VAR_28 = 0, VAR_29 = 0, VAR_30 = 0; VAR_28 < VAR_8 * 8; VAR_28++)
  if ((VAR_22->mcs.rx_mask[VAR_28 / 8] & FUNC_0(VAR_28 % 8)) &&
      (VAR_26[VAR_28 / 8] & FUNC_0(VAR_28 % 8))) {
   VAR_30 = (VAR_28 / 8) + 1;
   VAR_21->peer_ht_rates.rates[VAR_29++] = VAR_28;
  }
 if (VAR_29 == 0) {
  VAR_21->peer_ht_rates.num_rates = 8;
  for (VAR_28 = 0; VAR_28 < VAR_21->peer_ht_rates.num_rates; VAR_28++)
   VAR_21->peer_ht_rates.rates[VAR_28] = VAR_28;
 } else {
  VAR_21->peer_ht_rates.num_rates = VAR_29;
  VAR_21->peer_num_spatial_streams = FUNC_8(VAR_20->rx_nss, VAR_30);
 }

 FUNC_2(VAR_18, VAR_0, "mac ht peer %pM mcs cnt %d nss %d\n",
     VAR_21->addr,
     VAR_21->peer_ht_rates.num_rates,
     VAR_21->peer_num_spatial_streams);
}
