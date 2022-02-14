
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mt76_wcid {int dummy; } ;
struct TYPE_6__ {struct mt76_wcid wcid; } ;
struct mt7615_vif {TYPE_2__ sta; } ;
struct mt7615_sta {struct mt76_wcid wcid; } ;
struct TYPE_7__ {struct mt76_wcid global_wcid; } ;
struct mt7615_dev {TYPE_3__ mt76; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_5__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_tx_control {TYPE_4__* sta; } ;
struct ieee80211_hw {struct mt7615_dev* priv; } ;
struct TYPE_8__ {scalar_t__ drv_priv; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,struct mt76_wcid*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
        struct ieee80211_tx_control *VAR_1,
        struct sk_buff *VAR_2)
{
 struct mt7615_dev *VAR_3 = VAR_0->priv;
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_2);
 struct ieee80211_vif *VAR_5 = VAR_4->control.vif;
 struct mt76_wcid *VAR_6 = &VAR_3->mt76.global_wcid;

 if (VAR_1->sta) {
  struct mt7615_sta *VAR_7;

  VAR_7 = (struct mt7615_sta *)VAR_1->sta->drv_priv;
  VAR_6 = &VAR_7->wcid;
 }

 if (VAR_5 && !VAR_1->sta) {
  struct mt7615_vif *VAR_8;

  VAR_8 = (struct mt7615_vif *)VAR_5->drv_priv;
  VAR_6 = &VAR_8->sta.wcid;
 }

 FUNC_1(&VAR_3->mt76, VAR_1->sta, VAR_6, VAR_2);
}
