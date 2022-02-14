
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtw_coex_stat {int bt_iqk_state; int* cnt_bt; int bt_disabled; int bt_disabled_pre; int bt_reenable; int** bt_info_c2h; int bt_info_lb2; int bt_info_lb3; int bt_info_hb0; int bt_info_hb1; int bt_info_hb2; int bt_info_hb3; int bt_whck_test; int bt_inq_page; int bt_acl_busy; int bt_fix_2M; int bt_inq; int bt_page; int bt_rssi; int bt_ble_exist; int bt_setup_link; int bt_ble_voice; int bt_ble_scan_en; int bt_multi_link; int bt_opp_exist; int bt_a2dp_active; int bt_slave; int bt_hid_slot; int bt_hid_pair_num; int bt_418_hid_exist; int bt_a2dp_bitpool; int bt_a2dp_sink; scalar_t__ wl_connected; scalar_t__ wl_gl_busy; scalar_t__ wl_hi_pri_task2; scalar_t__ wl_hi_pri_task1; scalar_t__ wl_linkscan_proc; } ;
struct rtw_coex {int bt_relink_work; int bt_reenable_work; struct rtw_coex_stat stat; } ;
struct rtw_dev {int hw; struct rtw_chip_info* chip; struct rtw_coex coex; } ;
struct rtw_chip_info {scalar_t__ bt_rssi_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ,int *,unsigned long) ;
 int FUNC_2 (struct rtw_dev*,int) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*,int ) ;
 int FUNC_5 (struct rtw_dev*) ;
 int FUNC_6 (struct rtw_dev*,int) ;
 int FUNC_7 (struct rtw_dev*,int ,int) ;

void FUNC_8(struct rtw_dev *VAR_24, u8 *VAR_25, u8 VAR_26)
{
 struct rtw_coex *VAR_27 = &VAR_24->coex;
 struct rtw_coex_stat *VAR_28 = &VAR_27->stat;
 struct rtw_chip_info *VAR_29 = VAR_24->chip;
 unsigned long VAR_30;
 u8 VAR_31, VAR_32 = 0, VAR_33;

 VAR_32 = VAR_25[0] & 0xf;
 if (VAR_32 >= VAR_5)
  VAR_32 = VAR_6;

 if (VAR_32 == VAR_2) {
  VAR_28->bt_iqk_state = VAR_25[1];
  if (VAR_28->bt_iqk_state == 1)
   VAR_28->cnt_bt[VAR_11]++;
  else if (VAR_28->bt_iqk_state == 2)
   VAR_28->cnt_bt[VAR_12]++;

  return;
 }

 if (VAR_32 == VAR_4) {
  FUNC_3(VAR_24);
  if (VAR_28->bt_disabled != VAR_28->bt_disabled_pre) {
   VAR_28->bt_disabled_pre = VAR_28->bt_disabled;
   FUNC_4(VAR_24, VAR_21);
  }
  return;
 }

 if (VAR_32 == VAR_3 ||
     VAR_32 == VAR_1) {
  if (VAR_28->bt_disabled) {
   VAR_28->bt_disabled = 0;
   VAR_28->bt_reenable = 1;
   FUNC_1(VAR_24->hw,
           &VAR_27->bt_reenable_work,
           15 * VAR_23);
  }
 }

 for (VAR_31 = 0; VAR_31 < VAR_26; VAR_31++) {
  if (VAR_31 < VAR_0)
   VAR_28->bt_info_c2h[VAR_32][VAR_31] = VAR_25[VAR_31];
  else
   break;
 }

 if (VAR_32 == VAR_6) {
  FUNC_5(VAR_24);
  FUNC_4(VAR_24, VAR_21);
  return;
 }


 if (VAR_28->bt_info_c2h[VAR_32][1] == VAR_28->bt_info_lb2 &&
     VAR_28->bt_info_c2h[VAR_32][2] == VAR_28->bt_info_lb3 &&
     VAR_28->bt_info_c2h[VAR_32][3] == VAR_28->bt_info_hb0 &&
     VAR_28->bt_info_c2h[VAR_32][4] == VAR_28->bt_info_hb1 &&
     VAR_28->bt_info_c2h[VAR_32][5] == VAR_28->bt_info_hb2 &&
     VAR_28->bt_info_c2h[VAR_32][6] == VAR_28->bt_info_hb3)
  return;

 VAR_28->bt_info_lb2 = VAR_28->bt_info_c2h[VAR_32][1];
 VAR_28->bt_info_lb3 = VAR_28->bt_info_c2h[VAR_32][2];
 VAR_28->bt_info_hb0 = VAR_28->bt_info_c2h[VAR_32][3];
 VAR_28->bt_info_hb1 = VAR_28->bt_info_c2h[VAR_32][4];
 VAR_28->bt_info_hb2 = VAR_28->bt_info_c2h[VAR_32][5];
 VAR_28->bt_info_hb3 = VAR_28->bt_info_c2h[VAR_32][6];


 VAR_28->bt_whck_test = (VAR_28->bt_info_lb2 == 0xff);
 VAR_28->bt_inq_page = ((VAR_28->bt_info_lb2 & FUNC_0(2)) == FUNC_0(2));
 VAR_28->bt_acl_busy = ((VAR_28->bt_info_lb2 & FUNC_0(3)) == FUNC_0(3));
 VAR_28->cnt_bt[VAR_16] = VAR_28->bt_info_lb3 & 0xf;
 if (VAR_28->cnt_bt[VAR_16] >= 1)
  VAR_28->cnt_bt[VAR_14]++;

 VAR_28->bt_fix_2M = ((VAR_28->bt_info_lb3 & FUNC_0(4)) == FUNC_0(4));
 VAR_28->bt_inq = ((VAR_28->bt_info_lb3 & FUNC_0(5)) == FUNC_0(5));
 if (VAR_28->bt_inq)
  VAR_28->cnt_bt[VAR_10]++;

 VAR_28->bt_page = ((VAR_28->bt_info_lb3 & FUNC_0(7)) == FUNC_0(7));
 if (VAR_28->bt_page) {
  VAR_28->cnt_bt[VAR_13]++;
  if (VAR_28->wl_linkscan_proc ||
      VAR_28->wl_hi_pri_task1 ||
      VAR_28->wl_hi_pri_task2 || VAR_28->wl_gl_busy)
   FUNC_7(VAR_24, VAR_22, 1);
  else
   FUNC_7(VAR_24, VAR_22, 0);
 } else {
  FUNC_7(VAR_24, VAR_22, 0);
 }


 if (VAR_29->bt_rssi_type == VAR_7) {
  VAR_28->bt_rssi = VAR_28->bt_info_hb0 * 2 + 10;
 } else {
  if (VAR_28->bt_info_hb0 <= 127)
   VAR_28->bt_rssi = 100;
  else if (256 - VAR_28->bt_info_hb0 <= 100)
   VAR_28->bt_rssi = 100 - (256 - VAR_28->bt_info_hb0);
  else
   VAR_28->bt_rssi = 0;
 }

 VAR_28->bt_ble_exist = ((VAR_28->bt_info_hb1 & FUNC_0(0)) == FUNC_0(0));
 if (VAR_28->bt_info_hb1 & FUNC_0(1))
  VAR_28->cnt_bt[VAR_15]++;

 if (VAR_28->bt_info_hb1 & FUNC_0(2)) {
  VAR_28->cnt_bt[VAR_18]++;
  VAR_28->bt_setup_link = 1;
  if (VAR_28->bt_reenable)
   VAR_30 = 6 * VAR_23;
  else
   VAR_30 = 2 * VAR_23;

  FUNC_1(VAR_24->hw,
          &VAR_27->bt_relink_work,
          VAR_30);
 }

 if (VAR_28->bt_info_hb1 & FUNC_0(3))
  VAR_28->cnt_bt[VAR_9]++;

 VAR_28->bt_ble_voice = ((VAR_28->bt_info_hb1 & FUNC_0(4)) == FUNC_0(4));
 VAR_28->bt_ble_scan_en = ((VAR_28->bt_info_hb1 & FUNC_0(5)) == FUNC_0(5));
 if (VAR_28->bt_info_hb1 & FUNC_0(6))
  VAR_28->cnt_bt[VAR_17]++;

 VAR_28->bt_multi_link = ((VAR_28->bt_info_hb1 & FUNC_0(7)) == FUNC_0(7));

 if ((VAR_28->bt_info_hb1 & FUNC_0(1))) {
  if (VAR_28->wl_connected)
   VAR_33 = VAR_19;
  else
   VAR_33 = VAR_20;
  FUNC_6(VAR_24, VAR_33);
 }


 if ((VAR_28->bt_info_hb1 & FUNC_0(3)) &&
     (!(VAR_28->bt_info_hb1 & FUNC_0(2))))
  FUNC_2(VAR_24, 0);

 VAR_28->bt_opp_exist = ((VAR_28->bt_info_hb2 & FUNC_0(0)) == FUNC_0(0));
 if (VAR_28->bt_info_hb2 & FUNC_0(1))
  VAR_28->cnt_bt[VAR_8]++;

 VAR_28->bt_a2dp_active = (VAR_28->bt_info_hb2 & FUNC_0(2)) == FUNC_0(2);
 VAR_28->bt_slave = ((VAR_28->bt_info_hb2 & FUNC_0(3)) == FUNC_0(3));
 VAR_28->bt_hid_slot = (VAR_28->bt_info_hb2 & 0x30) >> 4;
 VAR_28->bt_hid_pair_num = (VAR_28->bt_info_hb2 & 0xc0) >> 6;
 if (VAR_28->bt_hid_pair_num > 0 && VAR_28->bt_hid_slot >= 2)
  VAR_28->bt_418_hid_exist = 1;
 else if (VAR_28->bt_hid_pair_num == 0)
  VAR_28->bt_418_hid_exist = 0;

 if ((VAR_28->bt_info_lb2 & 0x49) == 0x49)
  VAR_28->bt_a2dp_bitpool = (VAR_28->bt_info_hb3 & 0x7f);
 else
  VAR_28->bt_a2dp_bitpool = 0;

 VAR_28->bt_a2dp_sink = ((VAR_28->bt_info_hb3 & FUNC_0(7)) == FUNC_0(7));

 FUNC_5(VAR_24);
 FUNC_4(VAR_24, VAR_21);
}
