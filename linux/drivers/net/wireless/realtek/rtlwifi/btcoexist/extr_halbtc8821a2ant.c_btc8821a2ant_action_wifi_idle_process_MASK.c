
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int *) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {scalar_t__ pan_exist; scalar_t__ a2dp_exist; scalar_t__ hid_exist; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct btc_coexist*,int,int ,int ) ;
 int FUNC_3 (struct btc_coexist*,int ,int ) ;
 int FUNC_4 (struct btc_coexist*,int ,int,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int ) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int,int,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_11 (struct btc_coexist*,int ,int *) ;

__attribute__((used)) static bool FUNC_12(struct btc_coexist *VAR_8)
{
 struct rtl_priv *VAR_9 = VAR_8->adapter;
 u8 VAR_10, VAR_11, VAR_12;
 u8 VAR_13 = 0;

 VAR_10 =
  FUNC_10(VAR_8, 0, 2, 15, 0);
 VAR_11 = FUNC_10(VAR_8, 1, 2,
   VAR_3 - 20, 0);
 VAR_12 = FUNC_2(VAR_8,
   2, VAR_2, 0);

 VAR_8->btc_get(VAR_8, VAR_0, &VAR_13);


 if (FUNC_0(VAR_11) && (VAR_7->hid_exist) &&
     (VAR_7->a2dp_exist)) {
  FUNC_1(VAR_9, VAR_4, VAR_5,
    "[BTCoex], Wifi  idle process for BT HID+A2DP exist!!\n");

  FUNC_4(VAR_8, VAR_6, 1, 0x6);
  FUNC_5(VAR_8, VAR_6, 0);


  FUNC_8(VAR_8, 0, 0, 0,
        0);
  FUNC_9(VAR_8, 0, 0, 0,
        0x18);

  FUNC_3(VAR_8, VAR_6, 0);
  FUNC_6(VAR_8, VAR_1,
           0x0, 0x0);
  FUNC_7(VAR_8, VAR_6, 0, 1);

  return 1;
 } else if (VAR_7->pan_exist) {
  FUNC_1(VAR_9, VAR_4, VAR_5,
    "[BTCoex], Wifi  idle process for BT PAN exist!!\n");

  FUNC_4(VAR_8, VAR_6, 1, 0x6);
  FUNC_5(VAR_8, VAR_6, 0);


  FUNC_8(VAR_8, 0, 0, 0,
        0);
  FUNC_9(VAR_8, 0, 0, 0,
        0x18);

  FUNC_3(VAR_8, VAR_6, 0);
  FUNC_6(VAR_8, VAR_1,
           0x0, 0x0);
  FUNC_7(VAR_8, VAR_6, 0, 1);

  return 1;
 }
 FUNC_4(VAR_8, VAR_6, 1, 0x18);
 return 0;
}
