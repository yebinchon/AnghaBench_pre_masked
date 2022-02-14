
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtw_coex_stat {int wl_coex_mode; void** wl_rssi_state; void** bt_rssi_state; scalar_t__* cnt_bt; scalar_t__* cnt_wl; } ;
struct rtw_coex {struct rtw_coex_stat dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;
struct rtw_coex_dm {int wl_coex_mode; void** wl_rssi_state; void** bt_rssi_state; scalar_t__* cnt_bt; scalar_t__* cnt_wl; } ;


 size_t FUNC_0 (void**) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtw_coex_stat*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_4)
{
 struct rtw_coex *VAR_5 = &VAR_4->coex;
 struct rtw_coex_stat *VAR_6 = &VAR_5->stat;
 struct rtw_coex_dm *VAR_7 = &VAR_5->dm;
 u8 VAR_8;

 FUNC_1(VAR_7, 0, sizeof(*VAR_7));
 FUNC_1(VAR_6, 0, sizeof(*VAR_6));

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_6->cnt_wl[VAR_8] = 0;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->cnt_bt[VAR_8] = 0;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->bt_rssi_state); VAR_8++)
  VAR_7->bt_rssi_state[VAR_8] = VAR_2;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7->wl_rssi_state); VAR_8++)
  VAR_7->wl_rssi_state[VAR_8] = VAR_2;

 VAR_6->wl_coex_mode = VAR_3;
}
