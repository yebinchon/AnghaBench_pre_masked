
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_wcid {int idx; int * aggr; } ;
struct mt76_dev {int wcid_mask; TYPE_1__* drv; int * wcid; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int * txq; scalar_t__ drv_priv; } ;
struct TYPE_2__ {int (* sta_remove ) (struct mt76_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mt76_dev*,struct mt76_wcid*,int) ;
 int FUNC_2 (struct mt76_dev*,struct mt76_wcid*,int) ;
 int FUNC_3 (struct mt76_dev*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct mt76_dev*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_7 () ;

void FUNC_8(struct mt76_dev *VAR_0, struct ieee80211_vif *VAR_1,
         struct ieee80211_sta *VAR_2)
{
 struct mt76_wcid *VAR_3 = (struct mt76_wcid *)VAR_2->drv_priv;
 int VAR_4, VAR_5 = VAR_3->idx;

 FUNC_5(VAR_0->wcid[VAR_5], ((void*)0));
 FUNC_7();

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3->aggr); VAR_4++)
  FUNC_1(VAR_0, VAR_3, VAR_4);

 if (VAR_0->drv->sta_remove)
  VAR_0->drv->sta_remove(VAR_0, VAR_1, VAR_2);

 FUNC_2(VAR_0, VAR_3, 1);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->txq); VAR_4++)
  FUNC_3(VAR_0, VAR_2->txq[VAR_4]);
 FUNC_4(VAR_0->wcid_mask, VAR_5);
}
