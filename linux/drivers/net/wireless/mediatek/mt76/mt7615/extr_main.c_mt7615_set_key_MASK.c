
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_wcid {int hw_key_idx; int idx; } ;
struct mt7615_sta {struct mt76_wcid wcid; } ;
struct mt7615_vif {struct mt7615_sta sta; } ;
struct mt7615_dev {int mt76; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {int keyidx; int cipher; int flags; int hw_key_idx; } ;
struct ieee80211_hw {struct mt7615_dev* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mt7615_dev*,struct mt76_wcid*,struct ieee80211_key_conf*,int) ;
 int FUNC_1 (int *,struct mt76_wcid*,struct ieee80211_key_conf*) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_6, enum set_key_cmd VAR_7,
     struct ieee80211_vif *VAR_8, struct ieee80211_sta *VAR_9,
     struct ieee80211_key_conf *VAR_10)
{
 struct mt7615_dev *VAR_11 = VAR_6->priv;
 struct mt7615_vif *VAR_12 = (struct mt7615_vif *)VAR_8->drv_priv;
 struct mt7615_sta *VAR_13 = VAR_9 ? (struct mt7615_sta *)VAR_9->drv_priv :
      &VAR_12->sta;
 struct mt76_wcid *VAR_14 = &VAR_13->wcid;
 int VAR_15 = VAR_10->keyidx;




 if ((VAR_8->type == VAR_3 ||
      VAR_8->type == VAR_4) &&
     (VAR_10->cipher == 130 ||
      VAR_10->cipher == 135) &&
     !(VAR_10->flags & VAR_2))
  return -VAR_0;


 switch (VAR_10->cipher) {
 case 136:
  VAR_10->flags |= VAR_1;
  break;
 case 128:
 case 129:
 case 130:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_7 == VAR_5) {
  VAR_10->hw_key_idx = VAR_14->idx;
  VAR_14->hw_key_idx = VAR_15;
 } else if (VAR_15 == VAR_14->hw_key_idx) {
  VAR_14->hw_key_idx = -1;
 }
 FUNC_1(&VAR_11->mt76, VAR_14,
       VAR_7 == VAR_5 ? VAR_10 : ((void*)0));

 return FUNC_0(VAR_11, VAR_14, VAR_10, VAR_7);
}
