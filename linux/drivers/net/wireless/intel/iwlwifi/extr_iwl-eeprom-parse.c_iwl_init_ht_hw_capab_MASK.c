
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct iwl_trans {TYPE_1__* trans_cfg; struct iwl_cfg* cfg; } ;
struct iwl_nvm_data {scalar_t__ sku_cap_mimo_disabled; int sku_cap_11n_enable; } ;
struct iwl_cfg {TYPE_2__* ht_params; int max_ht_ampdu_exponent; scalar_t__ rx_with_siso_diversity; } ;
struct TYPE_7__ {int* rx_mask; int tx_params; int rx_highest; } ;
struct ieee80211_sta_ht_cap {int ht_supported; int cap; TYPE_3__ mcs; int ampdu_density; int ampdu_factor; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_8__ {int disable_11n; scalar_t__ amsdu_size; } ;
struct TYPE_6__ {int ht40_bands; scalar_t__ ht_greenfield_support; scalar_t__ ldpc; scalar_t__ stbc; } ;
struct TYPE_5__ {scalar_t__ mq_rx_supported; } ;


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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_4__ VAR_19 ;

void FUNC_4(struct iwl_trans *VAR_20,
     struct iwl_nvm_data *VAR_21,
     struct ieee80211_sta_ht_cap *VAR_22,
     enum nl80211_band VAR_23,
     u8 VAR_24, u8 VAR_25)
{
 const struct iwl_cfg *VAR_26 = VAR_20->cfg;
 int VAR_27 = 0;

 VAR_24 = FUNC_3(VAR_24);
 if (VAR_26->rx_with_siso_diversity)
  VAR_25 = 1;
 else
  VAR_25 = FUNC_3(VAR_25);

 if (!(VAR_21->sku_cap_11n_enable) ||
     (VAR_19.disable_11n & VAR_16) ||
     !VAR_26->ht_params) {
  VAR_22->ht_supported = 0;
  return;
 }

 if (VAR_21->sku_cap_mimo_disabled)
  VAR_25 = 1;

 VAR_22->ht_supported = 1;
 VAR_22->cap = VAR_0;

 if (VAR_26->ht_params->stbc) {
  VAR_22->cap |= (1 << VAR_4);

  if (VAR_24 > 1)
   VAR_22->cap |= VAR_8;
 }

 if (VAR_26->ht_params->ldpc)
  VAR_22->cap |= VAR_2;

 if ((VAR_20->trans_cfg->mq_rx_supported &&
      VAR_19.amsdu_size == VAR_15) ||
      VAR_19.amsdu_size >= VAR_14)
  VAR_22->cap |= VAR_3;

 VAR_22->ampdu_factor = VAR_26->max_ht_ampdu_exponent;
 VAR_22->ampdu_density = VAR_13;

 VAR_22->mcs.rx_mask[0] = 0xFF;
 if (VAR_25 >= 2)
  VAR_22->mcs.rx_mask[1] = 0xFF;
 if (VAR_25 >= 3)
  VAR_22->mcs.rx_mask[2] = 0xFF;

 if (VAR_26->ht_params->ht_greenfield_support)
  VAR_22->cap |= VAR_1;
 VAR_22->cap |= VAR_5;

 VAR_27 = VAR_17;

 if (VAR_26->ht_params->ht40_bands & FUNC_0(VAR_23)) {
  VAR_22->cap |= VAR_7;
  VAR_22->cap |= VAR_6;
  VAR_27 = VAR_18;
 }


 VAR_27 *= VAR_25;
 FUNC_1(VAR_27 & ~VAR_9);
 VAR_22->mcs.rx_highest = FUNC_2(VAR_27);


 VAR_22->mcs.tx_params = VAR_10;
 if (VAR_24 != VAR_25) {
  VAR_22->mcs.tx_params |= VAR_12;
  VAR_22->mcs.tx_params |= ((VAR_24 - 1) <<
    VAR_11);
 }
}
