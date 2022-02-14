
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct wiphy {int interface_modes; int flags; void* n_iface_combinations; void* iface_combinations; int reg_notifier; } ;
struct mt76x02_vif {int dummy; } ;
struct mt76x02_txwi {int dummy; } ;
struct mt76x02_sta {int dummy; } ;
struct TYPE_15__ {int cap; } ;
struct TYPE_16__ {TYPE_6__ ht_cap; } ;
struct TYPE_17__ {TYPE_7__ sband; } ;
struct TYPE_12__ {int cap; } ;
struct TYPE_13__ {TYPE_3__ ht_cap; } ;
struct TYPE_14__ {TYPE_4__ sband; } ;
struct TYPE_11__ {int idx; int hw_key_idx; } ;
struct TYPE_10__ {int blink_set; int brightness_set; } ;
struct TYPE_18__ {int chainmask; int antenna_mask; TYPE_8__ sband_5g; TYPE_5__ sband_2g; TYPE_2__ global_wcid; TYPE_1__ led_cdev; int mac_work; } ;
struct mt76x02_dev {int slottime; TYPE_9__ mt76; int wdt_work; } ;
struct ieee80211_hw {int queues; int max_rates; int max_report_rates; int max_rate_tries; int extra_tx_headroom; int sta_data_size; int vif_data_size; struct wiphy* wiphy; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct ieee80211_hw*,int ) ;
 scalar_t__ FUNC_5 (struct mt76x02_dev*) ;
 struct ieee80211_hw* FUNC_6 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_7 (struct mt76x02_dev*) ;
 int FUNC_8 (struct mt76x02_dev*) ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_9 (struct wiphy*,int ) ;

void FUNC_10(struct mt76x02_dev *VAR_18)
{
 struct ieee80211_hw *VAR_19 = FUNC_6(VAR_18);
 struct wiphy *VAR_20 = VAR_19->wiphy;

 FUNC_2(&VAR_18->mt76.mac_work, VAR_14);

 VAR_19->queues = 4;
 VAR_19->max_rates = 1;
 VAR_19->max_report_rates = 7;
 VAR_19->max_rate_tries = 1;
 VAR_19->extra_tx_headroom = 2;

 VAR_20->interface_modes =
  FUNC_1(VAR_7) |
  FUNC_1(VAR_5) |



  FUNC_1(VAR_4);

 if (FUNC_7(VAR_18)) {
  VAR_19->extra_tx_headroom += sizeof(struct mt76x02_txwi) +
      VAR_2;
  VAR_20->iface_combinations = VAR_17;
  VAR_20->n_iface_combinations = FUNC_0(VAR_17);
 } else {
  FUNC_2(&VAR_18->wdt_work, VAR_16);

  FUNC_8(VAR_18);

  VAR_20->reg_notifier = VAR_15;
  VAR_20->iface_combinations = VAR_11;
  VAR_20->n_iface_combinations = FUNC_0(VAR_11);
  VAR_20->flags |= VAR_10;


  if (FUNC_3(VAR_0)) {
   VAR_18->mt76.led_cdev.brightness_set =
     VAR_13;
   VAR_18->mt76.led_cdev.blink_set = VAR_12;
  }
 }

 FUNC_9(VAR_20, VAR_3);

 VAR_19->sta_data_size = sizeof(struct mt76x02_sta);
 VAR_19->vif_data_size = sizeof(struct mt76x02_vif);

 FUNC_4(VAR_19, VAR_8);
 FUNC_4(VAR_19, VAR_9);

 VAR_18->mt76.global_wcid.idx = 255;
 VAR_18->mt76.global_wcid.hw_key_idx = -1;
 VAR_18->slottime = 9;

 if (FUNC_5(VAR_18)) {
  VAR_18->mt76.sband_2g.sband.ht_cap.cap |=
    VAR_1;
  VAR_18->mt76.sband_5g.sband.ht_cap.cap |=
    VAR_1;
  VAR_18->mt76.chainmask = 0x202;
  VAR_18->mt76.antenna_mask = 3;
 } else {
  VAR_18->mt76.chainmask = 0x101;
  VAR_18->mt76.antenna_mask = 1;
 }
}
