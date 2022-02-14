
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;int (* btc_set ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {scalar_t__ bt_abnormal_scan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int ) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int,int,int) ;
 TYPE_1__* VAR_10 ;
 int FUNC_7 (struct btc_coexist*,int ,int*) ;
 int FUNC_8 (struct btc_coexist*,int ,int*) ;
 int FUNC_9 (struct btc_coexist*,int ,int*) ;
 int FUNC_10 (struct btc_coexist*,int ,int*) ;
 int FUNC_11 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_12(struct btc_coexist *VAR_11)
{
 struct rtl_priv *VAR_12 = VAR_11->adapter;
 bool VAR_13 = 0;
 bool VAR_14 = 1;
 bool VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;

 VAR_11->btc_set(VAR_11, VAR_5,
      &VAR_14);
 VAR_11->btc_get(VAR_11, VAR_0,
      &VAR_13);

 VAR_11->btc_get(VAR_11, VAR_3, &VAR_15);
 VAR_11->btc_get(VAR_11, VAR_1, &VAR_16);
 VAR_11->btc_get(VAR_11, VAR_2, &VAR_17);

 FUNC_4(VAR_11, VAR_4, 0x0, 0x0);

 if (VAR_10->bt_abnormal_scan) {
  FUNC_5(VAR_11, VAR_9, 1, 23);
  FUNC_1(VAR_11, VAR_9, 3);
 } else if (VAR_15 || VAR_16 || VAR_17) {
  FUNC_0(VAR_12, VAR_6, VAR_7,
    "[BTCoex], Wifi link process + BT Inq/Page!!\n");
  FUNC_1(VAR_11, VAR_9, 15);
  FUNC_5(VAR_11, VAR_9, 1, 22);
 } else if (VAR_13) {
  FUNC_0(VAR_12, VAR_6, VAR_7,
    "[BTCoex], Wifi connected + BT Inq/Page!!\n");
  FUNC_1(VAR_11, VAR_9, 15);
  FUNC_5(VAR_11, VAR_9, 1, 22);
 } else {
  FUNC_1(VAR_11, VAR_9, 0);
  FUNC_5(VAR_11, VAR_9, 0, 1);
 }
 FUNC_3(VAR_11, VAR_8, 6);
 FUNC_2(VAR_11, VAR_9, 0);

 FUNC_6(VAR_11, 0, 0, 0, 0);
}
