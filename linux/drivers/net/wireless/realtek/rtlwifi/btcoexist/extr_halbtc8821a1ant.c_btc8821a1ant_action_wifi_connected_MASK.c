
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct TYPE_3__ {scalar_t__ a2dp_only; int hid_only; } ;
struct btc_coexist {TYPE_1__ bt_link_info; int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_4__ {scalar_t__ bt_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ) ;
 int FUNC_2 (struct btc_coexist*,int ) ;
 int FUNC_3 (struct btc_coexist*) ;
 int FUNC_4 (struct btc_coexist*) ;
 int FUNC_5 (struct btc_coexist*,int ,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 TYPE_2__* VAR_16 ;
 int FUNC_8 (struct btc_coexist*,int ,int*) ;
 int FUNC_9 (struct btc_coexist*,int ,int*) ;
 int FUNC_10 (struct btc_coexist*,int ,int*) ;
 int FUNC_11 (struct btc_coexist*,int ,int*) ;
 int FUNC_12 (struct btc_coexist*,int ,int*) ;
 int FUNC_13 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_14(struct btc_coexist *VAR_17)
{
 struct rtl_priv *VAR_18 = VAR_17->adapter;
 bool VAR_19 = 0;
 bool VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 bool VAR_23 = 0;
 bool VAR_24 = 0;

 FUNC_0(VAR_18, VAR_13, VAR_14,
   "[BTCoex], CoexForWifiConnect()===>\n");

 VAR_17->btc_get(VAR_17, VAR_0,
      &VAR_23);
 if (VAR_23) {
  FUNC_3(VAR_17);
  FUNC_0(VAR_18, VAR_13, VAR_14,
    "[BTCoex], CoexForWifiConnect(), return for wifi is under 4way<===\n");
  return;
 }

 VAR_17->btc_get(VAR_17, VAR_5, &VAR_20);
 VAR_17->btc_get(VAR_17, VAR_3, &VAR_21);
 VAR_17->btc_get(VAR_17, VAR_4, &VAR_22);
 if (VAR_20 || VAR_21 || VAR_22) {
  if (VAR_20)
   FUNC_4(VAR_17);
  else
   FUNC_3(VAR_17);

  FUNC_0(VAR_18, VAR_13, VAR_14,
    "[BTCoex], CoexForWifiConnect(), return for wifi is under scan<===\n");
  return;
 }


 VAR_17->btc_get(VAR_17, VAR_1,
      &VAR_24);
 VAR_17->btc_get(VAR_17, VAR_2, &VAR_19);
 if (VAR_8 ==
     VAR_16->bt_status && !VAR_24 &&
     !VAR_17->bt_link_info.hid_only) {
  if (!VAR_19 && VAR_17->bt_link_info.a2dp_only)

   FUNC_6(VAR_17,
      VAR_7, 0x0, 0x0);
  else
   FUNC_6(VAR_17, VAR_6,
            0x50, 0x4);
 } else {
  FUNC_6(VAR_17,
           VAR_7,
           0x0, 0x0);
 }


 if (!VAR_19) {
  if (VAR_8 == VAR_16->bt_status) {
   FUNC_2(VAR_17,
    VAR_12);
  } else if ((VAR_10 ==
       VAR_16->bt_status) ||
      (VAR_9 ==
       VAR_16->bt_status)) {
   FUNC_1(VAR_17,
    VAR_12);
  } else {
   FUNC_7(VAR_17, VAR_15, 0, 8);
   FUNC_5(VAR_17,
         VAR_15, 2);
  }
 } else {
  if (VAR_8 == VAR_16->bt_status) {
   FUNC_2(VAR_17,
    VAR_11);
  } else if ((VAR_10 ==
       VAR_16->bt_status) ||
      (VAR_9 ==
       VAR_16->bt_status)) {
   FUNC_1(VAR_17,
    VAR_11);
  } else {
   FUNC_7(VAR_17, VAR_15, 0, 8);
   FUNC_5(VAR_17,
         VAR_15, 2);
  }
 }
}
