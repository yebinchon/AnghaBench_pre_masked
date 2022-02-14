
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_coex_stat {scalar_t__ bt_disabled; } ;
struct rtw_coex {struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 int FUNC_0 (struct rtw_dev*) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_0)
{
 struct rtw_coex *VAR_1 = &VAR_0->coex;
 struct rtw_coex_stat *VAR_2 = &VAR_1->stat;

 if (VAR_2->bt_disabled)
  return;

 FUNC_0(VAR_0);
}
