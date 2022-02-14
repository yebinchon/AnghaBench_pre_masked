
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int dummy; } ;
struct mt76_wcid {scalar_t__ hw_key_idx; int idx; scalar_t__ sw_iv; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_key_conf {scalar_t__ keyidx; } ;
struct ieee80211_hw {struct mt76x02_dev* priv; } ;


 int FUNC_0 (struct mt76x02_dev*,int ,struct ieee80211_key_conf*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
        struct ieee80211_sta *VAR_2,
        struct ieee80211_key_conf *VAR_3, void *VAR_4)
{
 struct mt76x02_dev *VAR_5 = VAR_0->priv;
 struct mt76_wcid *VAR_6;

 if (!VAR_2)
  return;

 VAR_6 = (struct mt76_wcid *)VAR_2->drv_priv;

 if (VAR_6->hw_key_idx != VAR_3->keyidx || VAR_6->sw_iv)
  return;

 FUNC_0(VAR_5, VAR_6->idx, VAR_3);
}
