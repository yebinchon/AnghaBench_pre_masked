
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct btc_bt_link_info {scalar_t__ hid_exist; scalar_t__ sco_exist; } ;
struct btc_coexist {int (* btc_set ) (struct btc_coexist*,int ,int*) ;int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct btc_bt_link_info bt_link_info; struct rtl_priv* adapter; } ;
struct TYPE_2__ {scalar_t__ bt_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int ) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int,int ,int ,int ) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_8 (struct btc_coexist*,int ,int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_9 (struct btc_coexist*,int ,int*) ;
 int FUNC_10 (struct btc_coexist*,int ,int*) ;
 int FUNC_11 (struct btc_coexist*,int ,int*) ;
 int FUNC_12 (struct btc_coexist*,int ,int*) ;
 int FUNC_13 (struct btc_coexist*,int ,int*) ;
 int FUNC_14 (struct btc_coexist*,int ,int*) ;
 int FUNC_15 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static bool FUNC_16(struct btc_coexist *VAR_10)
{
 struct rtl_priv *VAR_11 = VAR_10->adapter;
 struct btc_bt_link_info *VAR_12 = &VAR_10->bt_link_info;
 bool VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 bool VAR_16 = 0, VAR_17 = 0;

 VAR_10->btc_get(VAR_10, VAR_0, &VAR_16);
 VAR_10->btc_get(VAR_10, VAR_2,
      &VAR_14);
 VAR_10->btc_get(VAR_10, VAR_1, &VAR_15);

 if (VAR_12->sco_exist || VAR_12->hid_exist)
  FUNC_4(VAR_10, VAR_8, 1, 0, 0, 0);
 else
  FUNC_4(VAR_10, VAR_8, 0, 0, 0, 0);

 if (!VAR_14) {
  VAR_17 = 0;
  VAR_10->btc_set(VAR_10, VAR_3,
       &VAR_17);

  FUNC_0(VAR_11, VAR_6, VAR_7,
    "[BTCoex], Wifi non-connected idle!!\n");

  if ((VAR_5 ==
       VAR_9->bt_status) ||
      (VAR_4 ==
       VAR_9->bt_status)) {
   FUNC_8(VAR_10, VAR_8, 2);
   FUNC_1(VAR_10,
         VAR_8, 1);
   FUNC_5(VAR_10, VAR_8, 0, 0);
  } else {
   FUNC_8(VAR_10, VAR_8, 1);
   FUNC_1(VAR_10,
         VAR_8, 0);
   FUNC_5(VAR_10, VAR_8, 0, 1);
  }

  FUNC_3(VAR_10, VAR_8, 6);
  FUNC_2(VAR_10, VAR_8, 0);

  FUNC_6(VAR_10, 0, 0, 0,
        0);
  FUNC_7(VAR_10, 0, 0, 0,
        0x18);

  VAR_13 = 1;
 } else {
  if (VAR_5 ==
      VAR_9->bt_status) {
   VAR_17 = 0;
   VAR_10->btc_set(VAR_10,
        VAR_3,
        &VAR_17);

   FUNC_0(VAR_11, VAR_6, VAR_7,
     "Wifi connected + BT non connected-idle!!\n");

   FUNC_8(VAR_10, VAR_8, 2);
   FUNC_1(VAR_10,
         VAR_8, 1);
   FUNC_5(VAR_10, VAR_8, 0, 0);
   FUNC_3(VAR_10,
            VAR_8, 6);
   FUNC_2(VAR_10, VAR_8, 0);

   FUNC_6(VAR_10, 0, 0,
         0, 0);
   FUNC_7(VAR_10, 0, 0,
         0, 0x18);

   VAR_13 = 1;
  } else if (VAR_4 ==
      VAR_9->bt_status) {
   VAR_17 = 1;
   VAR_10->btc_set(VAR_10,
        VAR_3,
        &VAR_17);

   if (VAR_16)
    return 0;
   FUNC_0(VAR_11, VAR_6, VAR_7,
     "Wifi connected + BT connected-idle!!\n");

   FUNC_8(VAR_10,
          VAR_8, 2);
   FUNC_1(VAR_10,
         VAR_8, 1);
   FUNC_5(VAR_10, VAR_8,
          0, 0);
   FUNC_3(VAR_10,
            VAR_8, 6);
   FUNC_2(VAR_10, VAR_8, 0);

   FUNC_6(VAR_10, 1, 0,
         0, 0);
   FUNC_7(VAR_10, 0, 0,
         0, 0x18);

   VAR_13 = 1;
  } else {
   VAR_17 = 1;
   VAR_10->btc_set(VAR_10,
        VAR_3,
        &VAR_17);

   if (VAR_15) {
    FUNC_0(VAR_11, VAR_6, VAR_7,
      "Wifi Connected-Busy + BT Busy!!\n");
    VAR_13 = 0;
   } else {
    FUNC_0(VAR_11, VAR_6, VAR_7,
      "Wifi Connected-Idle + BT Busy!!\n");

    FUNC_8(VAR_10,
           VAR_8, 1);
    FUNC_1(VAR_10,
          VAR_8,
          2);
    FUNC_5(VAR_10, VAR_8,
           1, 21);
    FUNC_3(VAR_10,
             VAR_8, 6);
    FUNC_2(VAR_10,
       VAR_8, 0);
    FUNC_6(VAR_10, 0,
          0, 0, 0);
    FUNC_7(VAR_10, 0,
          0, 0, 0x18);
    VAR_13 = 1;
   }
  }
 }
 return VAR_13;
}
