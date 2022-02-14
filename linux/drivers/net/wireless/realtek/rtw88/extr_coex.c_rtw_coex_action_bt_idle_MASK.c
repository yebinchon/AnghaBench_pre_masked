
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_coex_rfe {scalar_t__ ant_switch_with_bt; } ;
struct rtw_coex_dm {scalar_t__ bt_status; int * wl_rssi_state; } ;
struct rtw_coex_stat {int bt_ble_scan_type; int wl_gl_busy; } ;
struct rtw_coex {struct rtw_coex_rfe rfe; struct rtw_coex_dm dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_chip_info* chip; struct rtw_efuse efuse; struct rtw_coex coex; } ;
struct rtw_chip_info {int * wl_rf_para_rx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtw_dev*,int,int ) ;
 int FUNC_2 (struct rtw_dev*,int ) ;
 int FUNC_3 (struct rtw_dev*,int) ;
 int FUNC_4 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_3)
{
 struct rtw_coex *VAR_4 = &VAR_3->coex;
 struct rtw_coex_stat *VAR_5 = &VAR_4->stat;
 struct rtw_coex_dm *VAR_6 = &VAR_4->dm;
 struct rtw_efuse *VAR_7 = &VAR_3->efuse;
 struct rtw_chip_info *VAR_8 = VAR_3->chip;
 struct rtw_coex_rfe *VAR_9 = &VAR_4->rfe;
 u8 VAR_10 = 0xff, VAR_11 = 0xff;

 if (VAR_9->ant_switch_with_bt &&
     VAR_6->bt_status == VAR_0) {
  if (VAR_7->share_ant &&
      FUNC_0(VAR_6->wl_rssi_state[1])) {
   VAR_10 = 0;
   VAR_11 = 0;
  } else if (!VAR_7->share_ant) {
   VAR_10 = 100;
   VAR_11 = 100;
  }
 }

 if (VAR_10 != 0xff && VAR_11 != 0xff) {
  FUNC_1(VAR_3, 0, VAR_2);
  FUNC_3(VAR_3, VAR_10);
  FUNC_4(VAR_3, 0, VAR_11);
  return;
 }

 FUNC_1(VAR_3, 0, VAR_1);

 if (VAR_7->share_ant) {

  if (!VAR_5->wl_gl_busy) {
   VAR_10 = 10;
   VAR_11 = 3;
  } else if (VAR_6->bt_status == VAR_0) {
   VAR_10 = 6;
   VAR_11 = 7;
  } else {
   VAR_10 = 12;
   VAR_11 = 7;
  }
 } else {

  if (!VAR_5->wl_gl_busy) {
   VAR_10 = 112;
   VAR_11 = 104;
  } else if ((VAR_5->bt_ble_scan_type & 0x2) &&
       VAR_6->bt_status == VAR_0) {
   VAR_10 = 114;
   VAR_11 = 103;
  } else {
   VAR_10 = 112;
   VAR_11 = 103;
  }
 }

 FUNC_2(VAR_3, VAR_8->wl_rf_para_rx[0]);
 FUNC_3(VAR_3, VAR_10);
 FUNC_4(VAR_3, 0, VAR_11);
}
