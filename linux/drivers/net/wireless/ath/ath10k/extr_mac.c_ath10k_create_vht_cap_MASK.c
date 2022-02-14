
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {void* tx_highest; void* rx_highest; void* tx_mcs_map; void* rx_mcs_map; } ;
struct ieee80211_sta_vht_cap {int vht_supported; int cap; TYPE_1__ vht_mcs; int member_0; } ;
struct ath10k_hw_params {int vht160_mcs_rx_highest; int vht160_mcs_tx_highest; } ;
struct ath10k {int vht_cap_info; int num_rf_chains; int cfg_tx_chainmask; struct ath10k_hw_params hw_params; } ;


 int FUNC_0 (int) ;
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
 int VAR_13 ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static struct ieee80211_sta_vht_cap FUNC_4(struct ath10k *VAR_14)
{
 struct ieee80211_sta_vht_cap VAR_15 = {0};
 struct ath10k_hw_params *VAR_16 = &VAR_14->hw_params;
 u16 VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_15.vht_supported = 1;
 VAR_15.cap = VAR_14->vht_cap_info;

 if (VAR_14->vht_cap_info & (VAR_9 |
    VAR_2)) {
  VAR_18 = FUNC_2(VAR_14);
  VAR_18 <<= VAR_1;
  VAR_18 &= VAR_0;

  VAR_15.cap |= VAR_18;
 }

 if (VAR_14->vht_cap_info & (VAR_10 |
    VAR_3)) {
  VAR_18 = FUNC_1(VAR_14);
  VAR_18 <<= VAR_6;
  VAR_18 &= VAR_5;

  VAR_15.cap |= VAR_18;
 }




 if ((VAR_14->vht_cap_info & VAR_4) &&
     (VAR_14->vht_cap_info & VAR_8) == 0)
  VAR_15.cap |= VAR_7;

 VAR_17 = 0;
 for (VAR_19 = 0; VAR_19 < 8; VAR_19++) {
  if ((VAR_19 < VAR_14->num_rf_chains) && (VAR_14->cfg_tx_chainmask & FUNC_0(VAR_19)))
   VAR_17 |= VAR_13 << (VAR_19 * 2);
  else
   VAR_17 |= VAR_12 << (VAR_19 * 2);
 }

 if (VAR_14->cfg_tx_chainmask <= 1)
  VAR_15.cap &= ~VAR_11;

 VAR_15.vht_mcs.rx_mcs_map = FUNC_3(VAR_17);
 VAR_15.vht_mcs.tx_mcs_map = FUNC_3(VAR_17);





 if ((VAR_15.cap & VAR_8) &&
     (VAR_16->vht160_mcs_rx_highest != 0 ||
      VAR_16->vht160_mcs_tx_highest != 0)) {
  VAR_15.vht_mcs.rx_highest = FUNC_3(VAR_16->vht160_mcs_rx_highest);
  VAR_15.vht_mcs.tx_highest = FUNC_3(VAR_16->vht160_mcs_tx_highest);
 }

 return VAR_15;
}
