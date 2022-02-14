
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
struct mt76_dev {int * rx_skb; } ;
typedef enum mt76_rxq_id { ____Placeholder_mt76_rxq_id } mt76_rxq_id ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct mt76_dev*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_4 (struct mt76_dev*,struct sk_buff_head*,struct napi_struct*) ;

void FUNC_5(struct mt76_dev *VAR_0, enum mt76_rxq_id VAR_1,
      struct napi_struct *VAR_2)
{
 struct sk_buff_head VAR_3;
 struct sk_buff *VAR_4;

 FUNC_1(&VAR_3);

 while ((VAR_4 = FUNC_0(&VAR_0->rx_skb[VAR_1])) != ((void*)0)) {
  FUNC_2(VAR_0, VAR_4);
  FUNC_3(VAR_4, &VAR_3);
 }

 FUNC_4(VAR_0, &VAR_3, VAR_2);
}
