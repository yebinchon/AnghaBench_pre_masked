
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mt76_txq {int retry_q; } ;
struct mt76_dev {int hw; } ;
struct ieee80211_txq {scalar_t__ drv_priv; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;

void FUNC_2(struct mt76_dev *VAR_0, struct ieee80211_txq *VAR_1)
{
 struct mt76_txq *VAR_2;
 struct sk_buff *VAR_3;

 if (!VAR_1)
  return;

 VAR_2 = (struct mt76_txq *)VAR_1->drv_priv;

 while ((VAR_3 = FUNC_1(&VAR_2->retry_q)) != ((void*)0))
  FUNC_0(VAR_0->hw, VAR_3);
}
