
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int cur_ps_tdma_on; int cur_ps_tdma; int pre_ps_tdma_on; int pre_ps_tdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct btc_coexist*,int,int,int,int,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct btc_coexist*,int,int) ;
 int FUNC_4 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_5(struct btc_coexist *VAR_3,
     bool VAR_4, bool VAR_5, u8 VAR_6)
{
 struct rtl_priv *VAR_7 = VAR_3->adapter;

 FUNC_0(VAR_7, VAR_0, VAR_1,
   "[BTCoex], %s turn %s PS TDMA, type=%d\n",
   (VAR_4 ? "force to" : ""),
   (VAR_5 ? "ON" : "OFF"), VAR_6);
 VAR_2->cur_ps_tdma_on = VAR_5;
 VAR_2->cur_ps_tdma = VAR_6;

 if (!VAR_4) {
  FUNC_0(VAR_7, VAR_0, VAR_1,
    "[BTCoex], bPrePsTdmaOn = %d, bCurPsTdmaOn = %d!!\n",
    VAR_2->pre_ps_tdma_on, VAR_2->cur_ps_tdma_on);
  FUNC_0(VAR_7, VAR_0, VAR_1,
    "[BTCoex], prePsTdma = %d, curPsTdma = %d!!\n",
    VAR_2->pre_ps_tdma, VAR_2->cur_ps_tdma);

  if ((VAR_2->pre_ps_tdma_on == VAR_2->cur_ps_tdma_on) &&
      (VAR_2->pre_ps_tdma == VAR_2->cur_ps_tdma))
   return;
 }
 if (VAR_5) {
  switch (VAR_6) {
  case 1:
  default:
   FUNC_1(VAR_3, 0xe3, 0x1a,
          0x1a, 0xe1, 0x90);
   break;
  case 2:
   FUNC_1(VAR_3, 0xe3, 0x12,
          0x12, 0xe1, 0x90);
   break;
  case 3:
   FUNC_1(VAR_3, 0xe3, 0x1c,
          0x3, 0xf1, 0x90);
   break;
  case 4:
   FUNC_1(VAR_3, 0xe3, 0x10,
          0x3, 0xf1, 0x90);
   break;
  case 5:
   FUNC_1(VAR_3, 0xe3, 0x1a,
          0x1a, 0x60, 0x90);
   break;
  case 6:
   FUNC_1(VAR_3, 0xe3, 0x12,
          0x12, 0x60, 0x90);
   break;
  case 7:
   FUNC_1(VAR_3, 0xe3, 0x1c,
          0x3, 0x70, 0x90);
   break;
  case 8:
   FUNC_1(VAR_3, 0xa3, 0x10,
          0x3, 0x70, 0x90);
   break;
  case 9:
   FUNC_1(VAR_3, 0xe3, 0x1a,
          0x1a, 0xe1, 0x10);
   break;
  case 10:
   FUNC_1(VAR_3, 0xe3, 0x12,
          0x12, 0xe1, 0x10);
   break;
  case 11:
   FUNC_1(VAR_3, 0xe3, 0x1c,
          0x3, 0xf1, 0x10);
   break;
  case 12:
   FUNC_1(VAR_3, 0xe3, 0x10,
          0x3, 0xf1, 0x10);
   break;
  case 13:
   FUNC_1(VAR_3, 0xe3, 0x1a,
          0x1a, 0xe0, 0x10);
   break;
  case 14:
   FUNC_1(VAR_3, 0xe3, 0x12,
          0x12, 0xe0, 0x10);
   break;
  case 15:
   FUNC_1(VAR_3, 0xe3, 0x1c,
          0x3, 0xf0, 0x10);
   break;
  case 16:
   FUNC_1(VAR_3, 0xe3, 0x12,
          0x3, 0xf0, 0x10);
   break;
  case 17:
   FUNC_1(VAR_3, 0x61, 0x20,
          0x03, 0x10, 0x10);
   break;
  case 18:
   FUNC_1(VAR_3, 0xe3, 0x5,
          0x5, 0xe1, 0x90);
   break;
  case 19:
   FUNC_1(VAR_3, 0xe3, 0x25,
          0x25, 0xe1, 0x90);
   break;
  case 20:
   FUNC_1(VAR_3, 0xe3, 0x25,
          0x25, 0x60, 0x90);
   break;
  case 21:
   FUNC_1(VAR_3, 0xe3, 0x15,
          0x03, 0x70, 0x90);
   break;
  case 71:
   FUNC_1(VAR_3, 0xe3, 0x1a,
          0x1a, 0xe1, 0x90);
   break;
  }
 } else {

  switch (VAR_6) {
  default:
  case 0:
   FUNC_1(VAR_3, 0x8, 0x0, 0x0,
          0x0, 0x0);
   VAR_3->btc_write_1byte(VAR_3, 0x92c, 0x4);
   break;
  case 1:
   FUNC_1(VAR_3, 0x0, 0x0, 0x0,
          0x8, 0x0);
   FUNC_2(5);
   VAR_3->btc_write_1byte(VAR_3, 0x92c, 0x20);
   break;
  }
 }


 VAR_2->pre_ps_tdma_on = VAR_2->cur_ps_tdma_on;
 VAR_2->pre_ps_tdma = VAR_2->cur_ps_tdma;
}
