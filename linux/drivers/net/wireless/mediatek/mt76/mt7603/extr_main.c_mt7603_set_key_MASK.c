
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_wcid {int hw_key_idx; int idx; } ;
struct mt7603_sta {struct mt76_wcid wcid; } ;
struct mt7603_vif {struct mt7603_sta sta; } ;
struct mt7603_dev {int mt76; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {int keyidx; int cipher; int flags; int hw_key_idx; } ;
struct ieee80211_hw {struct mt7603_dev* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct mt7603_dev*,int ,struct ieee80211_key_conf*) ;
 int FUNC_1 (int *,struct mt76_wcid*,struct ieee80211_key_conf*) ;

__attribute__((used)) static int
FUNC_2(struct ieee80211_hw *VAR_5, enum set_key_cmd VAR_6,
        struct ieee80211_vif *VAR_7, struct ieee80211_sta *VAR_8,
        struct ieee80211_key_conf *VAR_9)
{
 struct mt7603_dev *VAR_10 = VAR_5->priv;
 struct mt7603_vif *VAR_11 = (struct mt7603_vif *)VAR_7->drv_priv;
 struct mt7603_sta *VAR_12 = VAR_8 ? (struct mt7603_sta *)VAR_8->drv_priv :
      &VAR_11->sta;
 struct mt76_wcid *VAR_13 = &VAR_12->wcid;
 int VAR_14 = VAR_9->keyidx;


 switch (VAR_9->cipher) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_0;
 }





 if ((VAR_7->type == VAR_2 ||
      VAR_7->type == VAR_3) &&
     (VAR_9->cipher == 128 ||
      VAR_9->cipher == 129) &&
     !(VAR_9->flags & VAR_1))
  return -VAR_0;

 if (VAR_6 == VAR_4) {
  VAR_9->hw_key_idx = VAR_13->idx;
  VAR_13->hw_key_idx = VAR_14;
 } else {
  if (VAR_14 == VAR_13->hw_key_idx)
   VAR_13->hw_key_idx = -1;

  VAR_9 = ((void*)0);
 }
 FUNC_1(&VAR_10->mt76, VAR_13, VAR_9);

 return FUNC_0(VAR_10, VAR_13->idx, VAR_9);
}
