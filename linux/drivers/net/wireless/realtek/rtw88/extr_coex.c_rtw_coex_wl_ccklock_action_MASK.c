
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_coex_stat {int tdma_timer_base; int wl_slot_extend; int* cnt_wl; int* wl_fw_dbg_info; scalar_t__ wl_cck_lock; int wl_cck_lock_ever; scalar_t__ wl_force_lps_ctrl; } ;
struct rtw_coex {scalar_t__ stop_dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,int,int*) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_3)
{
 struct rtw_coex *VAR_4 = &VAR_3->coex;
 struct rtw_coex_stat *VAR_5 = &VAR_4->stat;
 u8 VAR_6[6] = {0};

 if (VAR_4->stop_dm)
  return;

 VAR_6[0] = VAR_1;

 if (VAR_5->tdma_timer_base == 3 && VAR_5->wl_slot_extend) {
  VAR_6[1] = VAR_2;
  FUNC_0(VAR_3, VAR_6[0], &VAR_6[1]);
  VAR_5->wl_slot_extend = 0;
  VAR_5->cnt_wl[VAR_0] = 0;
  return;
 }

 if (VAR_5->wl_slot_extend && VAR_5->wl_force_lps_ctrl &&
     !VAR_5->wl_cck_lock_ever) {
  if (VAR_5->wl_fw_dbg_info[7] <= 5)
   VAR_5->cnt_wl[VAR_0]++;
  else
   VAR_5->cnt_wl[VAR_0] = 0;

  if (VAR_5->cnt_wl[VAR_0] == 7) {
   VAR_6[1] = 0x1;
   FUNC_0(VAR_3, VAR_6[0], &VAR_6[1]);
   VAR_5->wl_slot_extend = 0;
   VAR_5->cnt_wl[VAR_0] = 0;
  }
 } else if (!VAR_5->wl_slot_extend && VAR_5->wl_cck_lock) {
  VAR_6[1] = 0x0;
  FUNC_0(VAR_3, VAR_6[0], &VAR_6[1]);
  VAR_5->wl_slot_extend = 1;
 }
}
