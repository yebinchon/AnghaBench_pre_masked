
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {size_t min_rssi; } ;
struct rtw_coex_dm {size_t* bt_rssi_state; size_t* wl_rssi_state; int bt_status; } ;
struct rtw_coex_stat {size_t bt_rssi; int* cnt_bt; size_t bt_ble_scan_type; int bt_init_scan; int bt_info_lb2; int bt_link_exist; int bt_pan_exist; int bt_a2dp_exist; int bt_hid_exist; int bt_hfp_exist; scalar_t__ bt_profile_num; scalar_t__ bt_ble_scan_en; } ;
struct rtw_coex {struct rtw_coex_dm dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {TYPE_1__ dm_info; struct rtw_chip_info* chip; struct rtw_coex coex; } ;
struct rtw_chip_info {size_t* bt_rssi_step; size_t* wl_rssi_step; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (struct rtw_dev*,size_t*) ;
 size_t FUNC_1 (struct rtw_dev*,size_t,size_t,size_t) ;
 int FUNC_2 (struct rtw_dev*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_18)
{
 struct rtw_coex *VAR_19 = &VAR_18->coex;
 struct rtw_coex_stat *VAR_20 = &VAR_19->stat;
 struct rtw_coex_dm *VAR_21 = &VAR_19->dm;
 struct rtw_chip_info *VAR_22 = VAR_18->chip;
 u8 VAR_23;
 u8 VAR_24;
 u8 VAR_25;
 u8 VAR_26;


 for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
  VAR_24 = VAR_21->bt_rssi_state[VAR_23];
  VAR_25 = VAR_22->bt_rssi_step[VAR_23];
  VAR_26 = VAR_20->bt_rssi;
  VAR_24 = FUNC_1(VAR_18, VAR_24,
            VAR_26, VAR_25);
  VAR_21->bt_rssi_state[VAR_23] = VAR_24;
 }

 for (VAR_23 = 0; VAR_23 < VAR_16; VAR_23++) {
  VAR_24 = VAR_21->wl_rssi_state[VAR_23];
  VAR_25 = VAR_22->wl_rssi_step[VAR_23];
  VAR_26 = VAR_18->dm_info.min_rssi;
  VAR_24 = FUNC_1(VAR_18, VAR_24,
            VAR_26, VAR_25);
  VAR_21->wl_rssi_state[VAR_23] = VAR_24;
 }

 if (VAR_20->bt_ble_scan_en &&
     VAR_20->cnt_bt[VAR_7] % 3 == 0) {
  u8 VAR_27;

  if (FUNC_0(VAR_18, &VAR_27)) {
   VAR_20->bt_ble_scan_type = VAR_27;
   if ((VAR_20->bt_ble_scan_type & 0x1) == 0x1)
    VAR_20->bt_init_scan = 1;
   else
    VAR_20->bt_init_scan = 0;
  }
 }

 VAR_20->bt_profile_num = 0;


 if (!(VAR_20->bt_info_lb2 & VAR_10)) {
  VAR_20->bt_link_exist = 0;
  VAR_20->bt_pan_exist = 0;
  VAR_20->bt_a2dp_exist = 0;
  VAR_20->bt_hid_exist = 0;
  VAR_20->bt_hfp_exist = 0;
 } else {

  VAR_20->bt_link_exist = 1;
  if (VAR_20->bt_info_lb2 & VAR_11) {
   VAR_20->bt_pan_exist = 1;
   VAR_20->bt_profile_num++;
  } else {
   VAR_20->bt_pan_exist = 0;
  }

  if (VAR_20->bt_info_lb2 & VAR_8) {
   VAR_20->bt_a2dp_exist = 1;
   VAR_20->bt_profile_num++;
  } else {
   VAR_20->bt_a2dp_exist = 0;
  }

  if (VAR_20->bt_info_lb2 & VAR_12) {
   VAR_20->bt_hid_exist = 1;
   VAR_20->bt_profile_num++;
  } else {
   VAR_20->bt_hid_exist = 0;
  }

  if (VAR_20->bt_info_lb2 & VAR_15) {
   VAR_20->bt_hfp_exist = 1;
   VAR_20->bt_profile_num++;
  } else {
   VAR_20->bt_hfp_exist = 0;
  }
 }

 if (VAR_20->bt_info_lb2 & VAR_13) {
  VAR_21->bt_status = VAR_3;
 } else if (!(VAR_20->bt_info_lb2 & VAR_10)) {
  VAR_21->bt_status = VAR_5;
 } else if (VAR_20->bt_info_lb2 == VAR_10) {
  VAR_21->bt_status = VAR_2;
 } else if ((VAR_20->bt_info_lb2 & VAR_15) ||
     (VAR_20->bt_info_lb2 & VAR_14)) {
  if (VAR_20->bt_info_lb2 & VAR_9)
   VAR_21->bt_status = VAR_1;
  else
   VAR_21->bt_status = VAR_6;
 } else if (VAR_20->bt_info_lb2 & VAR_9) {
  VAR_21->bt_status = VAR_0;
 } else {
  VAR_21->bt_status = VAR_4;
 }

 VAR_20->cnt_bt[VAR_7]++;

 FUNC_2(VAR_18, VAR_17, "coex: bt status(%d)\n", VAR_21->bt_status);
}
