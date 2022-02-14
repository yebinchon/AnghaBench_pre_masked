
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_coex_dm {scalar_t__ cur_bt_lna_lvl; } ;
struct rtw_coex {struct rtw_coex_dm dm; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,scalar_t__) ;
 int FUNC_1 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_1, u8 VAR_2)
{
 struct rtw_coex *VAR_3 = &VAR_1->coex;
 struct rtw_coex_dm *VAR_4 = &VAR_3->dm;

 if (VAR_2 == VAR_4->cur_bt_lna_lvl)
  return;

 VAR_4->cur_bt_lna_lvl = VAR_2;


 if (VAR_2 < 7) {
  FUNC_0(VAR_1, VAR_2);
  FUNC_1(VAR_1, VAR_0, 1);
 } else {
  FUNC_1(VAR_1, VAR_0, 0);
 }
}
