
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {int auto_tdma_adjust; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct btc_coexist*,int,int,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_9 (struct btc_coexist*,int ,int) ;
 int FUNC_10 (struct btc_coexist*,int,int,int) ;
 scalar_t__ FUNC_11 (struct btc_coexist*,int ,int,int,int ) ;
 TYPE_1__* VAR_11 ;
 int FUNC_12 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_13(struct btc_coexist *VAR_12)
{
 struct rtl_priv *VAR_13 = VAR_12->adapter;
 u8 VAR_14, VAR_15 = VAR_1;
 u32 VAR_16;
 bool VAR_17 = 0;

 VAR_14 = FUNC_11(VAR_12, 0, 2, 15, 0);
 VAR_15 = FUNC_1(VAR_12, 3, 34, 42);

 if ((VAR_15 == VAR_2 ||
      VAR_15 == VAR_5) &&
     (VAR_14 == VAR_2 ||
      VAR_14 == VAR_5)) {
  FUNC_0(VAR_13, VAR_8, VAR_9,
    "[BTCoex], A2dp, wifi/bt rssi both LOW!!\n");
  VAR_17 = 1;
 }
 if (VAR_17) {
  FUNC_9(VAR_12, VAR_10, 2);
  FUNC_5(VAR_12, VAR_10, 0, 1,
     0x4);
 } else {
  FUNC_9(VAR_12, VAR_10, 1);
  FUNC_5(VAR_12, VAR_10, 0, 0,
     0x8);
 }

 FUNC_4(VAR_12, VAR_10, 6);

 if (VAR_17)
  FUNC_2(VAR_12, VAR_10, 0);
 else
  FUNC_2(VAR_12, VAR_10, 2);

 if (VAR_17) {
  FUNC_6(VAR_12, VAR_10, 1, 17);
  VAR_11->auto_tdma_adjust = 0;
  FUNC_3(VAR_12, VAR_10, 0);
 } else {
  if ((VAR_15 == VAR_2) ||
      (VAR_15 == VAR_5)) {
   FUNC_10(VAR_12, 0,
         1, 1);
   FUNC_3(VAR_12, VAR_10, 0);
  } else if ((VAR_15 == VAR_3) ||
      (VAR_15 == VAR_6)) {
   FUNC_10(VAR_12, 0,
         0, 1);
   FUNC_3(VAR_12, VAR_10, 2);
  } else if ((VAR_15 == VAR_1) ||
      (VAR_15 == VAR_4)) {
   FUNC_10(VAR_12, 0,
         0, 1);
   FUNC_3(VAR_12, VAR_10, 4);
  }
 }


 VAR_12->btc_get(VAR_12, VAR_0, &VAR_16);
 if (VAR_7 == VAR_16) {
  if ((VAR_14 == VAR_1) ||
      (VAR_14 == VAR_4)) {
   FUNC_7(VAR_12, 1, 0,
         0, 0);
   FUNC_8(VAR_12, 1, 0,
         0, 0x18);
  } else {
   FUNC_7(VAR_12, 1, 0,
         0, 0);
   FUNC_8(VAR_12, 0, 0,
         0, 0x18);
  }
 } else {
  if ((VAR_14 == VAR_1) ||
      (VAR_14 == VAR_4)) {
   FUNC_7(VAR_12, 0, 0,
         0, 0);
   FUNC_8(VAR_12, 1, 0,
         0, 0x18);
  } else {
   FUNC_7(VAR_12, 0, 0,
         0, 0);
   FUNC_8(VAR_12, 0, 0,
         0, 0x18);
  }
 }
}
