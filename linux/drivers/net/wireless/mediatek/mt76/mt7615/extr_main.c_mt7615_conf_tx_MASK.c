
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mt7615_vif {int wmm_idx; } ;
struct mt7615_dev {int dummy; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_tx_queue_params {int dummy; } ;
struct ieee80211_hw {struct mt7615_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt7615_dev*,int,struct ieee80211_tx_queue_params const*) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2, u16 VAR_3,
        const struct ieee80211_tx_queue_params *VAR_4)
{
 struct mt7615_vif *VAR_5 = (struct mt7615_vif *)VAR_2->drv_priv;
 struct mt7615_dev *VAR_6 = VAR_1->priv;

 VAR_3 += VAR_5->wmm_idx * VAR_0;

 return FUNC_0(VAR_6, VAR_3, VAR_4);
}
