
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mt76_wcid {size_t idx; int rssi; } ;
struct mt76_txq {struct mt76_wcid* wcid; } ;
struct mt76_dev {int mutex; int * wcid; TYPE_1__* drv; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {TYPE_2__** txq; scalar_t__ drv_priv; } ;
struct TYPE_5__ {scalar_t__ drv_priv; } ;
struct TYPE_4__ {int (* sta_add ) (struct mt76_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;} ;


 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mt76_dev*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct mt76_wcid*) ;
 int FUNC_6 (struct mt76_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;

__attribute__((used)) static int
FUNC_7(struct mt76_dev *VAR_0, struct ieee80211_vif *VAR_1,
      struct ieee80211_sta *VAR_2)
{
 struct mt76_wcid *VAR_3 = (struct mt76_wcid *)VAR_2->drv_priv;
 int VAR_4;
 int VAR_5;

 FUNC_3(&VAR_0->mutex);

 VAR_4 = VAR_0->drv->sta_add(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  goto out;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->txq); VAR_5++) {
  struct mt76_txq *VAR_6;

  if (!VAR_2->txq[VAR_5])
   continue;

  VAR_6 = (struct mt76_txq *)VAR_2->txq[VAR_5]->drv_priv;
  VAR_6->wcid = VAR_3;

  FUNC_2(VAR_0, VAR_2->txq[VAR_5]);
 }

 FUNC_1(&VAR_3->rssi);
 FUNC_5(VAR_0->wcid[VAR_3->idx], VAR_3);

out:
 FUNC_4(&VAR_0->mutex);

 return VAR_4;
}
