
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_coex_stat {int* wl_fw_dbg_info_pre; int* wl_fw_dbg_info; int * cnt_wl; } ;
struct rtw_coex {struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*) ;

void FUNC_3(struct rtw_dev *VAR_1, u8 *VAR_2, u8 VAR_3)
{
 struct rtw_coex *VAR_4 = &VAR_1->coex;
 struct rtw_coex_stat *VAR_5 = &VAR_4->stat;
 u8 VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_3 < 8, "invalid wl info c2h length\n"))
  return;

 if (VAR_2[0] != 0x08)
  return;

 for (VAR_7 = 1; VAR_7 < 8; VAR_7++) {
  VAR_6 = VAR_5->wl_fw_dbg_info_pre[VAR_7];
  if (VAR_2[VAR_7] >= VAR_6)
   VAR_5->wl_fw_dbg_info[VAR_7] = VAR_2[VAR_7] - VAR_6;
  else
   VAR_5->wl_fw_dbg_info[VAR_7] = VAR_6 - VAR_2[VAR_7];

  VAR_5->wl_fw_dbg_info_pre[VAR_7] = VAR_2[VAR_7];
 }

 VAR_5->cnt_wl[VAR_0]++;
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
}
