
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_2__ {int cur_ps_tdma_on; int cur_ps_tdma; int pre_ps_tdma_on; int pre_ps_tdma; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (struct btc_coexist*,int,int ,int ) ;
 int FUNC_3 (struct btc_coexist*,int,int,int,int,int) ;
 int FUNC_4 (struct btc_coexist*,int,int,int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_5(struct btc_coexist *VAR_5,
     bool VAR_6, bool VAR_7, u8 VAR_8)
{
 struct rtl_priv *VAR_9 = VAR_5->adapter;

 u8 VAR_10, VAR_11;

 VAR_10 = FUNC_4(VAR_5, 1, 2,
    VAR_1, 0);
 VAR_11 = FUNC_2(VAR_5, 2,
    VAR_0, 0);

 if (!(FUNC_0(VAR_10) &&
       FUNC_0(VAR_11)) &&
     VAR_7) {

  VAR_8 = VAR_8 + 100;
 }

 FUNC_1(VAR_9, VAR_2, VAR_3,
   "[BTCoex], %s turn %s PS TDMA, type = %d\n",
   (VAR_6 ? "force to" : ""), (VAR_7 ? "ON" : "OFF"),
   VAR_8);
 VAR_4->cur_ps_tdma_on = VAR_7;
 VAR_4->cur_ps_tdma = VAR_8;

 if (!VAR_6) {
  FUNC_1(VAR_9, VAR_2, VAR_3,
    "[BTCoex], pre_ps_tdma_on = %d, cur_ps_tdma_on = %d!!\n",
    VAR_4->pre_ps_tdma_on, VAR_4->cur_ps_tdma_on);
  FUNC_1(VAR_9, VAR_2, VAR_3,
    "[BTCoex], pre_ps_tdma = %d, cur_ps_tdma = %d!!\n",
    VAR_4->pre_ps_tdma, VAR_4->cur_ps_tdma);

  if ((VAR_4->pre_ps_tdma_on == VAR_4->cur_ps_tdma_on) &&
      (VAR_4->pre_ps_tdma == VAR_4->cur_ps_tdma))
   return;
 }
 if (VAR_7) {
  switch (VAR_8) {
  case 1:
  default:
   FUNC_3(VAR_5, 0xe3, 0x3c,
          0x03, 0xf1, 0x90);
   break;
  case 2:
   FUNC_3(VAR_5, 0xe3, 0x2d,
          0x03, 0xf1, 0x90);
   break;
  case 3:
   FUNC_3(VAR_5, 0xe3, 0x1c,
          0x3, 0xf1, 0x90);
   break;
  case 4:
   FUNC_3(VAR_5, 0xe3, 0x10,
          0x03, 0xf1, 0x90);
   break;
  case 5:
   FUNC_3(VAR_5, 0xe3, 0x3c,
          0x3, 0x70, 0x90);
   break;
  case 6:
   FUNC_3(VAR_5, 0xe3, 0x2d,
          0x3, 0x70, 0x90);
   break;
  case 7:
   FUNC_3(VAR_5, 0xe3, 0x1c,
          0x3, 0x70, 0x90);
   break;
  case 8:
   FUNC_3(VAR_5, 0xa3, 0x10,
          0x3, 0x70, 0x90);
   break;
  case 9:
   FUNC_3(VAR_5, 0xe3, 0x3c,
          0x03, 0xf1, 0x90);
   break;
  case 10:
   FUNC_3(VAR_5, 0xe3, 0x2d,
          0x03, 0xf1, 0x90);
   break;
  case 11:
   FUNC_3(VAR_5, 0xe3, 0x1c,
          0x3, 0xf1, 0x90);
   break;
  case 12:
   FUNC_3(VAR_5, 0xe3, 0x10,
          0x3, 0xf1, 0x90);
   break;
  case 13:
   FUNC_3(VAR_5, 0xe3, 0x3c,
          0x3, 0x70, 0x90);
   break;
  case 14:
   FUNC_3(VAR_5, 0xe3, 0x2d,
          0x3, 0x70, 0x90);
   break;
  case 15:
   FUNC_3(VAR_5, 0xe3, 0x1c,
          0x3, 0x70, 0x90);
   break;
  case 16:
   FUNC_3(VAR_5, 0xe3, 0x10,
          0x3, 0x70, 0x90);
   break;
  case 17:
   FUNC_3(VAR_5, 0xa3, 0x2f,
          0x2f, 0x60, 0x90);
   break;
  case 18:
   FUNC_3(VAR_5, 0xe3, 0x5, 0x5,
          0xe1, 0x90);
   break;
  case 19:
   FUNC_3(VAR_5, 0xe3, 0x25,
          0x25, 0xe1, 0x90);
   break;
  case 20:
   FUNC_3(VAR_5, 0xe3, 0x25,
          0x25, 0x60, 0x90);
   break;
  case 21:
   FUNC_3(VAR_5, 0xe3, 0x15,
          0x03, 0x70, 0x90);
   break;
  case 23:
   FUNC_3(VAR_5, 0xe3, 0x1e,
          0x03, 0xf0, 0x14);
   break;
  case 24:
  case 124:
   FUNC_3(VAR_5, 0xd3, 0x3c,
          0x03, 0x70, 0x50);
   break;
  case 25:
   FUNC_3(VAR_5, 0xe3, 0x14,
          0x03, 0xf1, 0x90);
   break;
  case 26:
   FUNC_3(VAR_5, 0xe3, 0x30,
          0x03, 0xf1, 0x90);
   break;
  case 71:
   FUNC_3(VAR_5, 0xe3, 0x3c,
          0x03, 0xf1, 0x90);
   break;
  case 101:
  case 105:
  case 171:
   FUNC_3(VAR_5, 0xd3, 0x3a,
          0x03, 0x70, 0x50);
   break;
  case 102:
  case 106:
  case 110:
  case 114:
   FUNC_3(VAR_5, 0xd3, 0x2d,
          0x03, 0x70, 0x50);
   break;
  case 103:
  case 107:
  case 111:
  case 115:
   FUNC_3(VAR_5, 0xd3, 0x1c,
          0x03, 0x70, 0x50);
   break;
  case 104:
  case 108:
  case 112:
  case 116:
   FUNC_3(VAR_5, 0xd3, 0x10,
          0x03, 0x70, 0x50);
   break;
  case 109:
   FUNC_3(VAR_5, 0xe3, 0x3c,
          0x03, 0xf1, 0x90);
   break;
  case 113:
   FUNC_3(VAR_5, 0xe3, 0x3c,
          0x03, 0x70, 0x90);
   break;
  case 121:
   FUNC_3(VAR_5, 0xe3, 0x15,
          0x03, 0x70, 0x90);
   break;
  case 22:
  case 122:
   FUNC_3(VAR_5, 0xe3, 0x35,
          0x03, 0x71, 0x11);
   break;
  case 123:
   FUNC_3(VAR_5, 0xd3, 0x1c,
          0x03, 0x70, 0x54);
   break;
  case 125:
   FUNC_3(VAR_5, 0xd3, 0x14,
          0x03, 0x70, 0x50);
   break;
  case 126:
   FUNC_3(VAR_5, 0xd3, 0x30,
          0x03, 0x70, 0x50);
   break;
  }
 } else {

  switch (VAR_8) {
  case 0:
   FUNC_3(VAR_5, 0x0, 0x0, 0x0,
          0x40, 0x0);
   break;
  case 1:
   FUNC_3(VAR_5, 0x0, 0x0, 0x0,
          0x48, 0x0);
   break;
  default:
   FUNC_3(VAR_5, 0x0, 0x0, 0x0,
          0x40, 0x0);
   break;
  }
 }


 VAR_4->pre_ps_tdma_on = VAR_4->cur_ps_tdma_on;
 VAR_4->pre_ps_tdma = VAR_4->cur_ps_tdma;
}
