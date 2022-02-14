
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


typedef unsigned int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_14__ {int rx_max_rate; int rx_mcs_set; int tx_max_rate; int tx_mcs_set; } ;
struct wmi_peer_assoc_complete_arg {unsigned int peer_vht_caps; int peer_bw_rxnss_override; TYPE_7__ peer_vht_rates; int peer_flags; int peer_max_mpdu; int peer_num_spatial_streams; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_13__ {int tx_mcs_map; int tx_highest; int rx_mcs_map; int rx_highest; } ;
struct ieee80211_sta_vht_cap {unsigned int cap; TYPE_6__ vht_mcs; int vht_supported; } ;
struct ieee80211_sta {scalar_t__ bandwidth; struct ieee80211_sta_vht_cap vht_cap; int addr; int rx_nss; } ;
struct cfg80211_chan_def {TYPE_3__* chan; } ;
struct TYPE_9__ {TYPE_1__* control; } ;
struct ath10k_vif {TYPE_2__ bitrate_mask; } ;
struct TYPE_12__ {TYPE_4__* peer_flags; } ;
struct ath10k {TYPE_5__ wmi; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_11__ {int bw160; int bw80; int vht_2g; int vht; } ;
struct TYPE_10__ {int band; } ;
struct TYPE_8__ {scalar_t__* vht_mcs; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct ieee80211_vif*,struct cfg80211_chan_def*) ;
 int FUNC_4 (int,scalar_t__ const*) ;
 scalar_t__ FUNC_5 (scalar_t__ const*) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct ath10k *VAR_10,
        struct ieee80211_vif *VAR_11,
        struct ieee80211_sta *VAR_12,
        struct wmi_peer_assoc_complete_arg *VAR_13)
{
 const struct ieee80211_sta_vht_cap *VAR_14 = &VAR_12->vht_cap;
 struct ath10k_vif *VAR_15 = (void *)VAR_11->drv_priv;
 struct cfg80211_chan_def VAR_16;
 enum nl80211_band VAR_17;
 const u16 *VAR_18;
 u8 VAR_19;
 u8 VAR_20, VAR_21;
 int VAR_22;

 if (FUNC_0(FUNC_3(VAR_11, &VAR_16)))
  return;

 if (!VAR_14->vht_supported)
  return;

 VAR_17 = VAR_16.chan->band;
 VAR_18 = VAR_15->bitrate_mask.control[VAR_17].vht_mcs;

 if (FUNC_5(VAR_18))
  return;

 VAR_13->peer_flags |= VAR_10->wmi.peer_flags->vht;

 if (VAR_16.chan->band == VAR_8)
  VAR_13->peer_flags |= VAR_10->wmi.peer_flags->vht_2g;

 VAR_13->peer_vht_caps = VAR_14->cap;

 VAR_19 = (VAR_14->cap &
   VAR_4) >>
         VAR_5;






 VAR_13->peer_max_mpdu = FUNC_6(VAR_13->peer_max_mpdu,
     (1U << (VAR_1 +
     VAR_19)) - 1);

 if (VAR_12->bandwidth == VAR_3)
  VAR_13->peer_flags |= VAR_10->wmi.peer_flags->bw80;

 if (VAR_12->bandwidth == VAR_2)
  VAR_13->peer_flags |= VAR_10->wmi.peer_flags->bw160;




 for (VAR_22 = 0, VAR_20 = 0, VAR_21 = 0; VAR_22 < VAR_9; VAR_22++) {
  VAR_21 = FUNC_1(VAR_14->vht_mcs.rx_mcs_map) >>
     (2 * VAR_22) & 3;

  if ((VAR_21 != VAR_7) &&
      VAR_18[VAR_22])
   VAR_20 = VAR_22 + 1;
 }
 VAR_13->peer_num_spatial_streams = FUNC_7(VAR_12->rx_nss, VAR_20);
 VAR_13->peer_vht_rates.rx_max_rate =
  FUNC_1(VAR_14->vht_mcs.rx_highest);
 VAR_13->peer_vht_rates.rx_mcs_set =
  FUNC_1(VAR_14->vht_mcs.rx_mcs_map);
 VAR_13->peer_vht_rates.tx_max_rate =
  FUNC_1(VAR_14->vht_mcs.tx_highest);
 VAR_13->peer_vht_rates.tx_mcs_set = FUNC_4(
  FUNC_1(VAR_14->vht_mcs.tx_mcs_map), VAR_18);

 FUNC_2(VAR_10, VAR_0, "mac vht peer %pM max_mpdu %d flags 0x%x\n",
     VAR_12->addr, VAR_13->peer_max_mpdu, VAR_13->peer_flags);

 if (VAR_13->peer_vht_rates.rx_max_rate &&
     (VAR_12->vht_cap.cap & VAR_6)) {
  switch (VAR_13->peer_vht_rates.rx_max_rate) {
  case 1560:

   VAR_13->peer_bw_rxnss_override = 2;
   break;
  case 780:

   VAR_13->peer_bw_rxnss_override = 1;
   break;
  }
 }
}
