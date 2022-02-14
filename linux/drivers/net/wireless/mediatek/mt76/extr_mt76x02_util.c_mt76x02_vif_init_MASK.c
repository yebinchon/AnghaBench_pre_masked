
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hw_key_idx; int idx; } ;
struct mt76x02_vif {unsigned int idx; TYPE_1__ group_wcid; } ;
struct mt76x02_dev {int mt76; } ;
struct mt76_txq {TYPE_1__* wcid; } ;
struct ieee80211_vif {TYPE_2__* txq; scalar_t__ drv_priv; } ;
struct TYPE_4__ {scalar_t__ drv_priv; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct mt76x02_vif*,int ,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(struct mt76x02_dev *VAR_0, struct ieee80211_vif *VAR_1,
   unsigned int VAR_2)
{
 struct mt76x02_vif *VAR_3 = (struct mt76x02_vif *)VAR_1->drv_priv;
 struct mt76_txq *VAR_4;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->idx = VAR_2;
 VAR_3->group_wcid.idx = FUNC_0(VAR_2);
 VAR_3->group_wcid.hw_key_idx = -1;
 VAR_4 = (struct mt76_txq *)VAR_1->txq->drv_priv;
 VAR_4->wcid = &VAR_3->group_wcid;

 FUNC_2(&VAR_0->mt76, VAR_1->txq);
}
