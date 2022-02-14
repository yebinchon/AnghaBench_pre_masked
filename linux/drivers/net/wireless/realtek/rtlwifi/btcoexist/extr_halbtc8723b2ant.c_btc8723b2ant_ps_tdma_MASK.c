
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_bt_link_info {scalar_t__ a2dp_exist; scalar_t__ slave_role; } ;
struct btc_coexist {struct btc_bt_link_info bt_link_info; struct rtl_priv* adapter; } ;
typedef int s8 ;
struct TYPE_4__ {int switch_thres_offset; int cur_ps_tdma_on; int cur_ps_tdma; int is_switch_to_1dot5_ant; int pre_ps_tdma_on; int pre_ps_tdma; } ;
struct TYPE_3__ {int scan_ap_num; int a2dp_bit_pool; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (struct btc_coexist*,int,int,int ) ;
 int FUNC_3 (struct btc_coexist*,int,int,int,int,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int,int,int ) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static void FUNC_5(struct btc_coexist *VAR_6, bool VAR_7,
     bool VAR_8, u8 VAR_9)
{
 struct rtl_priv *VAR_10 = VAR_6->adapter;
 struct btc_bt_link_info *VAR_11 = &VAR_6->bt_link_info;
 u8 VAR_12, VAR_13;
 s8 VAR_14 = 0x0;
 u8 VAR_15 = 0x0;
 u8 VAR_16 = VAR_1 -
   VAR_4->switch_thres_offset;

 VAR_12 = FUNC_4(VAR_6, 0, 2, VAR_16, 0);
 VAR_16 = VAR_0 -
   VAR_4->switch_thres_offset;
 VAR_13 = FUNC_2(VAR_6, 2, VAR_16, 0);

 FUNC_1(VAR_10, VAR_2, VAR_3,
   "[BTCoex], %s turn %s PS TDMA, type=%d\n",
   (VAR_7 ? "force to" : ""),
   (VAR_8 ? "ON" : "OFF"), VAR_9);
 VAR_4->cur_ps_tdma_on = VAR_8;
 VAR_4->cur_ps_tdma = VAR_9;

 if (!(FUNC_0(VAR_12) &&
       FUNC_0(VAR_13)) && VAR_8) {

  VAR_9 = VAR_9 + 100;
  VAR_4->is_switch_to_1dot5_ant = 1;
 } else {
  VAR_4->is_switch_to_1dot5_ant = 0;
 }

 if (!VAR_7) {
  FUNC_1(VAR_10, VAR_2, VAR_3,
    "[BTCoex], bPrePsTdmaOn = %d, bCurPsTdmaOn = %d!!\n",
    VAR_4->pre_ps_tdma_on, VAR_4->cur_ps_tdma_on);
  FUNC_1(VAR_10, VAR_2, VAR_3,
    "[BTCoex], prePsTdma = %d, curPsTdma = %d!!\n",
    VAR_4->pre_ps_tdma, VAR_4->cur_ps_tdma);

  if ((VAR_4->pre_ps_tdma_on == VAR_4->cur_ps_tdma_on) &&
      (VAR_4->pre_ps_tdma == VAR_4->cur_ps_tdma))
   return;
 }

 if (VAR_5->scan_ap_num <= 5) {
  if (VAR_5->a2dp_bit_pool >= 45)
   VAR_14 = -15;
  else if (VAR_5->a2dp_bit_pool >= 35)
   VAR_14 = -10;
  else
   VAR_14 = 5;
 } else if (VAR_5->scan_ap_num <= 20) {
  if (VAR_5->a2dp_bit_pool >= 45)
   VAR_14 = -15;
  else if (VAR_5->a2dp_bit_pool >= 35)
   VAR_14 = -10;
  else
   VAR_14 = 0;
 } else if (VAR_5->scan_ap_num <= 40) {
  if (VAR_5->a2dp_bit_pool >= 45)
   VAR_14 = -15;
  else if (VAR_5->a2dp_bit_pool >= 35)
   VAR_14 = -10;
  else
   VAR_14 = -5;
 } else {
  if (VAR_5->a2dp_bit_pool >= 45)
   VAR_14 = -15;
  else if (VAR_5->a2dp_bit_pool >= 35)
   VAR_14 = -10;
  else
   VAR_14 = -10;
 }

 if ((VAR_11->slave_role) && (VAR_11->a2dp_exist))

  VAR_15 = 0x1;

 if (VAR_8) {
  switch (VAR_9) {
  case 1:
  default:
   FUNC_3(
    VAR_6, 0xe3, 0x3c,
    0x03, 0xf1, 0x90 | VAR_15);
   break;
  case 2:
   FUNC_3(
    VAR_6, 0xe3, 0x2d,
    0x03, 0xf1, 0x90 | VAR_15);
   break;
  case 3:
   FUNC_3(VAR_6, 0xe3, 0x1c,
          0x3, 0xf1,
          0x90 | VAR_15);
   break;
  case 4:
   FUNC_3(VAR_6, 0xe3, 0x10,
          0x03, 0xf1,
          0x90 | VAR_15);
   break;
  case 5:
   FUNC_3(
    VAR_6, 0xe3, 0x3c,
    0x3, 0x70, 0x90 | VAR_15);
   break;
  case 6:
   FUNC_3(
    VAR_6, 0xe3, 0x2d,
    0x3, 0x70, 0x90 | VAR_15);
   break;
  case 7:
   FUNC_3(VAR_6, 0xe3, 0x1c,
          0x3, 0x70,
          0x90 | VAR_15);
   break;
  case 8:
   FUNC_3(VAR_6, 0xa3, 0x10,
          0x3, 0x70,
          0x90 | VAR_15);
   break;
  case 9:
   FUNC_3(
    VAR_6, 0xe3, 0x3c + VAR_14,
    0x03, 0xf1, 0x90 | VAR_15);
   break;
  case 10:
   FUNC_3(
    VAR_6, 0xe3, 0x2d,
    0x03, 0xf1, 0x90 | VAR_15);
   break;
  case 11:
   FUNC_3(VAR_6, 0xe3, 0x1c,
          0x3, 0xf1,
          0x90 | VAR_15);
   break;
  case 12:
   FUNC_3(VAR_6, 0xe3, 0x10,
          0x3, 0xf1,
          0x90 | VAR_15);
   break;
  case 13:
   FUNC_3(
    VAR_6, 0xe3, 0x3c,
    0x3, 0x70, 0x90 | VAR_15);
   break;
  case 14:
   FUNC_3(
    VAR_6, 0xe3, 0x2d,
    0x3, 0x70, 0x90 | VAR_15);
   break;
  case 15:
   FUNC_3(VAR_6, 0xe3, 0x1c,
          0x3, 0x70,
          0x90 | VAR_15);
   break;
  case 16:
   FUNC_3(VAR_6, 0xe3, 0x10,
          0x3, 0x70,
          0x90 | VAR_15);
   break;
  case 17:
   FUNC_3(VAR_6, 0xa3, 0x2f,
          0x2f, 0x60, 0x90);
   break;
  case 18:
   FUNC_3(VAR_6, 0xe3, 0x5, 0x5,
          0xe1, 0x90);
   break;
  case 19:
   FUNC_3(VAR_6, 0xe3, 0x25,
          0x25, 0xe1, 0x90);
   break;
  case 20:
   FUNC_3(VAR_6, 0xe3, 0x25,
          0x25, 0x60, 0x90);
   break;
  case 21:
   FUNC_3(VAR_6, 0xe3, 0x15,
          0x03, 0x70, 0x90);
   break;

  case 23:
  case 123:
   FUNC_3(VAR_6, 0xe3, 0x35,
          0x03, 0x71, 0x10);
   break;
  case 71:
   FUNC_3(
    VAR_6, 0xe3, 0x3c + VAR_14,
    0x03, 0xf1, 0x90);
   break;
  case 101:
  case 105:
  case 113:
  case 171:
   FUNC_3(
    VAR_6, 0xd3, 0x3a + VAR_14,
    0x03, 0x70, 0x50 | VAR_15);
   break;
  case 102:
  case 106:
  case 110:
  case 114:
   FUNC_3(
    VAR_6, 0xd3, 0x2d + VAR_14,
    0x03, 0x70, 0x50 | VAR_15);
   break;
  case 103:
  case 107:
  case 111:
  case 115:
   FUNC_3(VAR_6, 0xd3, 0x1c,
          0x03, 0x70,
          0x50 | VAR_15);
   break;
  case 104:
  case 108:
  case 112:
  case 116:
   FUNC_3(VAR_6, 0xd3, 0x10,
          0x03, 0x70,
          0x50 | VAR_15);
   break;
  case 109:
   FUNC_3(VAR_6, 0xe3, 0x3c,
          0x03, 0xf1,
          0x90 | VAR_15);
   break;
  case 121:
   FUNC_3(VAR_6, 0xe3, 0x15,
          0x03, 0x70,
          0x90 | VAR_15);
   break;
  case 22:
  case 122:
   FUNC_3(VAR_6, 0xe3, 0x35,
          0x03, 0x71, 0x11);
   break;
  }
 } else {

  switch (VAR_9) {
  case 0:
   FUNC_3(VAR_6, 0x0, 0x0, 0x0,
          0x40, 0x0);
   break;
  case 1:
   FUNC_3(VAR_6, 0x0, 0x0, 0x0,
          0x48, 0x0);
   break;
  default:
   FUNC_3(VAR_6, 0x0, 0x0, 0x0,
          0x40, 0x0);
   break;
  }
 }


 VAR_4->pre_ps_tdma_on = VAR_4->cur_ps_tdma_on;
 VAR_4->pre_ps_tdma = VAR_4->cur_ps_tdma;
}
