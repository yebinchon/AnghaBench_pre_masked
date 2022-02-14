
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
typedef int s32 ;
struct TYPE_4__ {int cur_ps_tdma; int ps_tdma_du_adj_type; int auto_tdma_adjust; } ;
struct TYPE_3__ {scalar_t__ bt_retry_cnt; scalar_t__ bt_info_ext; int low_priority_tx; int low_priority_rx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_1 (struct btc_coexist*,int ,int,int) ;

__attribute__((used)) static
void FUNC_2(struct btc_coexist *VAR_9,
           u8 VAR_10)
{
 struct rtl_priv *VAR_11 = VAR_9->adapter;
 static s32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;



 s32 VAR_17;
 u8 VAR_18 = 0, VAR_19;
 bool VAR_20 = 0;

 FUNC_0(VAR_11, VAR_4, VAR_5,
   "[BTCoex], TdmaDurationAdjustForAcl()\n");

 if (VAR_10 == VAR_0)
  VAR_20 = 1;
 else
  VAR_20 = 0;

 if ((VAR_10 ==
      VAR_3) ||
     (VAR_10 == VAR_1) ||
     (VAR_10 == VAR_2)) {
  if (VAR_7->cur_ps_tdma != 1 && VAR_7->cur_ps_tdma != 2 &&
      VAR_7->cur_ps_tdma != 3 && VAR_7->cur_ps_tdma != 9) {
   FUNC_1(VAR_9, VAR_6,
      1, 9);
   VAR_7->ps_tdma_du_adj_type = 9;

   VAR_12 = 0;
   VAR_13 = 0;
   VAR_14 = 1;
   VAR_15 = 3;
   VAR_17 = 0;
   VAR_16 = 0;
  }
  return;
 }

 if (!VAR_7->auto_tdma_adjust) {
  VAR_7->auto_tdma_adjust = 1;
  FUNC_0(VAR_11, VAR_4, VAR_5,
    "[BTCoex], first run TdmaDurationAdjust()!!\n");

  FUNC_1(VAR_9, VAR_6, 1, 2);
  VAR_7->ps_tdma_du_adj_type = 2;

  VAR_12 = 0;
  VAR_13 = 0;
  VAR_14 = 1;
  VAR_15 = 3;
  VAR_17 = 0;
  VAR_16 = 0;
 } else {

  VAR_18 = VAR_8->bt_retry_cnt;
  VAR_19 = VAR_8->bt_info_ext;

  if ((VAR_8->low_priority_tx) > 1050 ||
      (VAR_8->low_priority_rx) > 1250)
   VAR_18++;

  VAR_17 = 0;
  VAR_16++;

  if (VAR_18 == 0) {
   VAR_12++;
   VAR_13--;

   if (VAR_13 <= 0)
    VAR_13 = 0;

   if (VAR_12 >= VAR_15) {



    VAR_16 = 0;
    VAR_15 = 3;
    VAR_12 = 0;
    VAR_13 = 0;
    VAR_17 = 1;
    FUNC_0(VAR_11, VAR_4, VAR_5,
      "[BTCoex], Increase wifi duration!!\n");
   }
  } else if (VAR_18 <= 3) {

   VAR_12--;
   VAR_13++;

   if (VAR_12 <= 0)
    VAR_12 = 0;

   if (VAR_13 == 2) {



    if (VAR_16 <= 2)

     VAR_14++;
    else
     VAR_14 = 1;

    if (VAR_14 >= 20)




     VAR_14 = 20;

    VAR_15 = 3 * VAR_14;
    VAR_12 = 0;
    VAR_13 = 0;
    VAR_16 = 0;
    VAR_17 = -1;
    FUNC_0(VAR_11, VAR_4, VAR_5,
      "[BTCoex], Decrease wifi duration for retryCounter<3!!\n");
   }
  } else {



   if (VAR_16 == 1)

    VAR_14++;
   else
    VAR_14 = 1;

   if (VAR_14 >= 20)




    VAR_14 = 20;

   VAR_15 = 3 * VAR_14;
   VAR_12 = 0;
   VAR_13 = 0;
   VAR_16 = 0;
   VAR_17 = -1;
   FUNC_0(VAR_11, VAR_4, VAR_5,
     "[BTCoex], Decrease wifi duration for retryCounter>3!!\n");
  }

  if (VAR_17 == -1) {
   if (VAR_7->cur_ps_tdma == 1) {
    FUNC_1(VAR_9, VAR_6,
       1, 2);
    VAR_7->ps_tdma_du_adj_type = 2;
   } else if (VAR_7->cur_ps_tdma == 2) {
    FUNC_1(VAR_9, VAR_6,
       1, 9);
    VAR_7->ps_tdma_du_adj_type = 9;
   } else if (VAR_7->cur_ps_tdma == 9) {
    FUNC_1(VAR_9, VAR_6,
       1, 11);
    VAR_7->ps_tdma_du_adj_type = 11;
   }
  } else if (VAR_17 == 1) {
   if (VAR_7->cur_ps_tdma == 11) {
    FUNC_1(VAR_9, VAR_6,
       1, 9);
    VAR_7->ps_tdma_du_adj_type = 9;
   } else if (VAR_7->cur_ps_tdma == 9) {
    FUNC_1(VAR_9, VAR_6,
       1, 2);
    VAR_7->ps_tdma_du_adj_type = 2;
   } else if (VAR_7->cur_ps_tdma == 2) {
    FUNC_1(VAR_9, VAR_6,
       1, 1);
    VAR_7->ps_tdma_du_adj_type = 1;
   }
  }

  if (VAR_7->cur_ps_tdma != 1 && VAR_7->cur_ps_tdma != 2 &&
      VAR_7->cur_ps_tdma != 9 && VAR_7->cur_ps_tdma != 11) {

   FUNC_1(VAR_9, VAR_6, 1,
      VAR_7->ps_tdma_du_adj_type);
  }
 }
}
