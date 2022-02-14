
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int priority; } ;
struct mt76_txq {int retry_q; } ;
struct mt76_dev {int hw; } ;
struct ieee80211_txq {int sta; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 struct sk_buff* FUNC_1 (int ,struct ieee80211_txq*) ;
 struct ieee80211_txq* FUNC_2 (struct mt76_txq*) ;
 struct sk_buff* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct mt76_dev *VAR_1, struct mt76_txq *VAR_2, bool VAR_3)
{
 struct ieee80211_txq *VAR_4 = FUNC_2(VAR_2);
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_3(&VAR_2->retry_q);
 if (VAR_5) {
  u8 VAR_6 = VAR_5->priority & VAR_0;

  if (VAR_3 && FUNC_4(&VAR_2->retry_q))
   FUNC_0(VAR_4->sta, VAR_6, 0);

  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_1->hw, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 return VAR_5;
}
