
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtw_coex_dm {scalar_t__ cur_bt_lna_lvl; } ;
struct rtw_coex_stat {int bt_disabled; int bt_reenable; int bt_mailbox_reply; scalar_t__ bt_ble_scan_type; } ;
struct rtw_coex {int bt_reenable_work; struct rtw_coex_dm dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {int hw; struct rtw_coex coex; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {scalar_t__ scbd_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,int ,char*,int,int) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_3)
{
 struct rtw_chip_info *VAR_4 = VAR_3->chip;
 struct rtw_coex *VAR_5 = &VAR_3->coex;
 struct rtw_coex_stat *VAR_6 = &VAR_5->stat;
 struct rtw_coex_dm *VAR_7 = &VAR_5->dm;
 bool VAR_8 = 0;
 u16 VAR_9;

 if (VAR_4->scbd_support) {
  VAR_9 = FUNC_1(VAR_3);
  VAR_8 = !(VAR_9 & VAR_0);
 }

 if (VAR_6->bt_disabled != VAR_8) {
  FUNC_2(VAR_3, VAR_2, "coex: BT state changed (%d) -> (%d)\n",
   VAR_6->bt_disabled, VAR_8);

  VAR_6->bt_disabled = VAR_8;
  VAR_6->bt_ble_scan_type = 0;
  VAR_7->cur_bt_lna_lvl = 0;
 }

 if (!VAR_6->bt_disabled) {
  VAR_6->bt_reenable = 1;
  FUNC_0(VAR_3->hw,
          &VAR_5->bt_reenable_work, 15 * VAR_1);
 } else {
  VAR_6->bt_mailbox_reply = 0;
  VAR_6->bt_reenable = 0;
 }
}
