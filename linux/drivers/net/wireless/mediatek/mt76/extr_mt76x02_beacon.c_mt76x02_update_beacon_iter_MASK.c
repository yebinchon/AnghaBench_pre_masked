
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mt76x02_vif {int idx; } ;
struct TYPE_2__ {int beacon_mask; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;


 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int ,struct ieee80211_vif*) ;
 int FUNC_2 (struct mt76x02_dev*) ;
 int FUNC_3 (struct mt76x02_dev*,int ,struct sk_buff*) ;

void
FUNC_4(void *VAR_0, u8 *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct mt76x02_dev *VAR_3 = (struct mt76x02_dev *)VAR_0;
 struct mt76x02_vif *VAR_4 = (struct mt76x02_vif *)VAR_2->drv_priv;
 struct sk_buff *VAR_5 = ((void*)0);

 if (!(VAR_3->mt76.beacon_mask & FUNC_0(VAR_4->idx)))
  return;

 VAR_5 = FUNC_1(FUNC_2(VAR_3), VAR_2);
 if (!VAR_5)
  return;

 FUNC_3(VAR_3, VAR_4->idx, VAR_5);
}
