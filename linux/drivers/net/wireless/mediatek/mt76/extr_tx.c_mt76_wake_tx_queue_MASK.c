
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_dev {int tx_tasklet; int state; } ;
struct ieee80211_txq {int dummy; } ;
struct ieee80211_hw {struct mt76_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct ieee80211_hw *VAR_1, struct ieee80211_txq *VAR_2)
{
 struct mt76_dev *VAR_3 = VAR_1->priv;

 if (!FUNC_1(VAR_0, &VAR_3->state))
  return;

 FUNC_0(&VAR_3->tx_tasklet);
}
