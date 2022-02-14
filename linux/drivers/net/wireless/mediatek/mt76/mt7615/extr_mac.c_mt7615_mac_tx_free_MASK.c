
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sk_buff {scalar_t__ data; } ;
struct mt76_txwi_cache {int * skb; } ;
struct mt76_dev {int dummy; } ;
struct mt7615_tx_free {int * token; int ctrl; } ;
struct mt7615_dev {int token_lock; int token; struct mt76_dev mt76; } ;


 size_t FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 struct mt76_txwi_cache* FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mt76_dev*,struct mt76_txwi_cache*) ;
 int FUNC_5 (struct mt76_dev*,struct mt76_txwi_cache*) ;
 int FUNC_6 (struct mt76_dev*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct mt7615_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct mt7615_tx_free *VAR_3 = (struct mt7615_tx_free *)VAR_2->data;
 struct mt76_dev *VAR_4 = &VAR_1->mt76;
 struct mt76_txwi_cache *VAR_5;
 u8 VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_0, FUNC_3(VAR_3->ctrl));
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_7(&VAR_1->token_lock);
  VAR_5 = FUNC_2(&VAR_1->token, FUNC_3(VAR_3->token[VAR_6]));
  FUNC_8(&VAR_1->token_lock);

  if (!VAR_5)
   continue;

  FUNC_4(VAR_4, VAR_5);
  if (VAR_5->skb) {
   FUNC_6(VAR_4, VAR_5->skb);
   VAR_5->skb = ((void*)0);
  }

  FUNC_5(VAR_4, VAR_5);
 }
 FUNC_1(VAR_2);
}
