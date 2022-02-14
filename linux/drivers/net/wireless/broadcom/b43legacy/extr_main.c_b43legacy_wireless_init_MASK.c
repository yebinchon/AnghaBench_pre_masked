
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ssb_sprom {int il0mac; int et1mac; } ;
struct TYPE_4__ {int revision; } ;
struct ssb_device {TYPE_1__ id; TYPE_3__* bus; int dev; } ;
struct ieee80211_hw {int queues; int max_rates; TYPE_2__* wiphy; } ;
struct b43legacy_wl {scalar_t__* tx_queue_stopped; int * tx_queue; int tx_work; int beacon_update_trigger; int devlist; int mutex; int leds_lock; int irq_lock; struct ieee80211_hw* hw; } ;
struct TYPE_6__ {int chip_id; struct ssb_sprom sprom; } ;
struct TYPE_5__ {int interface_modes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_11 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct b43legacy_wl*,char*,int ,int ) ;
 struct b43legacy_wl* FUNC_8 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_9 (int,int *) ;
 int FUNC_10 (struct ieee80211_hw*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct b43legacy_wl*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ssb_device*,struct b43legacy_wl*) ;
 int FUNC_17 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_18(struct ssb_device *VAR_12)
{
 struct ssb_sprom *VAR_13 = &VAR_12->bus->sprom;
 struct ieee80211_hw *VAR_14;
 struct b43legacy_wl *VAR_15;
 int VAR_16 = -VAR_1;
 int VAR_17;

 FUNC_5(VAR_12->bus);

 VAR_14 = FUNC_9(sizeof(*VAR_15), &VAR_10);
 if (!VAR_14) {
  FUNC_6(((void*)0), "Could not allocate ieee80211 device\n");
  goto out;
 }


 FUNC_10(VAR_14, VAR_7);
 FUNC_10(VAR_14, VAR_8);

 VAR_14->wiphy->interface_modes =
  FUNC_0(VAR_4) |
  FUNC_0(VAR_5) |



  FUNC_0(VAR_3);
 VAR_14->queues = 1;
 VAR_14->max_rates = 2;
 FUNC_3(VAR_14, VAR_12->dev);
 if (FUNC_11(VAR_13->et1mac))
  FUNC_4(VAR_14, VAR_13->et1mac);
 else
  FUNC_4(VAR_14, VAR_13->il0mac);

 FUNC_17(VAR_14->wiphy, VAR_2);


 VAR_15 = FUNC_8(VAR_14);
 FUNC_12(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->hw = VAR_14;
 FUNC_15(&VAR_15->irq_lock);
 FUNC_15(&VAR_15->leds_lock);
 FUNC_13(&VAR_15->mutex);
 FUNC_1(&VAR_15->devlist);
 FUNC_2(&VAR_15->beacon_update_trigger, VAR_9);
 FUNC_2(&VAR_15->tx_work, VAR_11);


 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  FUNC_14(&VAR_15->tx_queue[VAR_17]);
  VAR_15->tx_queue_stopped[VAR_17] = 0;
 }

 FUNC_16(VAR_12, VAR_15);
 FUNC_7(VAR_15, "Broadcom %04X WLAN found (core revision %u)\n",
        VAR_12->bus->chip_id, VAR_12->id.revision);
 VAR_16 = 0;
out:
 return VAR_16;
}
