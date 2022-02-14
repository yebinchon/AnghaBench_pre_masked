
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


struct wiphy {int interface_modes; int flags; int reg_notifier; int n_iface_combinations; int iface_combinations; } ;
struct mt7615_vif {int dummy; } ;
struct mt7615_sta {int dummy; } ;
struct TYPE_8__ {int cap; } ;
struct TYPE_7__ {int cap; } ;
struct TYPE_12__ {TYPE_2__ vht_cap; TYPE_1__ ht_cap; } ;
struct TYPE_10__ {TYPE_6__ sband; } ;
struct TYPE_9__ {TYPE_6__ sband; } ;
struct TYPE_11__ {int chainmask; int antenna_mask; TYPE_4__ sband_5g; TYPE_3__ sband_2g; int mac_work; } ;
struct mt7615_dev {int dfs_state; TYPE_5__ mt76; } ;
struct ieee80211_hw {int queues; int max_rates; int max_report_rates; int max_rate_tries; int sta_data_size; int vif_data_size; int max_tx_fragments; struct wiphy* wiphy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int VAR_12 ;
 int FUNC_4 (struct mt7615_dev*) ;
 int FUNC_5 (struct mt7615_dev*) ;
 int FUNC_6 (struct mt7615_dev*,TYPE_6__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ieee80211_hw* FUNC_7 (struct mt7615_dev*) ;
 int FUNC_8 (TYPE_5__*,int,int ,int ) ;

int FUNC_9(struct mt7615_dev *VAR_16)
{
 struct ieee80211_hw *VAR_17 = FUNC_7(VAR_16);
 struct wiphy *VAR_18 = VAR_17->wiphy;
 int VAR_19;

 VAR_19 = FUNC_5(VAR_16);
 if (VAR_19)
  return VAR_19;

 FUNC_2(&VAR_16->mt76.mac_work, VAR_13);

 VAR_17->queues = 4;
 VAR_17->max_rates = 3;
 VAR_17->max_report_rates = 7;
 VAR_17->max_rate_tries = 11;

 VAR_17->sta_data_size = sizeof(struct mt7615_sta);
 VAR_17->vif_data_size = sizeof(struct mt7615_vif);

 VAR_18->iface_combinations = VAR_12;
 VAR_18->n_iface_combinations = FUNC_0(VAR_12);
 VAR_18->reg_notifier = VAR_15;
 VAR_18->flags |= VAR_11;

 FUNC_3(VAR_17, VAR_9);
 FUNC_3(VAR_17, VAR_10);

 VAR_16->mt76.sband_2g.sband.ht_cap.cap |= VAR_0;
 VAR_16->mt76.sband_5g.sband.ht_cap.cap |= VAR_0;
 VAR_16->mt76.sband_5g.sband.vht_cap.cap |=
   VAR_3 |
   VAR_2 |
   VAR_1 |
   VAR_4;
 VAR_16->mt76.chainmask = 0x404;
 VAR_16->mt76.antenna_mask = 0xf;
 VAR_16->dfs_state = -1;

 VAR_18->interface_modes = FUNC_1(VAR_8) |



     FUNC_1(VAR_6);

 VAR_19 = FUNC_8(&VAR_16->mt76, 1, VAR_14,
       FUNC_0(VAR_14));
 if (VAR_19)
  return VAR_19;

 FUNC_6(VAR_16, &VAR_16->mt76.sband_2g.sband);
 FUNC_6(VAR_16, &VAR_16->mt76.sband_5g.sband);

 VAR_17->max_tx_fragments = VAR_5;

 return FUNC_4(VAR_16);
}
