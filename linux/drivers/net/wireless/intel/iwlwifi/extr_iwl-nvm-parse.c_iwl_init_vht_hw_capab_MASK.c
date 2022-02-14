
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct iwl_trans {TYPE_2__* trans_cfg; struct iwl_cfg* cfg; } ;
struct iwl_nvm_data {scalar_t__ sku_cap_mimo_disabled; scalar_t__ vht160_supported; } ;
struct iwl_cfg {scalar_t__ rx_with_siso_diversity; TYPE_1__* ht_params; scalar_t__ vht_mu_mimo_supported; scalar_t__ max_vht_ampdu_exponent; } ;
struct TYPE_7__ {int tx_highest; int rx_mcs_map; int tx_mcs_map; } ;
struct ieee80211_sta_vht_cap {int vht_supported; int cap; TYPE_3__ vht_mcs; } ;
struct TYPE_8__ {int amsdu_size; } ;
struct TYPE_6__ {int mq_rx_supported; } ;
struct TYPE_5__ {scalar_t__ ldpc; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
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
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;





 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 TYPE_4__ VAR_19 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct iwl_trans *VAR_20,
      struct iwl_nvm_data *VAR_21,
      struct ieee80211_sta_vht_cap *VAR_22,
      u8 VAR_23, u8 VAR_24)
{
 const struct iwl_cfg *VAR_25 = VAR_20->cfg;
 int VAR_26 = FUNC_2(VAR_24);
 int VAR_27 = FUNC_2(VAR_23);
 unsigned int VAR_28 = (VAR_25->max_vht_ampdu_exponent ?:
        VAR_16);

 VAR_22->vht_supported = 1;

 VAR_22->cap = VAR_10 |
         VAR_7 |
         VAR_12 |
         3 << VAR_0 |
         VAR_28 <<
         VAR_1;

 if (VAR_21->vht160_supported)
  VAR_22->cap |= VAR_11 |
    VAR_9;

 if (VAR_25->vht_mu_mimo_supported)
  VAR_22->cap |= VAR_5;

 if (VAR_25->ht_params->ldpc)
  VAR_22->cap |= VAR_6;

 if (VAR_21->sku_cap_mimo_disabled) {
  VAR_26 = 1;
  VAR_27 = 1;
 }

 if (VAR_27 > 1)
  VAR_22->cap |= VAR_13;
 else
  VAR_22->cap |= VAR_14;

 switch (VAR_19.amsdu_size) {
 case 128:
  if (VAR_20->trans_cfg->mq_rx_supported)
   VAR_22->cap |=
    VAR_2;
  else
   VAR_22->cap |= VAR_3;
  break;
 case 131:
  if (VAR_20->trans_cfg->mq_rx_supported)
   VAR_22->cap |=
    VAR_2;
  else
   FUNC_0(1, "RB size of 2K is not supported by this device\n");
  break;
 case 130:
  VAR_22->cap |= VAR_3;
  break;
 case 129:
  VAR_22->cap |= VAR_4;
  break;
 case 132:
  VAR_22->cap |= VAR_2;
  break;
 default:
  break;
 }

 VAR_22->vht_mcs.rx_mcs_map =
  FUNC_1(VAR_18 << 0 |
       VAR_18 << 2 |
       VAR_17 << 4 |
       VAR_17 << 6 |
       VAR_17 << 8 |
       VAR_17 << 10 |
       VAR_17 << 12 |
       VAR_17 << 14);

 if (VAR_26 == 1 || VAR_25->rx_with_siso_diversity) {
  VAR_22->cap |= VAR_8;

  VAR_22->vht_mcs.rx_mcs_map |=
   FUNC_1(VAR_17 << 2);
 }

 VAR_22->vht_mcs.tx_mcs_map = VAR_22->vht_mcs.rx_mcs_map;

 VAR_22->vht_mcs.tx_highest |=
  FUNC_1(VAR_15);
}
