
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct mt76_wcid {int dummy; } ;
struct mt76_dev {int dummy; } ;


 int FUNC_0 (struct mt76_dev*,struct sk_buff_head*) ;
 int FUNC_1 (struct mt76_dev*,struct mt76_wcid*,int,struct sk_buff_head*) ;
 int FUNC_2 (struct mt76_dev*,struct sk_buff_head*) ;

void
FUNC_3(struct mt76_dev *VAR_0, struct mt76_wcid *VAR_1, bool VAR_2)
{
 struct sk_buff_head VAR_3;

 FUNC_0(VAR_0, &VAR_3);
 FUNC_1(VAR_0, VAR_1, VAR_2 ? -1 : 0, &VAR_3);
 FUNC_2(VAR_0, &VAR_3);
}
