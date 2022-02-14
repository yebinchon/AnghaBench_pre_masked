
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p54_tx_data {int dummy; } ;
struct p54_hdr {int dummy; } ;
struct p54_common {int basic_rate_mask; int noise; int * curchan; int * mc_maclist; int work; int beacon_comp; int eeprom_comp; int stat_comp; int eeprom_mutex; int conf_mutex; TYPE_1__* tx_stats; int beacon_req_id; int tx_pending; int tx_queue; int tx_stats_lock; int mode; struct ieee80211_hw* hw; } ;
struct ieee80211_hw {int queues; int max_rates; int max_rate_tries; int extra_tx_headroom; TYPE_2__* wiphy; struct p54_common* priv; } ;
struct TYPE_4__ {int interface_modes; int flags; } ;
struct TYPE_3__ {int limit; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ieee80211_hw* FUNC_4 (size_t,int *) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_17 ;
 int FUNC_8 (struct p54_common*) ;
 int VAR_18 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct ieee80211_hw *FUNC_11(size_t VAR_19)
{
 struct ieee80211_hw *VAR_20;
 struct p54_common *VAR_21;

 VAR_20 = FUNC_4(VAR_19, &VAR_17);
 if (!VAR_20)
  return ((void*)0);

 VAR_21 = VAR_20->priv;
 VAR_21->hw = VAR_20;
 VAR_21->mode = VAR_5;
 VAR_21->basic_rate_mask = 0x15f;
 FUNC_10(&VAR_21->tx_stats_lock);
 FUNC_9(&VAR_21->tx_queue);
 FUNC_9(&VAR_21->tx_pending);
 FUNC_5(VAR_20, VAR_12);
 FUNC_5(VAR_20, VAR_0);
 FUNC_5(VAR_20, VAR_11);
 FUNC_5(VAR_20, VAR_15);
 FUNC_5(VAR_20, VAR_13);
 FUNC_5(VAR_20, VAR_14);

 VAR_20->wiphy->interface_modes = FUNC_0(VAR_4) |
          FUNC_0(VAR_1) |
          FUNC_0(VAR_2) |
          FUNC_0(VAR_3);

 VAR_21->beacon_req_id = FUNC_2(0);
 VAR_21->tx_stats[VAR_6].limit = 1;
 VAR_21->tx_stats[VAR_9].limit = 1;
 VAR_21->tx_stats[VAR_10].limit = 3;
 VAR_21->tx_stats[VAR_7].limit = 3;
 VAR_21->tx_stats[VAR_8].limit = 5;
 VAR_20->queues = 1;
 VAR_21->noise = -94;
 VAR_20->max_rates = 4;
 VAR_20->max_rate_tries = 7;
 VAR_20->extra_tx_headroom = sizeof(struct p54_hdr) + 4 +
     sizeof(struct p54_tx_data);





 VAR_20->wiphy->flags &= ~VAR_16;

 FUNC_7(&VAR_21->conf_mutex);
 FUNC_7(&VAR_21->eeprom_mutex);
 FUNC_6(&VAR_21->stat_comp);
 FUNC_6(&VAR_21->eeprom_comp);
 FUNC_6(&VAR_21->beacon_comp);
 FUNC_1(&VAR_21->work, VAR_18);

 FUNC_3(VAR_21->mc_maclist[0]);
 VAR_21->curchan = ((void*)0);
 FUNC_8(VAR_21);
 return VAR_20;
}
