
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct btc_bt_link_info {scalar_t__ a2dp_exist; scalar_t__ slave_role; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct btc_bt_link_info bt_link_info; } ;
typedef int s8 ;
struct TYPE_4__ {int cur_ps_tdma_on; int cur_ps_tdma; int pre_ps_tdma_on; scalar_t__ pre_ps_tdma; } ;
struct TYPE_3__ {int scan_ap_num; int a2dp_bit_pool; int force_lps_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (struct btc_coexist*,int ,int ,int,int) ;
 int FUNC_1 (struct btc_coexist*,int,int,int,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct btc_coexist *VAR_6,
        bool VAR_7, bool VAR_8, u8 VAR_9)
{
 struct btc_bt_link_info *VAR_10 = &VAR_6->bt_link_info;
 bool VAR_11 = 0;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0x51;
 u8 VAR_14 = 0x10;
 u8 VAR_15 = 0x50;
 s8 VAR_16 = 0x0;
 static bool VAR_17;

 VAR_4->cur_ps_tdma_on = VAR_8;
 VAR_4->cur_ps_tdma = VAR_9;

 VAR_6->btc_get(VAR_6, VAR_1, &VAR_11);

 if (VAR_11 != VAR_17) {
  VAR_7 = 1;
  VAR_17 = VAR_11;
 }

 if (!VAR_7) {
  if ((VAR_4->pre_ps_tdma_on == VAR_4->cur_ps_tdma_on) &&
      (VAR_4->pre_ps_tdma == VAR_4->cur_ps_tdma))
   return;
 }

 if (VAR_5->scan_ap_num <= 5) {
  VAR_16 = 5;

  if (VAR_5->a2dp_bit_pool >= 35)
   VAR_16 = -10;
  else if (VAR_5->a2dp_bit_pool >= 45)
   VAR_16 = -15;
 } else if (VAR_5->scan_ap_num >= 40) {
  VAR_16 = -15;

  if (VAR_5->a2dp_bit_pool < 35)
   VAR_16 = -5;
  else if (VAR_5->a2dp_bit_pool < 45)
   VAR_16 = -10;
 } else if (VAR_5->scan_ap_num >= 20) {
  VAR_16 = -10;

  if (VAR_5->a2dp_bit_pool >= 45)
   VAR_16 = -15;
 } else {
  VAR_16 = 0;

  if (VAR_5->a2dp_bit_pool >= 35)
   VAR_16 = -10;
  else if (VAR_5->a2dp_bit_pool >= 45)
   VAR_16 = -15;
 }

 if ((VAR_9 == 1) || (VAR_9 == 2) || (VAR_9 == 9) || (VAR_9 == 11) ||
     (VAR_9 == 101) || (VAR_9 == 102) || (VAR_9 == 109) || (VAR_9 == 111)) {
  if (!VAR_5->force_lps_on) {





   VAR_13 = 0x61;

   VAR_14 = 0x11;

   VAR_15 = 0x10;
  } else {

   VAR_13 = 0x51;

   VAR_14 = 0x10;

   VAR_15 = 0x50;
  }
 } else if ((VAR_9 == 3) || (VAR_9 == 13) || (VAR_9 == 14) ||
     (VAR_9 == 103) || (VAR_9 == 113) || (VAR_9 == 114)) {

  VAR_13 = 0x51;

  VAR_14 = 0x10;

  VAR_15 = 0x10;
 } else {

  VAR_13 = 0x61;

  VAR_14 = 0x11;

  VAR_15 = 0x11;

 }


 if ((VAR_10->slave_role) && (VAR_10->a2dp_exist))

  VAR_15 = VAR_15 | 0x1;

 if (VAR_9 > 100) {

  VAR_13 = VAR_13 | 0x82;

  VAR_14 = VAR_14 | 0x60;
 }

 if (VAR_8) {
  switch (VAR_9) {
  default:
   FUNC_1(VAR_6, 0x51, 0x1a,
            0x1a, 0x0,
            VAR_15);
   break;
  case 1:
   FUNC_1(
    VAR_6, VAR_13,
    0x3a + VAR_16, 0x03,
    VAR_14, VAR_15);

   VAR_12 = 11;
   break;
  case 2:
   FUNC_1(
    VAR_6, VAR_13,
    0x2d + VAR_16, 0x03,
    VAR_14, VAR_15);
   break;
  case 3:
   FUNC_1(
    VAR_6, VAR_13, 0x30, 0x03,
    VAR_14, VAR_15);
   break;
  case 4:
   FUNC_1(VAR_6, 0x93, 0x15,
            0x3, 0x14, 0x0);
   break;
  case 5:
   FUNC_1(
    VAR_6, VAR_13, 0x1f, 0x3,
    VAR_14, 0x11);
   break;
  case 6:
   FUNC_1(
    VAR_6, VAR_13, 0x20, 0x3,
    VAR_14, 0x11);
   break;
  case 7:
   FUNC_1(VAR_6, 0x13, 0xc,
             0x5, 0x0, 0x0);
   break;
  case 8:
   FUNC_1(VAR_6, 0x93, 0x25,
            0x3, 0x10, 0x0);
   break;
  case 9:
   FUNC_1(
    VAR_6, VAR_13, 0x21, 0x3,
    VAR_14, VAR_15);
   break;
  case 10:
   FUNC_1(VAR_6, 0x13, 0xa,
             0xa, 0x0, 0x40);
   break;
  case 11:
   FUNC_1(
    VAR_6, VAR_13, 0x21, 0x03,
    VAR_14, VAR_15);
   break;
  case 12:
   FUNC_1(VAR_6, 0x51, 0x0a,
            0x0a, 0x0, 0x50);
   break;
  case 13:
   if (VAR_5->scan_ap_num <= 3)
    FUNC_1(
     VAR_6, VAR_13, 0x40, 0x3,
     VAR_14, VAR_15);
   else
    FUNC_1(
     VAR_6, VAR_13, 0x21, 0x3,
     VAR_14, VAR_15);
   break;
  case 14:
   if (VAR_5->scan_ap_num <= 3)
    FUNC_1(
     VAR_6, 0x51, 0x30, 0x3, 0x10, 0x50);
   else
    FUNC_1(
     VAR_6, VAR_13, 0x21, 0x3,
     VAR_14, VAR_15);
   break;
  case 15:
   FUNC_1(VAR_6, 0x13, 0xa,
             0x3, 0x8, 0x0);
   break;
  case 16:
   FUNC_1(VAR_6, 0x93, 0x15,
            0x3, 0x10, 0x0);
   break;
  case 18:
   FUNC_1(VAR_6, 0x93, 0x25,
            0x3, 0x10, 0x0);
   break;
  case 20:
   FUNC_1(
    VAR_6, VAR_13, 0x3f, 0x03,
    VAR_14, 0x10);
   break;
  case 21:
   FUNC_1(VAR_6, 0x61, 0x25,
            0x03, 0x11, 0x11);
   break;
  case 22:
   FUNC_1(
    VAR_6, VAR_13, 0x25, 0x03,
    VAR_14, 0x10);
   break;
  case 23:
   FUNC_1(VAR_6, 0xe3, 0x25,
            0x3, 0x31, 0x18);
   break;
  case 24:
   FUNC_1(VAR_6, 0xe3, 0x15,
            0x3, 0x31, 0x18);
   break;
  case 25:
   FUNC_1(VAR_6, 0xe3, 0xa,
             0x3, 0x31, 0x18);
   break;
  case 26:
   FUNC_1(VAR_6, 0xe3, 0xa,
             0x3, 0x31, 0x18);
   break;
  case 27:
   FUNC_1(VAR_6, 0xe3, 0x25,
            0x3, 0x31, 0x98);
   break;
  case 28:
   FUNC_1(VAR_6, 0x69, 0x25,
            0x3, 0x31, 0x0);
   break;
  case 29:
   FUNC_1(VAR_6, 0xab, 0x1a,
            0x1a, 0x1, 0x10);
   break;
  case 30:
   FUNC_1(VAR_6, 0x51, 0x30,
             0x3, 0x10, 0x10);
   break;
  case 31:
   FUNC_1(VAR_6, 0xd3, 0x1a,
            0x1a, 0, 0x58);
   break;
  case 32:
   FUNC_1(
    VAR_6, VAR_13, 0x35, 0x3,
    VAR_14, VAR_15);
   break;
  case 33:
   FUNC_1(
    VAR_6, VAR_13, 0x35, 0x3,
    VAR_14, 0x10);
   break;
  case 34:
   FUNC_1(VAR_6, 0x53, 0x1a,
            0x1a, 0x0, 0x10);
   break;
  case 35:
   FUNC_1(VAR_6, 0x63, 0x1a,
            0x1a, 0x0, 0x10);
   break;
  case 36:
   FUNC_1(VAR_6, 0xd3, 0x12,
            0x3, 0x14, 0x50);
   break;
  case 40:






   FUNC_1(VAR_6, 0x23, 0x18,
            0x00, 0x10, 0x24);
   break;

  case 101:

   FUNC_1(
    VAR_6, VAR_13,
    0x3a + VAR_16, 0x03,
    VAR_14, VAR_15);
   break;
  case 102:
   FUNC_1(
    VAR_6, VAR_13,
    0x2d + VAR_16, 0x03,
    VAR_14, VAR_15);
   break;
  case 103:
   FUNC_1(
    VAR_6, VAR_13, 0x3a, 0x03,
    VAR_14, VAR_15);
   break;
  case 105:
   FUNC_1(
    VAR_6, VAR_13, 0x15, 0x3,
    VAR_14, 0x11);
   break;
  case 106:
   FUNC_1(
    VAR_6, VAR_13, 0x20, 0x3,
    VAR_14, 0x11);
   break;
  case 109:
   FUNC_1(
    VAR_6, VAR_13, 0x21, 0x3,
    VAR_14, VAR_15);
   break;
  case 111:
   FUNC_1(
    VAR_6, VAR_13, 0x21, 0x03,
    VAR_14, VAR_15);
   break;
  case 113:
   FUNC_1(
    VAR_6, VAR_13, 0x21, 0x3,
    VAR_14, VAR_15);
   break;
  case 114:
   FUNC_1(
    VAR_6, VAR_13, 0x21, 0x3,
    VAR_14, VAR_15);
   break;
  case 120:
   FUNC_1(
    VAR_6, VAR_13, 0x3f, 0x03,
    VAR_14, 0x10);
   break;
  case 122:
   FUNC_1(
    VAR_6, VAR_13, 0x25, 0x03,
    VAR_14, 0x10);
   break;
  case 132:
   FUNC_1(
    VAR_6, VAR_13, 0x25, 0x03,
    VAR_14, VAR_15);
   break;
  case 133:
   FUNC_1(
    VAR_6, VAR_13, 0x25, 0x03,
    VAR_14, 0x11);
   break;
  }
 } else {

  switch (VAR_9) {
  case 8:
   FUNC_1(VAR_6, 0x8, 0x0,
             0x0, 0x0, 0x0);
   FUNC_0(VAR_6,
           VAR_0,
           VAR_3,
           0, 0);
   break;
  case 0:
  default:

   FUNC_1(VAR_6, 0x0, 0x0,
             0x0, 0x0, 0x0);
   break;
  case 1:
   FUNC_1(VAR_6, 0x0, 0x0, 0x0,
             0x48, 0x0);
   break;
  }
 }
 VAR_12 = 0;
 VAR_6->btc_set(VAR_6,
      VAR_2,
      &VAR_12);


 VAR_4->pre_ps_tdma_on = VAR_4->cur_ps_tdma_on;
 VAR_4->pre_ps_tdma = VAR_4->cur_ps_tdma;
}
