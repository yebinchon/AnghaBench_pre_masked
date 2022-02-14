
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_coex_dm {scalar_t__ cur_wl_pwr_lvl; } ;
struct rtw_coex {struct rtw_coex_dm dm; } ;
struct rtw_dev {struct rtw_coex coex; } ;



__attribute__((used)) static void FUNC_0(struct rtw_dev *VAR_0, u8 VAR_1)
{
 struct rtw_coex *VAR_2 = &VAR_0->coex;
 struct rtw_coex_dm *VAR_3 = &VAR_2->dm;

 if (VAR_1 == VAR_3->cur_wl_pwr_lvl)
  return;

 VAR_3->cur_wl_pwr_lvl = VAR_1;
}
