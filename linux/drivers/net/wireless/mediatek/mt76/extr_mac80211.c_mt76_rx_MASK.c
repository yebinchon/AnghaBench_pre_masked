
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mt76_dev {int * rx_skb; int state; } ;
typedef enum mt76_rxq_id { ____Placeholder_mt76_rxq_id } mt76_rxq_id ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct mt76_dev *VAR_1, enum mt76_rxq_id VAR_2, struct sk_buff *VAR_3)
{
 if (!FUNC_2(VAR_0, &VAR_1->state)) {
  FUNC_1(VAR_3);
  return;
 }

 FUNC_0(&VAR_1->rx_skb[VAR_2], VAR_3);
}
