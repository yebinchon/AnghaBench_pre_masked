
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {scalar_t__ bt_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*) ;
 int FUNC_2 (struct btc_coexist*,int ,int ) ;
 int FUNC_3 (struct btc_coexist*,int ,int ) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int,int) ;
 TYPE_1__* VAR_11 ;
 int FUNC_10 (struct btc_coexist*,int ,int*) ;
 int FUNC_11 (struct btc_coexist*,int ,int*) ;
 int FUNC_12 (struct btc_coexist*,int ,int*) ;
 int FUNC_13 (struct btc_coexist*,int ,int*) ;
 int FUNC_14 (struct btc_coexist*,int ,int*) ;
 int FUNC_15 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_16 (struct btc_coexist*,int ,int*) ;
 int FUNC_17 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_18 (struct btc_coexist*,int ,int*) ;
 int FUNC_19 (struct btc_coexist*,int ,int,int,int) ;

__attribute__((used)) static bool FUNC_20(struct btc_coexist *VAR_12)
{
 struct rtl_priv *VAR_13 = VAR_12->adapter;
 bool VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 bool VAR_17 = 0;
 bool VAR_18 = 0;

 VAR_12->btc_get(VAR_12, VAR_0, &VAR_18);
 VAR_12->btc_get(VAR_12, VAR_2,
      &VAR_15);
 VAR_12->btc_get(VAR_12, VAR_1, &VAR_16);

 if (!VAR_15) {
  VAR_17 = 0;
  VAR_12->btc_set(VAR_12, VAR_5,
       &VAR_17);
  FUNC_5(VAR_12, VAR_10, 0, 0,
     0x8);

  FUNC_0(VAR_13, VAR_8, VAR_9,
       "[BTCoex], Wifi non-connected idle!!\n");

  VAR_12->btc_set_rf_reg(VAR_12, VAR_4, 0x1, 0xfffff,
       0x0);
  FUNC_2(VAR_12, VAR_10, 0);
  FUNC_6(VAR_12, VAR_3,
           0x0, 0x0);
  FUNC_7(VAR_12, VAR_10, 0, 1);
  FUNC_4(VAR_12, VAR_10, 6);
  FUNC_3(VAR_12, VAR_10, 0);

  FUNC_8(VAR_12, 0, 0, 0,
        0);
  FUNC_9(VAR_12, 0, 0, 0,
        0x18);

  VAR_14 = 1;
 } else {
  if (VAR_7 ==
      VAR_11->bt_status) {
   VAR_17 = 0;
   VAR_12->btc_set(VAR_12,
        VAR_5,
        &VAR_17);
   FUNC_5(VAR_12, VAR_10,
      0, 0, 0x8);

   FUNC_0(VAR_13, VAR_8, VAR_9,
     "[BTCoex], Wifi connected + BT non connected-idle!!\n");

   VAR_12->btc_set_rf_reg(VAR_12, VAR_4, 0x1,
        0xfffff, 0x0);
   FUNC_2(VAR_12,
         VAR_10, 0);

   FUNC_6(
    VAR_12, VAR_3, 0x0, 0x0);
   FUNC_7(VAR_12, VAR_10, 0, 1);
   FUNC_4(VAR_12, VAR_10,
            0xb);
   FUNC_3(VAR_12, VAR_10, 0);

   FUNC_8(VAR_12, 0, 0,
         0, 0);
   FUNC_9(VAR_12, 0, 0,
         0, 0x18);

   VAR_14 = 1;
  } else if (VAR_6 ==
      VAR_11->bt_status) {
   VAR_17 = 1;
   VAR_12->btc_set(VAR_12,
        VAR_5,
        &VAR_17);

   if (VAR_18)
    return 0;
   FUNC_0(VAR_13, VAR_8, VAR_9,
     "[BTCoex], Wifi connected + BT connected-idle!!\n");
   FUNC_5(VAR_12, VAR_10,
      0, 0, 0x8);

   VAR_12->btc_set_rf_reg(VAR_12, VAR_4, 0x1,
        0xfffff, 0x0);
   FUNC_2(VAR_12,
         VAR_10, 0);

   FUNC_6(
    VAR_12, VAR_3, 0x0, 0x0);
   FUNC_7(VAR_12, VAR_10, 0, 1);
   FUNC_4(VAR_12, VAR_10,
            0xb);
   FUNC_3(VAR_12, VAR_10, 0);

   FUNC_8(VAR_12, 1, 0,
         0, 0);
   FUNC_9(VAR_12, 0, 0,
         0, 0x18);
   VAR_14 = 1;
  } else {
   VAR_17 = 1;
   VAR_12->btc_set(VAR_12,
        VAR_5,
        &VAR_17);

   if (VAR_16) {
    FUNC_0(VAR_13, VAR_8, VAR_9,
      "[BTCoex], Wifi Connected-Busy + BT Busy!!\n");
    VAR_14 = 0;
   } else {
    FUNC_0(VAR_13, VAR_8, VAR_9,
      "[BTCoex], Wifi Connected-Idle + BT Busy!!\n");
    VAR_14 =
        FUNC_1(
          VAR_12);
   }
  }
 }
 return VAR_14;
}
