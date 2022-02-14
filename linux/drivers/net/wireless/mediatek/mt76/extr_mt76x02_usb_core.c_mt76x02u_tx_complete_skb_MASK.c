
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_queue_entry {int skb; } ;
struct mt76_dev {int dummy; } ;
typedef enum mt76_txq_id { ____Placeholder_mt76_txq_id } mt76_txq_id ;


 int FUNC_0 (struct mt76_dev*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mt76_dev *VAR_0, enum mt76_txq_id VAR_1,
         struct mt76_queue_entry *VAR_2)
{
 FUNC_1(VAR_2->skb);
 FUNC_0(VAR_0, VAR_2->skb);
}
