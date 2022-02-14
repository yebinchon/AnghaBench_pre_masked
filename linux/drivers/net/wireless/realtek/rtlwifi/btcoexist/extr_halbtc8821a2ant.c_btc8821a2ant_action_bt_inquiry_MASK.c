
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;int (* btc_set ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int,int ,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int ) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int,int ) ;
 int FUNC_10 (struct btc_coexist*,int ,int*) ;
 int FUNC_11 (struct btc_coexist*,int ,int*) ;
 int FUNC_12 (struct btc_coexist*,int ,int*) ;
 int FUNC_13 (struct btc_coexist*,int ,int*) ;
 int FUNC_14 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_15(struct btc_coexist *VAR_12)
{
 struct rtl_priv *VAR_13 = VAR_12->adapter;
 u8 VAR_14, VAR_15, VAR_16;
 bool VAR_17 = 0;
 bool VAR_18 = 1;
 bool VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;

 VAR_14 =
  FUNC_9(VAR_12, 0, 2, 15, 0);
 VAR_15 = FUNC_9(VAR_12, 1, 2,
    VAR_7, 0);
 VAR_16 = FUNC_1(VAR_12,
  2, VAR_6, 0);

 VAR_12->btc_set(VAR_12, VAR_5,
      &VAR_18);
 VAR_12->btc_get(VAR_12, VAR_0,
      &VAR_17);

 VAR_12->btc_get(VAR_12, VAR_3, &VAR_19);
 VAR_12->btc_get(VAR_12, VAR_1, &VAR_20);
 VAR_12->btc_get(VAR_12, VAR_2, &VAR_21);

 FUNC_5(VAR_12, VAR_4, 0x0, 0x0);

 if (VAR_19 || VAR_20 || VAR_21) {
  FUNC_0(VAR_13, VAR_8, VAR_9,
    "[BTCoex], Wifi link process + BT Inq/Page!!\n");
  FUNC_2(VAR_12, VAR_11, 15);
  FUNC_6(VAR_12, VAR_11, 1, 22);
 } else if (VAR_17) {
  FUNC_0(VAR_13, VAR_8, VAR_9,
    "[BTCoex], Wifi connected + BT Inq/Page!!\n");
  FUNC_2(VAR_12, VAR_11, 15);
  FUNC_6(VAR_12, VAR_11, 1, 22);
 } else {
  FUNC_0(VAR_13, VAR_8, VAR_9,
    "[BTCoex], Wifi no-link + BT Inq/Page!!\n");
  FUNC_2(VAR_12, VAR_11, 0);
  FUNC_6(VAR_12, VAR_11, 0, 1);
 }

 FUNC_4(VAR_12, VAR_10, 6);
 FUNC_3(VAR_12, VAR_11, 0);

 FUNC_7(VAR_12, 0, 0, 0, 0);
 FUNC_8(VAR_12, 0, 0, 0, 0x18);
}
