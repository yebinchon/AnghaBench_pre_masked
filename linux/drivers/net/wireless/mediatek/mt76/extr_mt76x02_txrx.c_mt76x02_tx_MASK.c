
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mt76_wcid {int dummy; } ;
struct mt76x02_vif {struct mt76_wcid group_wcid; } ;
struct mt76x02_sta {struct mt76_wcid wcid; } ;
struct TYPE_5__ {struct mt76_wcid global_wcid; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_4__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_tx_control {TYPE_3__* sta; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;
struct TYPE_6__ {scalar_t__ drv_priv; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,struct mt76_wcid*,struct sk_buff*) ;

void FUNC_2(struct ieee80211_hw *VAR_0, struct ieee80211_tx_control *VAR_1,
  struct sk_buff *VAR_2)
{
 struct ieee80211_tx_info *VAR_3 = FUNC_0(VAR_2);
 struct mt76x02_dev *VAR_4 = VAR_0->priv;
 struct ieee80211_vif *VAR_5 = VAR_3->control.vif;
 struct mt76_wcid *VAR_6 = &VAR_4->mt76.global_wcid;

 if (VAR_1->sta) {
  struct mt76x02_sta *VAR_7;

  VAR_7 = (struct mt76x02_sta *)VAR_1->sta->drv_priv;
  VAR_6 = &VAR_7->wcid;
 } else if (VAR_5) {
  struct mt76x02_vif *VAR_8;

  VAR_8 = (struct mt76x02_vif *)VAR_5->drv_priv;
  VAR_6 = &VAR_8->group_wcid;
 }

 FUNC_1(&VAR_4->mt76, VAR_1->sta, VAR_6, VAR_2);
}
