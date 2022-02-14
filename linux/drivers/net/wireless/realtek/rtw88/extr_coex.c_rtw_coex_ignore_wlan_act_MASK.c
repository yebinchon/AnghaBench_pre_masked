
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_coex {scalar_t__ stop_dm; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 int FUNC_0 (struct rtw_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_0, bool VAR_1)
{
 struct rtw_coex *VAR_2 = &VAR_0->coex;

 if (VAR_2->stop_dm)
  return;

 FUNC_0(VAR_0, VAR_1);
}
