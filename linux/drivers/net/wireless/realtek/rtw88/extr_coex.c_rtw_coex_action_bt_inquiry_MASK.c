
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_coex_stat {int bt_page; scalar_t__ wl_connected; scalar_t__ wl_hi_pri_task1; int bt_pan_exist; scalar_t__ bt_a2dp_exist; scalar_t__ wl_hi_pri_task2; scalar_t__ wl_linkscan_proc; } ;
struct rtw_coex {struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_efuse efuse; struct rtw_coex coex; } ;
struct rtw_chip_info {int * wl_rf_para_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtw_dev*,int,int ) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int) ;
 int FUNC_3 (struct rtw_dev*,int,int) ;
 int FUNC_4 (struct rtw_dev*,int ,char*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_2)
{
 struct rtw_coex *VAR_3 = &VAR_2->coex;
 struct rtw_coex_stat *VAR_4 = &VAR_3->stat;
 struct rtw_efuse *VAR_5 = &VAR_2->efuse;
 struct rtw_chip_info *VAR_6 = VAR_2->chip;
 bool VAR_7 = 0;
 u8 VAR_8, VAR_9;

 if (VAR_4->wl_linkscan_proc || VAR_4->wl_hi_pri_task1 ||
     VAR_4->wl_hi_pri_task2)
  VAR_7 = 1;

 if (VAR_5->share_ant) {

  if (VAR_7) {
   VAR_8 = 15;
   if (VAR_4->bt_a2dp_exist &&
       !VAR_4->bt_pan_exist)
    VAR_9 = 11;
   else if (VAR_4->wl_hi_pri_task1)
    VAR_9 = 6;
   else if (!VAR_4->bt_page)
    VAR_9 = 8;
   else
    VAR_9 = 9;
  } else if (VAR_4->wl_connected) {
   VAR_8 = 10;
   VAR_9 = 10;
  } else {
   VAR_8 = 1;
   VAR_9 = 0;
  }
 } else {

  if (VAR_7) {
   VAR_8 = 113;
   if (VAR_4->bt_a2dp_exist &&
       !VAR_4->bt_pan_exist)
    VAR_9 = 111;
   else if (VAR_4->wl_hi_pri_task1)
    VAR_9 = 106;
   else if (!VAR_4->bt_page)
    VAR_9 = 108;
   else
    VAR_9 = 109;
  } else if (VAR_4->wl_connected) {
   VAR_8 = 101;
   VAR_9 = 110;
  } else {
   VAR_8 = 100;
   VAR_9 = 100;
  }
 }

 FUNC_4(VAR_2, VAR_1, "coex: wifi hi(%d), bt page(%d)\n",
  VAR_7, VAR_4->bt_page);

 FUNC_0(VAR_2, 0, VAR_0);
 FUNC_1(VAR_2, VAR_6->wl_rf_para_rx[0]);
 FUNC_2(VAR_2, VAR_8);
 FUNC_3(VAR_2, 0, VAR_9);
}
