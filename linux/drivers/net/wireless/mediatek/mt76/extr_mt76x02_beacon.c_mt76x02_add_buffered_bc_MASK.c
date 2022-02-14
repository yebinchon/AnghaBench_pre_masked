
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mt76x02_vif {size_t idx; } ;
struct TYPE_3__ {int beacon_mask; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_4__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct beacon_bc_data {struct sk_buff** tail; int q; struct mt76x02_dev* dev; } ;


 int FUNC_0 (size_t) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,struct ieee80211_vif*) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, u8 *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct beacon_bc_data *VAR_4 = VAR_1;
 struct mt76x02_dev *VAR_5 = VAR_4->dev;
 struct mt76x02_vif *VAR_6 = (struct mt76x02_vif *)VAR_3->drv_priv;
 struct ieee80211_tx_info *VAR_7;
 struct sk_buff *VAR_8;

 if (!(VAR_5->mt76.beacon_mask & FUNC_0(VAR_6->idx)))
  return;

 VAR_8 = FUNC_3(FUNC_4(VAR_5), VAR_3);
 if (!VAR_8)
  return;

 VAR_7 = FUNC_1(VAR_8);
 VAR_7->control.vif = VAR_3;
 VAR_7->flags |= VAR_0;
 FUNC_5(VAR_8, 1);
 FUNC_2(&VAR_4->q, VAR_8);
 VAR_4->tail[VAR_6->idx] = VAR_8;
}
