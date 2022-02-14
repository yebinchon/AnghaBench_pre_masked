
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int interface_modes; int features; } ;
struct mt76_vif {int dummy; } ;
struct mt76_sta {int dummy; } ;
struct mt7601u_dev {int* wcid_mask; int stat_work; int mac_work; int macaddr; int dev; TYPE_1__* mon_wcid; struct ieee80211_hw* hw; } ;
struct ieee80211_hw {int queues; int max_rates; int max_report_rates; int max_rate_tries; int sta_data_size; int vif_data_size; struct wiphy* wiphy; } ;
struct TYPE_2__ {int idx; int hw_key_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct mt7601u_dev*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct mt7601u_dev*) ;
 int FUNC_9 (struct wiphy*,int ) ;

int FUNC_10(struct mt7601u_dev *VAR_13)
{
 struct ieee80211_hw *VAR_14 = VAR_13->hw;
 struct wiphy *VAR_15 = VAR_14->wiphy;
 int VAR_16;




 VAR_13->wcid_mask[0] |= 1;


 VAR_13->mon_wcid = FUNC_4(VAR_13->dev, sizeof(*VAR_13->mon_wcid),
         VAR_2);
 if (!VAR_13->mon_wcid)
  return -VAR_1;
 VAR_13->mon_wcid->idx = 0xff;
 VAR_13->mon_wcid->hw_key_idx = -1;

 FUNC_2(VAR_14, VAR_13->dev);

 VAR_14->queues = 4;
 FUNC_5(VAR_14, VAR_8);
 FUNC_5(VAR_14, VAR_7);
 FUNC_5(VAR_14, VAR_9);
 FUNC_5(VAR_14, VAR_0);
 FUNC_5(VAR_14, VAR_10);
 FUNC_5(VAR_14, VAR_3);
 VAR_14->max_rates = 1;
 VAR_14->max_report_rates = 7;
 VAR_14->max_rate_tries = 1;

 VAR_14->sta_data_size = sizeof(struct mt76_sta);
 VAR_14->vif_data_size = sizeof(struct mt76_vif);

 FUNC_3(VAR_14, VAR_13->macaddr);

 VAR_15->features |= VAR_5;
 VAR_15->interface_modes = FUNC_0(VAR_6);

 FUNC_9(VAR_15, VAR_4);

 VAR_16 = FUNC_8(VAR_13);
 if (VAR_16)
  return VAR_16;

 FUNC_1(&VAR_13->mac_work, VAR_11);
 FUNC_1(&VAR_13->stat_work, VAR_12);

 VAR_16 = FUNC_6(VAR_14);
 if (VAR_16)
  return VAR_16;

 FUNC_7(VAR_13);

 return 0;
}
