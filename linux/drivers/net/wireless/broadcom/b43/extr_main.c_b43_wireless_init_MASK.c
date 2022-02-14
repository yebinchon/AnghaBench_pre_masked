
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_sprom {int il0mac; int et1mac; } ;
struct ieee80211_hw {int max_rates; TYPE_1__* wiphy; } ;
struct b43_wl {int hw_registered; scalar_t__* tx_queue_stopped; int * tx_queue; int tx_work; int txpower_adjust_work; int beacon_update_trigger; int beacon_lock; int hardirq_lock; int mutex; struct ieee80211_hw* hw; } ;
struct b43_bus_dev {int chip_id; int core_rev; int dev; struct ssb_sprom* bus_sprom; } ;
struct TYPE_2__ {int interface_modes; int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct b43_wl* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ieee80211_hw*,int ) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct b43_wl*,char*,char*,int ) ;
 struct b43_wl* FUNC_8 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_9 (int,int *) ;
 int FUNC_10 (struct ieee80211_hw*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int ,char*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*,int ) ;

__attribute__((used)) static struct b43_wl *FUNC_17(struct b43_bus_dev *VAR_15)
{
 struct ssb_sprom *VAR_16 = VAR_15->bus_sprom;
 struct ieee80211_hw *VAR_17;
 struct b43_wl *VAR_18;
 char VAR_19[6];
 int VAR_20;

 VAR_17 = FUNC_9(sizeof(*VAR_18), &VAR_12);
 if (!VAR_17) {
  FUNC_6(((void*)0), "Could not allocate ieee80211 device\n");
  return FUNC_2(-VAR_1);
 }
 VAR_18 = FUNC_8(VAR_17);


 FUNC_10(VAR_17, VAR_8);
 FUNC_10(VAR_17, VAR_9);

 VAR_17->wiphy->interface_modes =
  FUNC_1(VAR_4) |
  FUNC_1(VAR_5) |
  FUNC_1(VAR_6) |



  FUNC_1(VAR_3);

 VAR_17->wiphy->flags |= VAR_10;

 FUNC_16(VAR_17->wiphy, VAR_2);

 VAR_18->hw_registered = 0;
 VAR_17->max_rates = 2;
 FUNC_4(VAR_17, VAR_15->dev);
 if (FUNC_11(VAR_16->et1mac))
  FUNC_5(VAR_17, VAR_16->et1mac);
 else
  FUNC_5(VAR_17, VAR_16->il0mac);


 VAR_18->hw = VAR_17;
 FUNC_12(&VAR_18->mutex);
 FUNC_15(&VAR_18->hardirq_lock);
 FUNC_15(&VAR_18->beacon_lock);
 FUNC_3(&VAR_18->beacon_update_trigger, VAR_11);
 FUNC_3(&VAR_18->txpower_adjust_work, VAR_13);
 FUNC_3(&VAR_18->tx_work, VAR_14);


 for (VAR_20 = 0; VAR_20 < VAR_0; VAR_20++) {
  FUNC_13(&VAR_18->tx_queue[VAR_20]);
  VAR_18->tx_queue_stopped[VAR_20] = 0;
 }

 FUNC_14(VAR_19, FUNC_0(VAR_19),
   (VAR_15->chip_id > 0x9999) ? "%d" : "%04X", VAR_15->chip_id);
 FUNC_7(VAR_18, "Broadcom %s WLAN found (core revision %u)\n", VAR_19,
  VAR_15->core_rev);
 return VAR_18;
}
