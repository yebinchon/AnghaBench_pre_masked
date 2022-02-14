
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_coex_stat {scalar_t__ bt_hid_pair_num; scalar_t__ bt_hfp_exist; scalar_t__ bt_hid_exist; } ;
struct rtw_coex_dm {scalar_t__ bt_status; } ;
struct rtw_coex {scalar_t__ under_5g; struct rtw_coex_stat stat; struct rtw_coex_dm dm; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_1)
{
 struct rtw_coex *VAR_2 = &VAR_1->coex;
 struct rtw_coex_dm *VAR_3 = &VAR_2->dm;
 struct rtw_coex_stat *VAR_4 = &VAR_2->stat;
 bool VAR_5 = 0;
 bool VAR_6 = 0;

 if (VAR_2->under_5g ||
     VAR_3->bt_status == VAR_0) {

 } else {
  VAR_5 = 1;
  if (VAR_4->bt_hid_exist || VAR_4->bt_hfp_exist ||
      VAR_4->bt_hid_pair_num > 0)
   VAR_6 = 1;
 }

 FUNC_0(VAR_1, VAR_5, VAR_6);
}
