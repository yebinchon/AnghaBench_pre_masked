
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;
struct TYPE_2__ {int pre_bt_rssi_state; long bt_rssi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static u8 FUNC_1(struct btc_coexist *VAR_10,
         u8 VAR_11, u8 VAR_12,
         u8 VAR_13)
{
 struct rtl_priv *VAR_14 = VAR_10->adapter;
 long VAR_15 = 0;
 u8 VAR_16 = VAR_9->pre_bt_rssi_state;

 VAR_15 = VAR_9->bt_rssi;

 if (VAR_11 == 2) {
  if ((VAR_9->pre_bt_rssi_state == VAR_2) ||
      (VAR_9->pre_bt_rssi_state == VAR_5)) {
   if (VAR_15 >= (VAR_12 +
     VAR_0)) {
    VAR_16 = VAR_1;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state switch to High\n");
   } else {
    VAR_16 = VAR_5;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state stay at Low\n");
   }
  } else {
   if (VAR_15 < VAR_12) {
    VAR_16 = VAR_2;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state switch to Low\n");
   } else {
    VAR_16 = VAR_4;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state stay at High\n");
   }
  }
 } else if (VAR_11 == 3) {
  if (VAR_12 > VAR_13) {
   FUNC_0(VAR_14, VAR_7, VAR_8,
     "[BTCoex], BT Rssi thresh error!!\n");
   return VAR_9->pre_bt_rssi_state;
  }

  if ((VAR_9->pre_bt_rssi_state == VAR_2) ||
      (VAR_9->pre_bt_rssi_state == VAR_5)) {
   if (VAR_15 >= (VAR_12 +
     VAR_0)) {
    VAR_16 = VAR_3;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state switch to Medium\n");
   } else {
    VAR_16 = VAR_5;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state stay at Low\n");
   }
  } else if ((VAR_9->pre_bt_rssi_state ==
      VAR_3) ||
      (VAR_9->pre_bt_rssi_state ==
       VAR_6)) {
   if (VAR_15 >= (VAR_13 +
     VAR_0)) {
    VAR_16 = VAR_1;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state switch to High\n");
   } else if (VAR_15 < VAR_12) {
    VAR_16 = VAR_2;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state switch to Low\n");
   } else {
    VAR_16 = VAR_6;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state stay at Medium\n");
   }
  } else {
   if (VAR_15 < VAR_13) {
    VAR_16 = VAR_3;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state switch to Medium\n");
   } else {
    VAR_16 = VAR_4;
    FUNC_0(VAR_14, VAR_7, VAR_8,
      "[BTCoex], BT Rssi state stay at High\n");
   }
  }
 }
 VAR_9->pre_bt_rssi_state = VAR_16;

 return VAR_16;
}
