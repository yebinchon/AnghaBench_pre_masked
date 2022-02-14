
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_4__ {int auto_tdma_adjust; int ps_tdma_du_adj_type; int cur_ps_tdma; } ;
struct TYPE_3__ {int bt_retry_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct btc_coexist*,int ,int,int) ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (struct btc_coexist*,int ,int*) ;
 int FUNC_3 (struct btc_coexist*,int ,int*) ;
 int FUNC_4 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct btc_coexist *VAR_8,
           bool VAR_9, bool VAR_10,
           u8 VAR_11)
{
 struct rtl_priv *VAR_12 = VAR_8->adapter;
 static long VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;




 int VAR_18;
 u8 VAR_19 = 0;

 FUNC_0(VAR_12, VAR_3, VAR_4,
   "[BTCoex], TdmaDurationAdjust()\n");

 if (VAR_6->auto_tdma_adjust) {
  VAR_6->auto_tdma_adjust = 0;
  FUNC_0(VAR_12, VAR_3, VAR_4,
    "[BTCoex], first run TdmaDurationAdjust()!!\n");
  if (VAR_9) {
   if (VAR_10) {
    if (VAR_11 == 1) {
     FUNC_1(VAR_8,
       VAR_5, 1, 13);
     VAR_6->ps_tdma_du_adj_type = 13;
    } else if (VAR_11 == 2) {
     FUNC_1(VAR_8,
       VAR_5, 1, 14);
     VAR_6->ps_tdma_du_adj_type = 14;
    } else if (VAR_11 == 3) {
     FUNC_1(VAR_8,
       VAR_5, 1, 15);
     VAR_6->ps_tdma_du_adj_type = 15;
    } else {
     FUNC_1(VAR_8,
       VAR_5, 1, 15);
     VAR_6->ps_tdma_du_adj_type = 15;
    }
   } else {
    if (VAR_11 == 1) {
     FUNC_1(VAR_8,
       VAR_5, 1, 9);
     VAR_6->ps_tdma_du_adj_type = 9;
    } else if (VAR_11 == 2) {
     FUNC_1(VAR_8,
       VAR_5, 1, 10);
     VAR_6->ps_tdma_du_adj_type = 10;
    } else if (VAR_11 == 3) {
     FUNC_1(VAR_8,
       VAR_5, 1, 11);
     VAR_6->ps_tdma_du_adj_type = 11;
    } else {
     FUNC_1(VAR_8,
       VAR_5, 1, 11);
     VAR_6->ps_tdma_du_adj_type = 11;
    }
   }
  } else {
   if (VAR_10) {
    if (VAR_11 == 1) {
     FUNC_1(VAR_8,
       VAR_5, 1, 5);
     VAR_6->ps_tdma_du_adj_type = 5;
    } else if (VAR_11 == 2) {
     FUNC_1(VAR_8,
       VAR_5, 1, 6);
     VAR_6->ps_tdma_du_adj_type = 6;
    } else if (VAR_11 == 3) {
     FUNC_1(VAR_8,
       VAR_5, 1, 7);
     VAR_6->ps_tdma_du_adj_type = 7;
    } else {
     FUNC_1(VAR_8,
       VAR_5, 1, 7);
     VAR_6->ps_tdma_du_adj_type = 7;
    }
   } else {
    if (VAR_11 == 1) {
     FUNC_1(VAR_8,
       VAR_5, 1, 1);
     VAR_6->ps_tdma_du_adj_type = 1;
    } else if (VAR_11 == 2) {
     FUNC_1(VAR_8,
       VAR_5, 1, 2);
     VAR_6->ps_tdma_du_adj_type = 2;
    } else if (VAR_11 == 3) {
     FUNC_1(VAR_8,
       VAR_5, 1, 3);
     VAR_6->ps_tdma_du_adj_type = 3;
    } else {
     FUNC_1(VAR_8,
       VAR_5, 1, 3);
     VAR_6->ps_tdma_du_adj_type = 3;
    }
   }
  }

  VAR_13 = 0;
  VAR_14 = 0;
  VAR_15 = 1;
  VAR_16 = 3;
  VAR_18 = 0;
  VAR_17 = 0;
 } else {

  VAR_19 = VAR_7->bt_retry_cnt;
  FUNC_0(VAR_12, VAR_3, VAR_4,
    "[BTCoex], retry_count = %d\n", VAR_19);
  FUNC_0(VAR_12, VAR_3, VAR_4,
    "[BTCoex], up = %d, dn = %d, m = %d, n = %d, wait_count = %d\n",
       (int)VAR_13, (int)VAR_14, (int)VAR_15, (int)VAR_16, (int)VAR_17);
  VAR_18 = 0;
  VAR_17++;

  if (VAR_19 == 0) {

   VAR_13++;
   VAR_14--;

   if (VAR_14 <= 0)
    VAR_14 = 0;

   if (VAR_13 >= VAR_16) {



    VAR_17 = 0;
    VAR_16 = 3;
    VAR_13 = 0;
    VAR_14 = 0;
    VAR_18 = 1;
    FUNC_0(VAR_12, VAR_3, VAR_4,
      "[BTCoex], Increase wifi duration!!\n");
   }
  } else if (VAR_19 <= 3) {

   VAR_13--;
   VAR_14++;

   if (VAR_13 <= 0)
    VAR_13 = 0;

   if (VAR_14 == 2) {



    if (VAR_17 <= 2)
     VAR_15++;
    else
     VAR_15 = 1;



    if (VAR_15 >= 20)
     VAR_15 = 20;

    VAR_16 = 3 * VAR_15;
    VAR_13 = 0;
    VAR_14 = 0;
    VAR_17 = 0;
    VAR_18 = -1;
    FUNC_0(VAR_12, VAR_3, VAR_4,
      "[BTCoex], Decrease wifi duration for retryCounter<3!!\n");
   }
  } else {



   if (VAR_17 == 1)
    VAR_15++;
   else
    VAR_15 = 1;



   if (VAR_15 >= 20)
    VAR_15 = 20;

   VAR_16 = 3 * VAR_15;
   VAR_13 = 0;
   VAR_14 = 0;
   VAR_17 = 0;
   VAR_18 = -1;
   FUNC_0(VAR_12, VAR_3, VAR_4,
     "[BTCoex], Decrease wifi duration for retryCounter>3!!\n");
  }

  FUNC_0(VAR_12, VAR_3, VAR_4,
    "[BTCoex], max Interval = %d\n", VAR_11);

  if (VAR_11 == 1) {
   if (VAR_10) {
    if (VAR_6->cur_ps_tdma == 71) {
     FUNC_1(VAR_8,
       VAR_5, 1, 5);
     VAR_6->ps_tdma_du_adj_type = 5;
    } else if (VAR_6->cur_ps_tdma == 1) {
     FUNC_1(VAR_8,
       VAR_5, 1, 5);
     VAR_6->ps_tdma_du_adj_type = 5;
    } else if (VAR_6->cur_ps_tdma == 2) {
     FUNC_1(VAR_8,
       VAR_5, 1, 6);
     VAR_6->ps_tdma_du_adj_type = 6;
    } else if (VAR_6->cur_ps_tdma == 3) {
     FUNC_1(VAR_8,
       VAR_5, 1, 7);
     VAR_6->ps_tdma_du_adj_type = 7;
    } else if (VAR_6->cur_ps_tdma == 4) {
     FUNC_1(VAR_8,
       VAR_5, 1, 8);
     VAR_6->ps_tdma_du_adj_type = 8;
    }
    if (VAR_6->cur_ps_tdma == 9) {
     FUNC_1(VAR_8,
       VAR_5, 1, 13);
     VAR_6->ps_tdma_du_adj_type = 13;
    } else if (VAR_6->cur_ps_tdma == 10) {
     FUNC_1(VAR_8,
       VAR_5, 1, 14);
     VAR_6->ps_tdma_du_adj_type = 14;
    } else if (VAR_6->cur_ps_tdma == 11) {
     FUNC_1(VAR_8,
       VAR_5, 1, 15);
     VAR_6->ps_tdma_du_adj_type = 15;
    } else if (VAR_6->cur_ps_tdma == 12) {
     FUNC_1(VAR_8,
       VAR_5, 1, 16);
     VAR_6->ps_tdma_du_adj_type = 16;
    }

    if (VAR_18 == -1) {
     if (VAR_6->cur_ps_tdma == 5) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 6);
      VAR_6->ps_tdma_du_adj_type =
       6;
     } else if (VAR_6->cur_ps_tdma == 6) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 7);
      VAR_6->ps_tdma_du_adj_type =
       7;
     } else if (VAR_6->cur_ps_tdma == 7) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 8);
      VAR_6->ps_tdma_du_adj_type =
       8;
     } else if (VAR_6->cur_ps_tdma == 13) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 14);
      VAR_6->ps_tdma_du_adj_type =
       14;
     } else if (VAR_6->cur_ps_tdma == 14) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 15);
      VAR_6->ps_tdma_du_adj_type =
       15;
     } else if (VAR_6->cur_ps_tdma == 15) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 16);
      VAR_6->ps_tdma_du_adj_type =
       16;
     }
    } else if (VAR_18 == 1) {
     if (VAR_6->cur_ps_tdma == 8) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 7);
      VAR_6->ps_tdma_du_adj_type =
       7;
     } else if (VAR_6->cur_ps_tdma == 7) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 6);
      VAR_6->ps_tdma_du_adj_type =
       6;
     } else if (VAR_6->cur_ps_tdma == 6) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 5);
      VAR_6->ps_tdma_du_adj_type =
       5;
     } else if (VAR_6->cur_ps_tdma == 16) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 15);
      VAR_6->ps_tdma_du_adj_type =
       15;
     } else if (VAR_6->cur_ps_tdma == 15) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 14);
      VAR_6->ps_tdma_du_adj_type =
       14;
     } else if (VAR_6->cur_ps_tdma == 14) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 13);
      VAR_6->ps_tdma_du_adj_type =
       13;
     }
    }
   } else {
    if (VAR_6->cur_ps_tdma == 5) {
     FUNC_1(VAR_8,
       VAR_5, 1, 71);
     VAR_6->ps_tdma_du_adj_type = 71;
    } else if (VAR_6->cur_ps_tdma == 6) {
     FUNC_1(VAR_8,
       VAR_5, 1, 2);
     VAR_6->ps_tdma_du_adj_type = 2;
    } else if (VAR_6->cur_ps_tdma == 7) {
     FUNC_1(VAR_8,
       VAR_5, 1, 3);
     VAR_6->ps_tdma_du_adj_type = 3;
    } else if (VAR_6->cur_ps_tdma == 8) {
     FUNC_1(VAR_8,
       VAR_5, 1, 4);
     VAR_6->ps_tdma_du_adj_type = 4;
    }
    if (VAR_6->cur_ps_tdma == 13) {
     FUNC_1(VAR_8,
       VAR_5, 1, 9);
     VAR_6->ps_tdma_du_adj_type = 9;
    } else if (VAR_6->cur_ps_tdma == 14) {
     FUNC_1(VAR_8,
       VAR_5, 1, 10);
     VAR_6->ps_tdma_du_adj_type = 10;
    } else if (VAR_6->cur_ps_tdma == 15) {
     FUNC_1(VAR_8,
       VAR_5, 1, 11);
     VAR_6->ps_tdma_du_adj_type = 11;
    } else if (VAR_6->cur_ps_tdma == 16) {
     FUNC_1(VAR_8,
       VAR_5, 1, 12);
     VAR_6->ps_tdma_du_adj_type = 12;
    }

    if (VAR_18 == -1) {
     if (VAR_6->cur_ps_tdma == 71) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 1);
      VAR_6->ps_tdma_du_adj_type =
       1;
     } else if (VAR_6->cur_ps_tdma == 1) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 2);
      VAR_6->ps_tdma_du_adj_type =
       2;
     } else if (VAR_6->cur_ps_tdma == 2) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 3);
      VAR_6->ps_tdma_du_adj_type =
       3;
     } else if (VAR_6->cur_ps_tdma == 3) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 4);
      VAR_6->ps_tdma_du_adj_type =
       4;
     } else if (VAR_6->cur_ps_tdma == 9) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 10);
      VAR_6->ps_tdma_du_adj_type =
       10;
     } else if (VAR_6->cur_ps_tdma == 10) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 11);
      VAR_6->ps_tdma_du_adj_type =
       11;
     } else if (VAR_6->cur_ps_tdma == 11) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 12);
      VAR_6->ps_tdma_du_adj_type =
       12;
     }
    } else if (VAR_18 == 1) {
     if (VAR_6->cur_ps_tdma == 4) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 3);
      VAR_6->ps_tdma_du_adj_type =
       3;
     } else if (VAR_6->cur_ps_tdma == 3) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 2);
      VAR_6->ps_tdma_du_adj_type =
       2;
     } else if (VAR_6->cur_ps_tdma == 2) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 1);
      VAR_6->ps_tdma_du_adj_type =
       1;
     } else if (VAR_6->cur_ps_tdma == 1) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 71);
      VAR_6->ps_tdma_du_adj_type =
       71;
     } else if (VAR_6->cur_ps_tdma == 12) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 11);
      VAR_6->ps_tdma_du_adj_type =
       11;
     } else if (VAR_6->cur_ps_tdma == 11) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 10);
      VAR_6->ps_tdma_du_adj_type =
       10;
     } else if (VAR_6->cur_ps_tdma == 10) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 9);
      VAR_6->ps_tdma_du_adj_type =
       9;
     }
    }
   }
  } else if (VAR_11 == 2) {
   if (VAR_10) {
    if (VAR_6->cur_ps_tdma == 1) {
     FUNC_1(VAR_8,
       VAR_5, 1, 6);
     VAR_6->ps_tdma_du_adj_type = 6;
    } else if (VAR_6->cur_ps_tdma == 2) {
     FUNC_1(VAR_8,
       VAR_5, 1, 6);
     VAR_6->ps_tdma_du_adj_type = 6;
    } else if (VAR_6->cur_ps_tdma == 3) {
     FUNC_1(VAR_8,
       VAR_5, 1, 7);
     VAR_6->ps_tdma_du_adj_type = 7;
    } else if (VAR_6->cur_ps_tdma == 4) {
     FUNC_1(VAR_8,
       VAR_5, 1, 8);
     VAR_6->ps_tdma_du_adj_type = 8;
    }
    if (VAR_6->cur_ps_tdma == 9) {
     FUNC_1(VAR_8,
       VAR_5, 1, 14);
     VAR_6->ps_tdma_du_adj_type = 14;
    } else if (VAR_6->cur_ps_tdma == 10) {
     FUNC_1(VAR_8,
       VAR_5, 1, 14);
     VAR_6->ps_tdma_du_adj_type = 14;
    } else if (VAR_6->cur_ps_tdma == 11) {
     FUNC_1(VAR_8,
       VAR_5, 1, 15);
     VAR_6->ps_tdma_du_adj_type = 15;
    } else if (VAR_6->cur_ps_tdma == 12) {
     FUNC_1(VAR_8,
       VAR_5, 1, 16);
     VAR_6->ps_tdma_du_adj_type = 16;
    }
    if (VAR_18 == -1) {
     if (VAR_6->cur_ps_tdma == 5) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 6);
      VAR_6->ps_tdma_du_adj_type =
       6;
     } else if (VAR_6->cur_ps_tdma == 6) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 7);
      VAR_6->ps_tdma_du_adj_type =
       7;
     } else if (VAR_6->cur_ps_tdma == 7) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 8);
      VAR_6->ps_tdma_du_adj_type =
       8;
     } else if (VAR_6->cur_ps_tdma == 13) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 14);
      VAR_6->ps_tdma_du_adj_type =
       14;
     } else if (VAR_6->cur_ps_tdma == 14) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 15);
      VAR_6->ps_tdma_du_adj_type =
       15;
     } else if (VAR_6->cur_ps_tdma == 15) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 16);
      VAR_6->ps_tdma_du_adj_type =
       16;
     }
    } else if (VAR_18 == 1) {
     if (VAR_6->cur_ps_tdma == 8) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 7);
      VAR_6->ps_tdma_du_adj_type =
       7;
     } else if (VAR_6->cur_ps_tdma == 7) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 6);
      VAR_6->ps_tdma_du_adj_type =
       6;
     } else if (VAR_6->cur_ps_tdma == 6) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 6);
      VAR_6->ps_tdma_du_adj_type =
       6;
     } else if (VAR_6->cur_ps_tdma == 16) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 15);
      VAR_6->ps_tdma_du_adj_type =
       15;
     } else if (VAR_6->cur_ps_tdma == 15) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 14);
      VAR_6->ps_tdma_du_adj_type =
       14;
     } else if (VAR_6->cur_ps_tdma == 14) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 14);
      VAR_6->ps_tdma_du_adj_type =
       14;
     }
    }
   } else {
    if (VAR_6->cur_ps_tdma == 5) {
     FUNC_1(VAR_8,
       VAR_5, 1, 2);
     VAR_6->ps_tdma_du_adj_type = 2;
    } else if (VAR_6->cur_ps_tdma == 6) {
     FUNC_1(VAR_8,
       VAR_5, 1, 2);
     VAR_6->ps_tdma_du_adj_type = 2;
    } else if (VAR_6->cur_ps_tdma == 7) {
     FUNC_1(VAR_8,
       VAR_5, 1, 3);
     VAR_6->ps_tdma_du_adj_type = 3;
    } else if (VAR_6->cur_ps_tdma == 8) {
     FUNC_1(VAR_8,
       VAR_5, 1, 4);
     VAR_6->ps_tdma_du_adj_type = 4;
    }
    if (VAR_6->cur_ps_tdma == 13) {
     FUNC_1(VAR_8,
       VAR_5, 1, 10);
     VAR_6->ps_tdma_du_adj_type = 10;
    } else if (VAR_6->cur_ps_tdma == 14) {
     FUNC_1(VAR_8,
       VAR_5, 1, 10);
     VAR_6->ps_tdma_du_adj_type = 10;
    } else if (VAR_6->cur_ps_tdma == 15) {
     FUNC_1(VAR_8,
       VAR_5, 1, 11);
     VAR_6->ps_tdma_du_adj_type = 11;
    } else if (VAR_6->cur_ps_tdma == 16) {
     FUNC_1(VAR_8,
       VAR_5, 1, 12);
     VAR_6->ps_tdma_du_adj_type = 12;
    }
    if (VAR_18 == -1) {
     if (VAR_6->cur_ps_tdma == 1) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 2);
      VAR_6->ps_tdma_du_adj_type =
       2;
     } else if (VAR_6->cur_ps_tdma == 2) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 3);
      VAR_6->ps_tdma_du_adj_type =
       3;
     } else if (VAR_6->cur_ps_tdma == 3) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 4);
      VAR_6->ps_tdma_du_adj_type =
       4;
     } else if (VAR_6->cur_ps_tdma == 9) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 10);
      VAR_6->ps_tdma_du_adj_type =
       10;
     } else if (VAR_6->cur_ps_tdma == 10) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 11);
      VAR_6->ps_tdma_du_adj_type =
       11;
     } else if (VAR_6->cur_ps_tdma == 11) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 12);
      VAR_6->ps_tdma_du_adj_type =
       12;
     }
    } else if (VAR_18 == 1) {
     if (VAR_6->cur_ps_tdma == 4) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 3);
      VAR_6->ps_tdma_du_adj_type =
       3;
     } else if (VAR_6->cur_ps_tdma == 3) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 2);
      VAR_6->ps_tdma_du_adj_type =
       2;
     } else if (VAR_6->cur_ps_tdma == 2) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 2);
      VAR_6->ps_tdma_du_adj_type =
       2;
     } else if (VAR_6->cur_ps_tdma == 12) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 11);
      VAR_6->ps_tdma_du_adj_type =
       11;
     } else if (VAR_6->cur_ps_tdma == 11) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 10);
      VAR_6->ps_tdma_du_adj_type =
       10;
     } else if (VAR_6->cur_ps_tdma == 10) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 10);
      VAR_6->ps_tdma_du_adj_type =
       10;
     }
    }
   }
  } else if (VAR_11 == 3) {
   if (VAR_10) {
    if (VAR_6->cur_ps_tdma == 1) {
     FUNC_1(VAR_8,
       VAR_5, 1, 7);
     VAR_6->ps_tdma_du_adj_type = 7;
    } else if (VAR_6->cur_ps_tdma == 2) {
     FUNC_1(VAR_8,
       VAR_5, 1, 7);
     VAR_6->ps_tdma_du_adj_type = 7;
    } else if (VAR_6->cur_ps_tdma == 3) {
     FUNC_1(VAR_8,
       VAR_5, 1, 7);
     VAR_6->ps_tdma_du_adj_type = 7;
    } else if (VAR_6->cur_ps_tdma == 4) {
     FUNC_1(VAR_8,
       VAR_5, 1, 8);
     VAR_6->ps_tdma_du_adj_type = 8;
    }
    if (VAR_6->cur_ps_tdma == 9) {
     FUNC_1(VAR_8,
       VAR_5, 1, 15);
     VAR_6->ps_tdma_du_adj_type = 15;
    } else if (VAR_6->cur_ps_tdma == 10) {
     FUNC_1(VAR_8,
       VAR_5, 1, 15);
     VAR_6->ps_tdma_du_adj_type = 15;
    } else if (VAR_6->cur_ps_tdma == 11) {
     FUNC_1(VAR_8,
       VAR_5, 1, 15);
     VAR_6->ps_tdma_du_adj_type = 15;
    } else if (VAR_6->cur_ps_tdma == 12) {
     FUNC_1(VAR_8,
       VAR_5, 1, 16);
     VAR_6->ps_tdma_du_adj_type = 16;
    }
    if (VAR_18 == -1) {
     if (VAR_6->cur_ps_tdma == 5) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 7);
      VAR_6->ps_tdma_du_adj_type =
       7;
     } else if (VAR_6->cur_ps_tdma == 6) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 7);
      VAR_6->ps_tdma_du_adj_type =
       7;
     } else if (VAR_6->cur_ps_tdma == 7) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 8);
      VAR_6->ps_tdma_du_adj_type =
       8;
     } else if (VAR_6->cur_ps_tdma == 13) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 15);
      VAR_6->ps_tdma_du_adj_type =
       15;
     } else if (VAR_6->cur_ps_tdma == 14) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 15);
      VAR_6->ps_tdma_du_adj_type =
       15;
     } else if (VAR_6->cur_ps_tdma == 15) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 16);
      VAR_6->ps_tdma_du_adj_type =
       16;
     }
    } else if (VAR_18 == 1) {
     if (VAR_6->cur_ps_tdma == 8) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 7);
      VAR_6->ps_tdma_du_adj_type =
       7;
     } else if (VAR_6->cur_ps_tdma == 7) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 7);
      VAR_6->ps_tdma_du_adj_type =
       7;
     } else if (VAR_6->cur_ps_tdma == 6) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 7);
      VAR_6->ps_tdma_du_adj_type =
       7;
     } else if (VAR_6->cur_ps_tdma == 16) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 15);
      VAR_6->ps_tdma_du_adj_type =
       15;
     } else if (VAR_6->cur_ps_tdma == 15) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 15);
      VAR_6->ps_tdma_du_adj_type =
       15;
     } else if (VAR_6->cur_ps_tdma == 14) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 15);
      VAR_6->ps_tdma_du_adj_type =
       15;
     }
    }
   } else {
    if (VAR_6->cur_ps_tdma == 5) {
     FUNC_1(VAR_8,
       VAR_5, 1, 3);
     VAR_6->ps_tdma_du_adj_type = 3;
    } else if (VAR_6->cur_ps_tdma == 6) {
     FUNC_1(VAR_8,
       VAR_5, 1, 3);
     VAR_6->ps_tdma_du_adj_type = 3;
    } else if (VAR_6->cur_ps_tdma == 7) {
     FUNC_1(VAR_8,
       VAR_5, 1, 3);
     VAR_6->ps_tdma_du_adj_type = 3;
    } else if (VAR_6->cur_ps_tdma == 8) {
     FUNC_1(VAR_8,
       VAR_5, 1, 4);
     VAR_6->ps_tdma_du_adj_type = 4;
    }
    if (VAR_6->cur_ps_tdma == 13) {
     FUNC_1(VAR_8,
       VAR_5, 1, 11);
     VAR_6->ps_tdma_du_adj_type = 11;
    } else if (VAR_6->cur_ps_tdma == 14) {
     FUNC_1(VAR_8,
       VAR_5, 1, 11);
     VAR_6->ps_tdma_du_adj_type = 11;
    } else if (VAR_6->cur_ps_tdma == 15) {
     FUNC_1(VAR_8,
       VAR_5, 1, 11);
     VAR_6->ps_tdma_du_adj_type = 11;
    } else if (VAR_6->cur_ps_tdma == 16) {
     FUNC_1(VAR_8,
       VAR_5, 1, 12);
     VAR_6->ps_tdma_du_adj_type = 12;
    }
    if (VAR_18 == -1) {
     if (VAR_6->cur_ps_tdma == 1) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 3);
      VAR_6->ps_tdma_du_adj_type =
       3;
     } else if (VAR_6->cur_ps_tdma == 2) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 3);
      VAR_6->ps_tdma_du_adj_type =
       3;
     } else if (VAR_6->cur_ps_tdma == 3) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 4);
      VAR_6->ps_tdma_du_adj_type =
       4;
     } else if (VAR_6->cur_ps_tdma == 9) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 11);
      VAR_6->ps_tdma_du_adj_type =
       11;
     } else if (VAR_6->cur_ps_tdma == 10) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 11);
      VAR_6->ps_tdma_du_adj_type =
       11;
     } else if (VAR_6->cur_ps_tdma == 11) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 12);
      VAR_6->ps_tdma_du_adj_type =
       12;
     }
    } else if (VAR_18 == 1) {
     if (VAR_6->cur_ps_tdma == 4) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 3);
      VAR_6->ps_tdma_du_adj_type =
       3;
     } else if (VAR_6->cur_ps_tdma == 3) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 3);
      VAR_6->ps_tdma_du_adj_type =
       3;
     } else if (VAR_6->cur_ps_tdma == 2) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 3);
      VAR_6->ps_tdma_du_adj_type =
       3;
     } else if (VAR_6->cur_ps_tdma == 12) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 11);
      VAR_6->ps_tdma_du_adj_type =
       11;
     } else if (VAR_6->cur_ps_tdma == 11) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 11);
      VAR_6->ps_tdma_du_adj_type =
       11;
     } else if (VAR_6->cur_ps_tdma == 10) {
      FUNC_1(
       VAR_8, VAR_5,
       1, 11);
      VAR_6->ps_tdma_du_adj_type =
       11;
     }
    }
   }
  }
 }





 if (VAR_6->cur_ps_tdma != VAR_6->ps_tdma_du_adj_type) {
  bool VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;

  FUNC_0(VAR_12, VAR_3, VAR_4,
    "[BTCoex], PsTdma type mismatch!!!, cur_ps_tdma = %d, recordPsTdma = %d\n",
    VAR_6->cur_ps_tdma, VAR_6->ps_tdma_du_adj_type);

  VAR_8->btc_get(VAR_8, VAR_2, &VAR_20);
  VAR_8->btc_get(VAR_8, VAR_0, &VAR_21);
  VAR_8->btc_get(VAR_8, VAR_1, &VAR_22);

  if (!VAR_20 && !VAR_21 && !VAR_22) {
   FUNC_1(VAR_8, VAR_5, 1,
          VAR_6->ps_tdma_du_adj_type);
  } else {
   FUNC_0(VAR_12, VAR_3, VAR_4,
     "[BTCoex], roaming/link/scan is under progress, will adjust next time!!!\n");
  }
 }
}
