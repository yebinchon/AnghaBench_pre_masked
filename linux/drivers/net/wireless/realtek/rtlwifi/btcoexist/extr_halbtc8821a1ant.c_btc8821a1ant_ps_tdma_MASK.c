
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int cur_ps_tdma_on; int cur_ps_tdma; int pre_ps_tdma_on; scalar_t__ pre_ps_tdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (struct btc_coexist*,int ,int,int) ;
 int FUNC_2 (struct btc_coexist*,int,int,int,int,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct btc_coexist *VAR_7,
     bool VAR_8, bool VAR_9, u8 VAR_10)
{
 struct rtl_priv *VAR_11 = VAR_7->adapter;
 u8 VAR_12 = 0;

 VAR_6->cur_ps_tdma_on = VAR_9;
 VAR_6->cur_ps_tdma = VAR_10;

 if (!VAR_8) {
  if (VAR_6->cur_ps_tdma_on) {
   FUNC_0(VAR_11, VAR_4, VAR_5,
     "[BTCoex], ********** TDMA(on, %d) **********\n",
     VAR_6->cur_ps_tdma);
  } else {
   FUNC_0(VAR_11, VAR_4, VAR_5,
     "[BTCoex], ********** TDMA(off, %d) **********\n",
     VAR_6->cur_ps_tdma);
  }
  if ((VAR_6->pre_ps_tdma_on == VAR_6->cur_ps_tdma_on) &&
      (VAR_6->pre_ps_tdma == VAR_6->cur_ps_tdma))
   return;
 }
 if (VAR_9) {
  switch (VAR_10) {
  default:
   FUNC_2(VAR_7, 0x51, 0x1a,
          0x1a, 0x0, 0x50);
   break;
  case 1:
   FUNC_2(VAR_7, 0x51, 0x3a,
          0x03, 0x10, 0x50);
   VAR_12 = 11;
   break;
  case 2:
   FUNC_2(VAR_7, 0x51, 0x2b,
          0x03, 0x10, 0x50);
   VAR_12 = 14;
   break;
  case 3:
   FUNC_2(VAR_7, 0x51, 0x1d,
          0x1d, 0x0, 0x10);
   break;
  case 4:
   FUNC_2(VAR_7, 0x93, 0x15,
          0x3, 0x14, 0x0);
   VAR_12 = 17;
   break;
  case 5:
   FUNC_2(VAR_7, 0x61, 0x15,
          0x3, 0x11, 0x10);
   break;
  case 6:
   FUNC_2(VAR_7, 0x61, 0x20,
          0x3, 0x11, 0x13);
   break;
  case 7:
   FUNC_2(VAR_7, 0x13, 0xc,
          0x5, 0x0, 0x0);
   break;
  case 8:
   FUNC_2(VAR_7, 0x93, 0x25,
          0x3, 0x10, 0x0);
   break;
  case 9:
   FUNC_2(VAR_7, 0x51, 0x21,
          0x3, 0x10, 0x50);
   VAR_12 = 18;
   break;
  case 10:
   FUNC_2(VAR_7, 0x13, 0xa,
          0xa, 0x0, 0x40);
   break;
  case 11:
   FUNC_2(VAR_7, 0x51, 0x15,
          0x03, 0x10, 0x50);
   VAR_12 = 20;
   break;
  case 12:
   FUNC_2(VAR_7, 0x51, 0x0a,
          0x0a, 0x0, 0x50);
   break;
  case 13:
   FUNC_2(VAR_7, 0x51, 0x12,
          0x12, 0x0, 0x50);
   break;
  case 14:
   FUNC_2(VAR_7, 0x51, 0x1e,
          0x3, 0x10, 0x14);
   break;
  case 15:
   FUNC_2(VAR_7, 0x13, 0xa,
          0x3, 0x8, 0x0);
   break;
  case 16:
   FUNC_2(VAR_7, 0x93, 0x15,
          0x3, 0x10, 0x0);
   VAR_12 = 18;
   break;
  case 18:
   FUNC_2(VAR_7, 0x93, 0x25,
          0x3, 0x10, 0x0);
   VAR_12 = 14;
   break;
  case 20:
   FUNC_2(VAR_7, 0x61, 0x35,
          0x03, 0x11, 0x10);
   break;
  case 21:
   FUNC_2(VAR_7, 0x61, 0x25,
          0x03, 0x11, 0x11);
   break;
  case 22:
   FUNC_2(VAR_7, 0x61, 0x25,
          0x03, 0x11, 0x10);
   break;
  case 23:
   FUNC_2(VAR_7, 0xe3, 0x25,
          0x3, 0x31, 0x18);
   VAR_12 = 22;
   break;
  case 24:
   FUNC_2(VAR_7, 0xe3, 0x15,
          0x3, 0x31, 0x18);
   VAR_12 = 22;
   break;
  case 25:
   FUNC_2(VAR_7, 0xe3, 0xa,
          0x3, 0x31, 0x18);
   VAR_12 = 22;
   break;
  case 26:
   FUNC_2(VAR_7, 0xe3, 0xa,
          0x3, 0x31, 0x18);
   VAR_12 = 22;
   break;
  case 27:
   FUNC_2(VAR_7, 0xe3, 0x25,
          0x3, 0x31, 0x98);
   VAR_12 = 22;
   break;
  case 28:
   FUNC_2(VAR_7, 0x69, 0x25,
          0x3, 0x31, 0x0);
   break;
  case 29:
   FUNC_2(VAR_7, 0xab, 0x1a,
          0x1a, 0x1, 0x10);
   break;
  case 30:
   FUNC_2(VAR_7, 0x51, 0x30,
          0x3, 0x10, 0x10);
   break;
  case 31:
   FUNC_2(VAR_7, 0xd3, 0x1a,
          0x1a, 0, 0x58);
   break;
  case 32:
   FUNC_2(VAR_7, 0x61, 0x35,
          0x3, 0x11, 0x11);
   break;
  case 33:
   FUNC_2(VAR_7, 0xa3, 0x25,
          0x3, 0x30, 0x90);
   break;
  case 34:
   FUNC_2(VAR_7, 0x53, 0x1a,
          0x1a, 0x0, 0x10);
   break;
  case 35:
   FUNC_2(VAR_7, 0x63, 0x1a,
          0x1a, 0x0, 0x10);
   break;
  case 36:
   FUNC_2(VAR_7, 0xd3, 0x12,
          0x3, 0x14, 0x50);
   break;
  case 40:






   FUNC_2(VAR_7, 0x23, 0x18,
          0x00, 0x10, 0x24);
   break;
  case 41:
   FUNC_2(VAR_7, 0x51, 0x15,
          0x3, 0x11, 0x11);
   break;
  case 42:
   FUNC_2(VAR_7, 0x51, 0x20,
          0x3, 0x11, 0x11);
   break;
  case 43:
   FUNC_2(VAR_7, 0x51, 0x30,
          0x3, 0x10, 0x11);
   break;
  }
 } else {

  switch (VAR_10) {
  case 8:

   FUNC_2(VAR_7, 0x8, 0x0, 0x0,
          0x0, 0x0);
   FUNC_1(VAR_7, VAR_1,
        0, 0);
   break;
  case 0:
  default:

   FUNC_2(VAR_7, 0x0, 0x0, 0x0,
          0x0, 0x0);
   FUNC_1(VAR_7, VAR_0,
        0, 0);
   break;
  case 9:

   FUNC_2(VAR_7, 0x0, 0x0, 0x0,
          0x0, 0x0);
   FUNC_1(VAR_7, VAR_2,
        0, 0);
   break;
  case 10:

   FUNC_2(VAR_7, 0x0, 0x0, 0x0,
          0x8, 0x0);
   FUNC_1(VAR_7, VAR_0,
        0, 0);
   break;
  }
 }
 VAR_12 = 0;
 VAR_7->btc_set(VAR_7,
   VAR_3, &VAR_12);


 VAR_6->pre_ps_tdma_on = VAR_6->cur_ps_tdma_on;
 VAR_6->pre_ps_tdma = VAR_6->cur_ps_tdma;
}
