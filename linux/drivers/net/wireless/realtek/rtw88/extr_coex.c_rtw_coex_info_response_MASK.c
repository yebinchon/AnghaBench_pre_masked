
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct rtw_coex {int wait; int queue; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rtw_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct rtw_coex *VAR_3 = &VAR_1->coex;
 u8 *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4[0] != VAR_0)
  return;

 FUNC_1(&VAR_3->queue, VAR_2);
 FUNC_2(&VAR_3->wait);
}
