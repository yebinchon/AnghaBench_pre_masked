
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_11__ {int sta_supp_rates; } ;
struct TYPE_7__ {size_t bcast_id; } ;
struct il_priv {TYPE_6__* stations; TYPE_5__ _3945; TYPE_1__ hw_params; struct ieee80211_hw* hw; } ;
struct il3945_rs_sta {int last_txrate_idx; int * win; scalar_t__ last_tx_packets; int flush_time; void* last_flush; void* last_partial_flush; int expected_tpt; int start_rate; struct il_priv* il; } ;
struct il3945_sta_priv {struct il3945_rs_sta rs_sta; } ;
struct ieee80211_supported_band {int n_bitrates; size_t band; } ;
struct ieee80211_sta {int* supp_rates; scalar_t__ drv_priv; } ;
struct TYPE_10__ {TYPE_3__* chan; } ;
struct ieee80211_conf {TYPE_4__ chandef; } ;
struct ieee80211_hw {TYPE_2__* wiphy; struct ieee80211_conf conf; } ;
struct TYPE_12__ {int used; } ;
struct TYPE_9__ {size_t band; } ;
struct TYPE_8__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 void* VAR_7 ;

void
FUNC_2(struct il_priv *VAR_8, struct ieee80211_sta *VAR_9, u8 VAR_10)
{
 struct ieee80211_hw *VAR_11 = VAR_8->hw;
 struct ieee80211_conf *VAR_12 = &VAR_8->hw->conf;
 struct il3945_sta_priv *VAR_13;
 struct il3945_rs_sta *VAR_14;
 struct ieee80211_supported_band *VAR_15;
 int VAR_16;

 FUNC_0("enter\n");
 if (VAR_10 == VAR_8->hw_params.bcast_id)
  goto out;

 VAR_13 = (struct il3945_sta_priv *)VAR_9->drv_priv;
 VAR_14 = &VAR_13->rs_sta;
 VAR_15 = VAR_11->wiphy->bands[VAR_12->chandef.chan->band];

 VAR_14->il = VAR_8;

 VAR_14->start_rate = VAR_5;


 VAR_14->expected_tpt = VAR_6;

 VAR_14->last_partial_flush = VAR_7;
 VAR_14->last_flush = VAR_7;
 VAR_14->flush_time = VAR_4;
 VAR_14->last_tx_packets = 0;

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++)
  FUNC_1(&VAR_14->win[VAR_16]);






 for (VAR_16 = VAR_15->n_bitrates - 1; VAR_16 >= 0; VAR_16--) {
  if (VAR_9->supp_rates[VAR_15->band] & (1 << VAR_16)) {
   VAR_14->last_txrate_idx = VAR_16;
   break;
  }
 }

 VAR_8->_3945.sta_supp_rates = VAR_9->supp_rates[VAR_15->band];

 if (VAR_15->band == VAR_2) {
  VAR_14->last_txrate_idx += VAR_0;
  VAR_8->_3945.sta_supp_rates <<= VAR_0;
 }

out:
 VAR_8->stations[VAR_10].used &= ~VAR_1;

 FUNC_0("leave\n");
}
