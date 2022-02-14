
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt76x02_vif {int idx; } ;
struct TYPE_2__ {int beacon_int; int mutex; } ;
struct mt76x02_dev {int slottime; TYPE_1__ mt76; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;
struct ieee80211_bss_conf {int beacon_int; scalar_t__ use_short_slot; int use_short_preamble; int enable_beacon; int ht_operation_mode; int use_cts_prot; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mt76x02_dev*,int ,int ,int) ;
 int FUNC_1 (struct mt76x02_dev*,struct ieee80211_vif*,int ) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct ieee80211_hw *VAR_9,
         struct ieee80211_vif *VAR_10,
         struct ieee80211_bss_conf *VAR_11,
         u32 VAR_12)
{
 struct mt76x02_vif *VAR_13 = (struct mt76x02_vif *)VAR_10->drv_priv;
 struct mt76x02_dev *VAR_14 = VAR_9->priv;

 FUNC_6(&VAR_14->mt76.mutex);

 if (VAR_12 & VAR_2)
  FUNC_2(VAR_14, VAR_13->idx, VAR_11->bssid);

 if (VAR_12 & VAR_6 || VAR_12 & VAR_3)
  FUNC_4(VAR_14, VAR_11->use_cts_prot,
           VAR_11->ht_operation_mode);

 if (VAR_12 & VAR_1) {
  FUNC_0(VAR_14, VAR_7,
          VAR_8,
          VAR_11->beacon_int << 4);
  VAR_14->mt76.beacon_int = VAR_11->beacon_int;
 }

 if (VAR_12 & VAR_0)
  FUNC_1(VAR_14, VAR_10, VAR_11->enable_beacon);

 if (VAR_12 & VAR_4)
  FUNC_3(VAR_14, VAR_11->use_short_preamble);

 if (VAR_12 & VAR_5) {
  int VAR_15 = VAR_11->use_short_slot ? 9 : 20;

  VAR_14->slottime = VAR_15;
  FUNC_5(VAR_14);
 }

 FUNC_7(&VAR_14->mt76.mutex);
}
