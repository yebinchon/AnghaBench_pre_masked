
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct rtl_priv* adapter; } ;
struct TYPE_4__ {int switch_thres_offset; } ;
struct TYPE_3__ {scalar_t__ a2dp_exist; scalar_t__ hid_exist; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct btc_coexist*,int,int,int ) ;
 int FUNC_3 (struct btc_coexist*,int ,int ) ;
 int FUNC_4 (struct btc_coexist*,int ,int,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int ) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int,int ) ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_10 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static bool FUNC_11(struct btc_coexist *VAR_9)
{
 struct rtl_priv *VAR_10 = VAR_9->adapter;
 u8 VAR_11, VAR_12, VAR_13;
 u8 VAR_14 = 0;
 u8 VAR_15 = VAR_3 -
   VAR_7->switch_thres_offset - VAR_7->switch_thres_offset;

 VAR_11 = FUNC_9(VAR_9, 0, 2, 15, 0);
 VAR_12 = FUNC_9(VAR_9, 1, 2,
       VAR_15, 0);
 VAR_15 = VAR_2 -
       VAR_7->switch_thres_offset - VAR_7->switch_thres_offset;
 VAR_13 = FUNC_2(VAR_9, 2, VAR_15, 0);

 VAR_9->btc_get(VAR_9, VAR_0, &VAR_14);


 if (FUNC_0(VAR_12) && (VAR_8->hid_exist) &&
     (VAR_8->a2dp_exist)) {
  FUNC_1(VAR_10, VAR_4, VAR_5,
    "[BTCoex], Wifi  idle process for BT HID+A2DP exist!!\n");

  FUNC_4(VAR_9, VAR_6, 1, 0x6);
  FUNC_5(VAR_9, VAR_6, 0);


  FUNC_8(VAR_9, 0, 0, 0,
       0);
  FUNC_3(VAR_9, VAR_6, 0);
  FUNC_6(VAR_9, VAR_1,
           0x0, 0x0);
  FUNC_7(VAR_9, VAR_6, 0, 1);

  return 1;
 }

 FUNC_4(VAR_9, VAR_6, 1, 0x18);
 return 0;
}
