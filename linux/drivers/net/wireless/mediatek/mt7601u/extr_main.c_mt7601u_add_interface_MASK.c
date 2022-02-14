
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int idx; int hw_key_idx; } ;
struct mt76_vif {unsigned int idx; TYPE_1__ group_wcid; } ;
struct mt7601u_dev {int* wcid_mask; int macaddr; } ;
struct ieee80211_vif {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct mt7601u_dev* priv; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mt7601u_dev*,int ) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_2,
     struct ieee80211_vif *VAR_3)
{
 struct mt7601u_dev *VAR_4 = VAR_2->priv;
 struct mt76_vif *VAR_5 = (struct mt76_vif *) VAR_3->drv_priv;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = FUNC_1(VAR_6);






 VAR_5->idx = VAR_6;

 if (!FUNC_2(VAR_4->macaddr, VAR_3->addr))
  FUNC_3(VAR_4, VAR_3->addr);

 if (VAR_4->wcid_mask[VAR_7 / VAR_0] & FUNC_0(VAR_7 % VAR_0))
  return -VAR_1;
 VAR_4->wcid_mask[VAR_7 / VAR_0] |= FUNC_0(VAR_7 % VAR_0);
 VAR_5->group_wcid.idx = VAR_7;
 VAR_5->group_wcid.hw_key_idx = -1;

 return 0;
}
