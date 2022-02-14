
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wiphy {int interface_modes; int reg_notifier; int flags; int n_iface_combinations; int iface_combinations; } ;
struct mt76_bus_ops {int rmw; int wr; int rr; } ;
struct mt7603_vif {int dummy; } ;
struct mt7603_sta {int dummy; } ;
struct TYPE_5__ {int sband; } ;
struct TYPE_4__ {int blink_set; int brightness_set; } ;
struct TYPE_6__ {int antenna_mask; TYPE_2__ sband_2g; TYPE_1__ led_cdev; int pre_tbtt_tasklet; int mac_work; struct mt76_bus_ops* bus; int dev; } ;
struct mt7603_dev {int slottime; TYPE_3__ mt76; int ps_lock; struct mt76_bus_ops* bus_ops; } ;
struct ieee80211_hw {int queues; int max_rates; int max_report_rates; int max_rate_tries; int sta_data_size; int vif_data_size; struct wiphy* wiphy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct mt76_bus_ops* FUNC_4 (int ,struct mt76_bus_ops*,int,int ) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int VAR_11 ;
 int FUNC_6 (struct mt7603_dev*) ;
 int FUNC_7 (struct mt7603_dev*) ;
 int FUNC_8 (struct mt7603_dev*,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct ieee80211_hw* FUNC_9 (struct mt7603_dev*) ;
 int FUNC_10 (TYPE_3__*,int,int ,int ) ;
 int FUNC_11 (struct mt7603_dev*,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,unsigned long) ;

int FUNC_14(struct mt7603_dev *VAR_21)
{
 struct mt76_bus_ops *VAR_22;
 struct ieee80211_hw *VAR_23 = FUNC_9(VAR_21);
 struct wiphy *VAR_24 = VAR_23->wiphy;
 int VAR_25;

 VAR_21->bus_ops = VAR_21->mt76.bus;
 VAR_22 = FUNC_4(VAR_21->mt76.dev, VAR_21->bus_ops, sizeof(*VAR_22),
          VAR_2);
 if (!VAR_22)
  return -VAR_1;

 VAR_22->rr = VAR_19;
 VAR_22->wr = VAR_20;
 VAR_22->rmw = VAR_18;
 VAR_21->mt76.bus = VAR_22;

 FUNC_12(&VAR_21->ps_lock);

 FUNC_2(&VAR_21->mt76.mac_work, VAR_14);
 FUNC_13(&VAR_21->mt76.pre_tbtt_tasklet, VAR_15,
       (unsigned long)VAR_21);


 VAR_21->mt76.antenna_mask = 3;
 if (FUNC_11(VAR_21, VAR_3 + 0x64) & FUNC_1(4))
  VAR_21->mt76.antenna_mask = 1;

 VAR_21->slottime = 9;

 VAR_25 = FUNC_7(VAR_21);
 if (VAR_25)
  return VAR_25;

 VAR_23->queues = 4;
 VAR_23->max_rates = 3;
 VAR_23->max_report_rates = 7;
 VAR_23->max_rate_tries = 11;

 VAR_23->sta_data_size = sizeof(struct mt7603_sta);
 VAR_23->vif_data_size = sizeof(struct mt7603_vif);

 VAR_24->iface_combinations = VAR_11;
 VAR_24->n_iface_combinations = FUNC_0(VAR_11);

 FUNC_5(VAR_23, VAR_8);
 FUNC_5(VAR_23, VAR_9);


 if (FUNC_3(VAR_0)) {
  VAR_21->mt76.led_cdev.brightness_set = VAR_13;
  VAR_21->mt76.led_cdev.blink_set = VAR_12;
 }

 VAR_24->interface_modes =
  FUNC_1(VAR_7) |
  FUNC_1(VAR_5) |



  FUNC_1(VAR_4);

 VAR_24->flags |= VAR_10;

 VAR_24->reg_notifier = VAR_17;

 VAR_25 = FUNC_10(&VAR_21->mt76, 1, VAR_16,
       FUNC_0(VAR_16));
 if (VAR_25)
  return VAR_25;

 FUNC_6(VAR_21);
 FUNC_8(VAR_21, &VAR_21->mt76.sband_2g.sband);

 return 0;
}
