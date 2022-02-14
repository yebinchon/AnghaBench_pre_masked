
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dm_info {int cck_ok_cnt; int cck_err_cnt; } ;
struct rtw_coex_stat {int* cnt_wl; int wl_noisy_level; int wl_gl_busy; } ;
struct rtw_coex {struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_dm_info dm_info; struct rtw_coex coex; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_0(struct rtw_dev *VAR_3)
{
 struct rtw_coex *VAR_4 = &VAR_3->coex;
 struct rtw_coex_stat *VAR_5 = &VAR_4->stat;
 struct rtw_dm_info *VAR_6 = &VAR_3->dm_info;
 u32 VAR_7;


 VAR_7 = VAR_6->cck_ok_cnt + VAR_6->cck_err_cnt;

 if (!VAR_5->wl_gl_busy) {
  if (VAR_7 > 250) {
   if (VAR_5->cnt_wl[VAR_2] < 5)
    VAR_5->cnt_wl[VAR_2]++;

   if (VAR_5->cnt_wl[VAR_2] == 5) {
    VAR_5->cnt_wl[VAR_0] = 0;
    VAR_5->cnt_wl[VAR_1] = 0;
   }
  } else if (VAR_7 < 100) {
   if (VAR_5->cnt_wl[VAR_0] < 5)
    VAR_5->cnt_wl[VAR_0]++;

   if (VAR_5->cnt_wl[VAR_0] == 5) {
    VAR_5->cnt_wl[VAR_1] = 0;
    VAR_5->cnt_wl[VAR_2] = 0;
   }
  } else {
   if (VAR_5->cnt_wl[VAR_1] < 5)
    VAR_5->cnt_wl[VAR_1]++;

   if (VAR_5->cnt_wl[VAR_1] == 5) {
    VAR_5->cnt_wl[VAR_0] = 0;
    VAR_5->cnt_wl[VAR_2] = 0;
   }
  }

  if (VAR_5->cnt_wl[VAR_2] == 5)
   VAR_5->wl_noisy_level = 2;
  else if (VAR_5->cnt_wl[VAR_1] == 5)
   VAR_5->wl_noisy_level = 1;
  else
   VAR_5->wl_noisy_level = 0;
 }
}
