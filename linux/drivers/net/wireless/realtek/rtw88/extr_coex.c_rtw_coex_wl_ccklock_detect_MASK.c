
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_coex_stat {int wl_cck_lock; int wl_cck_lock_pre; int wl_cck_lock_ever; } ;
struct rtw_coex {struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;



__attribute__((used)) static void FUNC_0(struct rtw_dev *VAR_0)
{
 struct rtw_coex *VAR_1 = &VAR_0->coex;
 struct rtw_coex_stat *VAR_2 = &VAR_1->stat;


 VAR_2->wl_cck_lock = 0;
 VAR_2->wl_cck_lock_pre = 0;
 VAR_2->wl_cck_lock_ever = 0;
}
