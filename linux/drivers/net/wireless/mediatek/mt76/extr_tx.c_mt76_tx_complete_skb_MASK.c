
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int prev; } ;
struct mt76_dev {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt76_dev*,struct sk_buff*,int ,struct sk_buff_head*) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct mt76_dev*,struct sk_buff_head*) ;
 int FUNC_3 (struct mt76_dev*,struct sk_buff_head*) ;

void FUNC_4(struct mt76_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct sk_buff_head VAR_3;

 if (!VAR_2->prev) {
  FUNC_1(VAR_1->hw, VAR_2);
  return;
 }

 FUNC_2(VAR_1, &VAR_3);
 FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_3);
 FUNC_3(VAR_1, &VAR_3);
}
