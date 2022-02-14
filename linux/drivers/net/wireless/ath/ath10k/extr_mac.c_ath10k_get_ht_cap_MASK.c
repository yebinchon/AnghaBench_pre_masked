
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* rx_mask; int tx_params; } ;
struct ieee80211_sta_ht_cap {int ht_supported; int cap; TYPE_1__ mcs; int ampdu_density; int ampdu_factor; int member_0; } ;
struct ath10k {int ht_cap_info; int cfg_tx_chainmask; int vht_cap_info; int num_rf_chains; int cfg_rx_chainmask; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static struct ieee80211_sta_ht_cap FUNC_1(struct ath10k *VAR_28)
{
 int VAR_29;
 struct ieee80211_sta_ht_cap VAR_30 = {0};

 if (!(VAR_28->ht_cap_info & VAR_17))
  return VAR_30;

 VAR_30.ht_supported = 1;
 VAR_30.ampdu_factor = VAR_11;
 VAR_30.ampdu_density = VAR_13;
 VAR_30.cap |= VAR_9;
 VAR_30.cap |= VAR_0;
 VAR_30.cap |=
  VAR_14 << VAR_8;

 if (VAR_28->ht_cap_info & VAR_18)
  VAR_30.cap |= VAR_6;

 if (VAR_28->ht_cap_info & VAR_19)
  VAR_30.cap |= VAR_7;

 if (VAR_28->ht_cap_info & VAR_16) {
  u32 VAR_31;

  VAR_31 = VAR_15;
  VAR_31 <<= VAR_8;

  VAR_30.cap |= VAR_31;
 }

 if (VAR_28->ht_cap_info & VAR_26 && (VAR_28->cfg_tx_chainmask > 1))
  VAR_30.cap |= VAR_10;

 if (VAR_28->ht_cap_info & VAR_23) {
  u32 VAR_32;

  VAR_32 = VAR_28->ht_cap_info;
  VAR_32 &= VAR_23;
  VAR_32 >>= VAR_24;
  VAR_32 <<= VAR_5;
  VAR_32 &= VAR_4;

  VAR_30.cap |= VAR_32;
 }

 if (VAR_28->ht_cap_info & VAR_20 || (VAR_28->ht_cap_info &
     VAR_22 && (VAR_28->ht_cap_info & VAR_25)))
  VAR_30.cap |= VAR_1;

 if (VAR_28->ht_cap_info & VAR_21)
  VAR_30.cap |= VAR_2;


 if (VAR_28->vht_cap_info & VAR_27)
  VAR_30.cap |= VAR_3;

 for (VAR_29 = 0; VAR_29 < VAR_28->num_rf_chains; VAR_29++) {
  if (VAR_28->cfg_rx_chainmask & FUNC_0(VAR_29))
   VAR_30.mcs.rx_mask[VAR_29] = 0xFF;
 }

 VAR_30.mcs.tx_params |= VAR_12;

 return VAR_30;
}
