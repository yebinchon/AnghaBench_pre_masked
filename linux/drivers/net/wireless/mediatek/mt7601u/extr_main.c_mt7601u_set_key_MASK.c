
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_wcid {int hw_key_idx; int idx; } ;
struct mt76_vif {int idx; struct mt76_wcid group_wcid; } ;
struct mt76_sta {struct mt76_wcid wcid; } ;
struct mt7601u_dev {int dummy; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {int keyidx; int cipher; int hw_key_idx; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct mt7601u_dev*,int ,int,struct ieee80211_key_conf*) ;
 int FUNC_1 (struct mt7601u_dev*,int ,struct ieee80211_key_conf*) ;

__attribute__((used)) static int
FUNC_2(struct ieee80211_hw *VAR_2, enum set_key_cmd VAR_3,
  struct ieee80211_vif *VAR_4, struct ieee80211_sta *VAR_5,
  struct ieee80211_key_conf *VAR_6)
{
 struct mt7601u_dev *VAR_7 = VAR_2->priv;
 struct mt76_vif *VAR_8 = (struct mt76_vif *) VAR_4->drv_priv;
 struct mt76_sta *VAR_9 = VAR_5 ? (struct mt76_sta *) VAR_5->drv_priv : ((void*)0);
 struct mt76_wcid *VAR_10 = VAR_9 ? &VAR_9->wcid : &VAR_8->group_wcid;
 int VAR_11 = VAR_6->keyidx;
 int VAR_12;


 switch (VAR_6->cipher) {
 case 128:
 case 129:
 case 130:
 case 131:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_3 == VAR_1) {
  VAR_6->hw_key_idx = VAR_10->idx;
  VAR_10->hw_key_idx = VAR_11;
 } else {
  if (VAR_11 == VAR_10->hw_key_idx)
   VAR_10->hw_key_idx = -1;

  VAR_6 = ((void*)0);
 }

 if (!VAR_9) {
  if (VAR_6 || VAR_10->hw_key_idx == VAR_11) {
   VAR_12 = FUNC_1(VAR_7, VAR_10->idx, VAR_6);
   if (VAR_12)
    return VAR_12;
  }

  return FUNC_0(VAR_7, VAR_8->idx, VAR_11, VAR_6);
 }

 return FUNC_1(VAR_7, VAR_9->wcid.idx, VAR_6);
}
