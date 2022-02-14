
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_wcid {int tx_rate_set; int tx_rate_nss; int tx_rate; } ;
struct mt7601u_dev {int lock; } ;
struct ieee80211_tx_rate {int dummy; } ;


 int FUNC_0 (struct mt7601u_dev*,struct ieee80211_tx_rate const*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct mt7601u_dev *VAR_0, struct mt76_wcid *VAR_1,
       const struct ieee80211_tx_rate *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_1->tx_rate = FUNC_0(VAR_0, VAR_2, &VAR_1->tx_rate_nss);
 VAR_1->tx_rate_set = 1;
 FUNC_2(&VAR_0->lock, VAR_3);
}
