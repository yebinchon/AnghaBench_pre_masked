
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct mt76_wcid {int dummy; } ;
struct mt76_vif {struct mt76_wcid group_wcid; } ;
struct mt76_txwi {int dummy; } ;
struct mt76_sta {struct mt76_wcid wcid; } ;
struct mt7601u_dev {int hw; struct mt76_wcid* mon_wcid; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_4__ {void** status_driver_data; } ;
struct TYPE_3__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {TYPE_2__ status; TYPE_1__ control; } ;
struct ieee80211_tx_control {struct ieee80211_sta* sta; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;


 int FUNC_0 (void**) ;
 int FUNC_1 (int) ;
 struct ieee80211_tx_info* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct mt7601u_dev*,struct sk_buff*,struct mt76_wcid*,int) ;
 struct mt76_txwi* FUNC_5 (struct mt7601u_dev*,struct sk_buff*,struct ieee80211_sta*,struct mt76_wcid*,int) ;
 scalar_t__ FUNC_6 (struct mt7601u_dev*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct mt7601u_dev*,struct sk_buff*,struct mt76_sta*,struct mt76_txwi*) ;

void FUNC_10(struct ieee80211_hw *VAR_0, struct ieee80211_tx_control *VAR_1,
  struct sk_buff *VAR_2)
{
 struct ieee80211_tx_info *VAR_3 = FUNC_2(VAR_2);
 struct mt7601u_dev *VAR_4 = VAR_0->priv;
 struct ieee80211_vif *VAR_5 = VAR_3->control.vif;
 struct ieee80211_sta *VAR_6 = VAR_1->sta;
 struct mt76_sta *VAR_7 = ((void*)0);
 struct mt76_wcid *VAR_8 = VAR_4->mon_wcid;
 struct mt76_txwi *VAR_9;
 int VAR_10 = VAR_2->len;
 int VAR_11 = FUNC_8(VAR_2);

 FUNC_1(FUNC_0(VAR_3->status.status_driver_data) < 1);
 VAR_3->status.status_driver_data[0] = (void *)(unsigned long)VAR_10;

 if (FUNC_6(VAR_4, VAR_2) || FUNC_7(VAR_2)) {
  FUNC_3(VAR_4->hw, VAR_2);
  return;
 }

 if (VAR_6) {
  VAR_7 = (struct mt76_sta *) VAR_6->drv_priv;
  VAR_8 = &VAR_7->wcid;
 } else if (VAR_5) {
  struct mt76_vif *VAR_12 = (struct mt76_vif *)VAR_5->drv_priv;

  VAR_8 = &VAR_12->group_wcid;
 }

 VAR_9 = FUNC_5(VAR_4, VAR_2, VAR_6, VAR_8, VAR_10);

 if (FUNC_4(VAR_4, VAR_2, VAR_8, VAR_11))
  return;

 FUNC_9(VAR_4, VAR_2, VAR_7, VAR_9);
}
