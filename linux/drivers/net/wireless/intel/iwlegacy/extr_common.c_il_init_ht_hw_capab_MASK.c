
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int rx_chains_num; int tx_chains_num; int ht40_channel; } ;
struct il_priv {TYPE_3__* cfg; TYPE_1__ hw_params; } ;
struct TYPE_8__ {int* rx_mask; int tx_params; int rx_highest; } ;
struct ieee80211_sta_ht_cap {int ht_supported; TYPE_4__ mcs; int ampdu_density; int ampdu_factor; int cap; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_7__ {TYPE_2__* mod_params; } ;
struct TYPE_6__ {scalar_t__ amsdu_size_8K; } ;


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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void
FUNC_4(const struct il_priv *VAR_12,
      struct ieee80211_sta_ht_cap *VAR_13,
      enum nl80211_band VAR_14)
{
 u16 VAR_15 = 0;
 u8 VAR_16 = VAR_12->hw_params.rx_chains_num;
 u8 VAR_17 = VAR_12->hw_params.tx_chains_num;

 VAR_13->cap = 0;
 FUNC_3(&VAR_13->mcs, 0, sizeof(VAR_13->mcs));

 VAR_13->ht_supported = 1;

 VAR_13->cap |= VAR_3;
 VAR_15 = VAR_10;
 if (VAR_12->hw_params.ht40_channel & FUNC_0(VAR_14)) {
  VAR_13->cap |= VAR_5;
  VAR_13->cap |= VAR_4;
  VAR_13->mcs.rx_mask[4] = 0x01;
  VAR_15 = VAR_11;
 }

 if (VAR_12->cfg->mod_params->amsdu_size_8K)
  VAR_13->cap |= VAR_2;

 VAR_13->ampdu_factor = VAR_1;
 VAR_13->ampdu_density = VAR_0;

 VAR_13->mcs.rx_mask[0] = 0xFF;
 if (VAR_16 >= 2)
  VAR_13->mcs.rx_mask[1] = 0xFF;
 if (VAR_16 >= 3)
  VAR_13->mcs.rx_mask[2] = 0xFF;


 VAR_15 *= VAR_16;
 FUNC_1(VAR_15 & ~VAR_6);
 VAR_13->mcs.rx_highest = FUNC_2(VAR_15);


 VAR_13->mcs.tx_params = VAR_7;
 if (VAR_17 != VAR_16) {
  VAR_13->mcs.tx_params |= VAR_9;
  VAR_13->mcs.tx_params |=
      ((VAR_17 -
        1) << VAR_8);
 }
}
