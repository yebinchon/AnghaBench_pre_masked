
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,long*) ;struct rtl_priv* adapter; } ;
struct TYPE_2__ {size_t* pre_wifi_rssi_state; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 TYPE_1__* VAR_10 ;
 int FUNC_1 (struct btc_coexist*,int ,long*) ;

__attribute__((used)) static u8 FUNC_2(struct btc_coexist *VAR_11,
           u8 VAR_12, u8 VAR_13,
           u8 VAR_14, u8 VAR_15)
{
 struct rtl_priv *VAR_16 = VAR_11->adapter;
 long VAR_17 = 0;
 u8 VAR_18 = VAR_10->pre_wifi_rssi_state[VAR_12];

 VAR_11->btc_get(VAR_11, VAR_0, &VAR_17);

 if (VAR_13 == 2) {
  if ((VAR_10->pre_wifi_rssi_state[VAR_12] ==
       VAR_3) ||
      (VAR_10->pre_wifi_rssi_state[VAR_12] ==
       VAR_6)) {
   if (VAR_17 >=
       (VAR_14+VAR_1)) {
    VAR_18 = VAR_2;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state switch to High\n");
   } else {
    VAR_18 = VAR_6;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state stay at Low\n");
   }
  } else {
   if (VAR_17 < VAR_14) {
    VAR_18 = VAR_3;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state switch to Low\n");
   } else {
    VAR_18 = VAR_5;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state stay at High\n");
   }
  }
 } else if (VAR_13 == 3) {
  if (VAR_14 > VAR_15) {
   FUNC_0(VAR_16, VAR_8, VAR_9,
     "[BTCoex], wifi RSSI thresh error!!\n");
   return VAR_10->pre_wifi_rssi_state[VAR_12];
  }

  if ((VAR_10->pre_wifi_rssi_state[VAR_12] ==
      VAR_3) ||
      (VAR_10->pre_wifi_rssi_state[VAR_12] ==
       VAR_6)) {
   if (VAR_17 >=
       (VAR_14 +
        VAR_1)) {
    VAR_18 = VAR_4;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state switch to Medium\n");
   } else {
    VAR_18 = VAR_6;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state stay at Low\n");
   }
  } else if ((VAR_10->pre_wifi_rssi_state[VAR_12] ==
      VAR_4) ||
      (VAR_10->pre_wifi_rssi_state[VAR_12] ==
       VAR_7)) {
   if (VAR_17 >= (VAR_15 +
       VAR_1)) {
    VAR_18 = VAR_2;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state switch to High\n");
   } else if (VAR_17 < VAR_14) {
    VAR_18 = VAR_3;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state switch to Low\n");
   } else {
    VAR_18 = VAR_7;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state stay at Medium\n");
   }
  } else {
   if (VAR_17 < VAR_15) {
    VAR_18 = VAR_4;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state switch to Medium\n");
   } else {
    VAR_18 = VAR_5;
    FUNC_0(VAR_16, VAR_8, VAR_9,
      "[BTCoex], wifi RSSI state stay at High\n");
   }
  }
 }
 VAR_10->pre_wifi_rssi_state[VAR_12] = VAR_18;

 return VAR_18;
}
