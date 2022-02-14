
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_wcid {int hw_key_idx; int sw_iv; int idx; } ;
struct mt76x02_vif {int idx; struct mt76_wcid group_wcid; } ;
struct mt76x02_sta {struct mt76_wcid wcid; } ;
struct mt76x02_dev {int mt76; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {int keyidx; int cipher; int flags; int hw_key_idx; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;




 scalar_t__ FUNC_0 (struct mt76x02_dev*) ;
 int FUNC_1 (int *,struct mt76_wcid*,struct ieee80211_key_conf*) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int,struct ieee80211_key_conf*) ;
 int FUNC_3 (struct mt76x02_dev*,int ,struct ieee80211_key_conf*) ;

int FUNC_4(struct ieee80211_hw *VAR_8, enum set_key_cmd VAR_9,
      struct ieee80211_vif *VAR_10, struct ieee80211_sta *VAR_11,
      struct ieee80211_key_conf *VAR_12)
{
 struct mt76x02_dev *VAR_13 = VAR_8->priv;
 struct mt76x02_vif *VAR_14 = (struct mt76x02_vif *)VAR_10->drv_priv;
 struct mt76x02_sta *VAR_15;
 struct mt76_wcid *VAR_16;
 int VAR_17 = VAR_12->keyidx;
 int VAR_18;


 switch (VAR_12->cipher) {
 case 128:
 case 129:
 case 130:
 case 131:
  break;
 default:
  return -VAR_0;
 }





 if ((VAR_10->type == VAR_4 ||
      VAR_10->type == VAR_6) &&
     (VAR_12->cipher == 130 ||
      VAR_12->cipher == 131) &&
     !(VAR_12->flags & VAR_1))
  return -VAR_0;






 if (FUNC_0(VAR_13) &&
     VAR_10->type == VAR_5 &&
     !(VAR_12->flags & VAR_1))
  return -VAR_0;

 VAR_15 = VAR_11 ? (struct mt76x02_sta *)VAR_11->drv_priv : ((void*)0);
 VAR_16 = VAR_15 ? &VAR_15->wcid : &VAR_14->group_wcid;

 if (VAR_9 == VAR_7) {
  VAR_12->hw_key_idx = VAR_16->idx;
  VAR_16->hw_key_idx = VAR_17;
  if (VAR_12->flags & VAR_2) {
   VAR_12->flags |= VAR_3;
   VAR_16->sw_iv = 1;
  }
 } else {
  if (VAR_17 == VAR_16->hw_key_idx) {
   VAR_16->hw_key_idx = -1;
   VAR_16->sw_iv = 0;
  }

  VAR_12 = ((void*)0);
 }
 FUNC_1(&VAR_13->mt76, VAR_16, VAR_12);

 if (!VAR_15) {
  if (VAR_12 || VAR_16->hw_key_idx == VAR_17) {
   VAR_18 = FUNC_3(VAR_13, VAR_16->idx, VAR_12);
   if (VAR_18)
    return VAR_18;
  }

  return FUNC_2(VAR_13, VAR_14->idx, VAR_17, VAR_12);
 }

 return FUNC_3(VAR_13, VAR_15->wcid.idx, VAR_12);
}
