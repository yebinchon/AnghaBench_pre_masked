
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_bt_link_info {scalar_t__ a2dp_exist; scalar_t__ pan_exist; scalar_t__ hid_exist; scalar_t__ sco_exist; int bt_link_exist; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct btc_bt_link_info bt_link_info; struct rtl_priv* adapter; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static u8 FUNC_2(struct btc_coexist *VAR_14)
{
 struct rtl_priv *VAR_15 = VAR_14->adapter;
 struct btc_bt_link_info *VAR_16 = &VAR_14->bt_link_info;
 bool VAR_17 = 0;
 u8 VAR_18 = VAR_11;
 u8 VAR_19 = 0;

 VAR_14->btc_get(VAR_14, VAR_0, &VAR_17);

 if (!VAR_16->bt_link_exist) {
  FUNC_0(VAR_15, VAR_12, VAR_13,
    "[BTCoex], No BT link exists!!!\n");
  return VAR_18;
 }

 if (VAR_16->sco_exist)
  VAR_19++;
 if (VAR_16->hid_exist)
  VAR_19++;
 if (VAR_16->pan_exist)
  VAR_19++;
 if (VAR_16->a2dp_exist)
  VAR_19++;

 if (VAR_19 == 1) {
  if (VAR_16->sco_exist) {
   FUNC_0(VAR_15, VAR_12, VAR_13,
     "[BTCoex], SCO only\n");
   VAR_18 = VAR_10;
  } else {
   if (VAR_16->hid_exist) {
    FUNC_0(VAR_15, VAR_12, VAR_13,
      "[BTCoex], HID only\n");
    VAR_18 = VAR_3;
   } else if (VAR_16->a2dp_exist) {
    FUNC_0(VAR_15, VAR_12, VAR_13,
      "[BTCoex], A2DP only\n");
    VAR_18 = VAR_1;
   } else if (VAR_16->pan_exist) {
    if (VAR_17) {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], PAN(HS) only\n");
     VAR_18 =
      VAR_9;
    } else {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], PAN(EDR) only\n");
     VAR_18 =
      VAR_6;
    }
   }
  }
 } else if (VAR_19 == 2) {
  if (VAR_16->sco_exist) {
   if (VAR_16->hid_exist) {
    FUNC_0(VAR_15, VAR_12, VAR_13,
      "[BTCoex], SCO + HID\n");
    VAR_18 = VAR_8;
   } else if (VAR_16->a2dp_exist) {
    FUNC_0(VAR_15, VAR_12, VAR_13,
      "[BTCoex], SCO + A2DP ==> SCO\n");
    VAR_18 = VAR_8;
   } else if (VAR_16->pan_exist) {
    if (VAR_17) {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], SCO + PAN(HS)\n");
     VAR_18 = VAR_10;
    } else {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], SCO + PAN(EDR)\n");
     VAR_18 =
         VAR_8;
    }
   }
  } else {
   if (VAR_16->hid_exist &&
       VAR_16->a2dp_exist) {
    FUNC_0(VAR_15, VAR_12, VAR_13,
      "[BTCoex], HID + A2DP\n");
    VAR_18 = VAR_4;
   } else if (VAR_16->hid_exist &&
       VAR_16->pan_exist) {
    if (VAR_17) {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], HID + PAN(HS)\n");
     VAR_18 = VAR_3;
    } else {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], HID + PAN(EDR)\n");
     VAR_18 =
         VAR_8;
    }
   } else if (VAR_16->pan_exist &&
       VAR_16->a2dp_exist) {
    if (VAR_17) {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], A2DP + PAN(HS)\n");
     VAR_18 =
         VAR_2;
    } else {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex],A2DP + PAN(EDR)\n");
     VAR_18 =
         VAR_7;
    }
   }
  }
 } else if (VAR_19 == 3) {
  if (VAR_16->sco_exist) {
   if (VAR_16->hid_exist &&
       VAR_16->a2dp_exist) {
    FUNC_0(VAR_15, VAR_12, VAR_13,
      "[BTCoex], SCO + HID + A2DP ==> HID\n");
    VAR_18 = VAR_8;
   } else if (VAR_16->hid_exist &&
       VAR_16->pan_exist) {
    if (VAR_17) {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], SCO + HID + PAN(HS)\n");
     VAR_18 =
         VAR_8;
    } else {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], SCO + HID + PAN(EDR)\n");
     VAR_18 =
         VAR_8;
    }
   } else if (VAR_16->pan_exist &&
       VAR_16->a2dp_exist) {
    if (VAR_17) {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], SCO + A2DP + PAN(HS)\n");
     VAR_18 =
         VAR_8;
    } else {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], SCO + A2DP + PAN(EDR) ==> HID\n");
     VAR_18 =
         VAR_8;
    }
   }
  } else {
   if (VAR_16->hid_exist &&
       VAR_16->pan_exist &&
       VAR_16->a2dp_exist) {
    if (VAR_17) {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], HID + A2DP + PAN(HS)\n");
     VAR_18 =
         VAR_4;
    } else {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], HID + A2DP + PAN(EDR)\n");
     VAR_18 =
     VAR_5;
    }
   }
  }
 } else if (VAR_19 >= 3) {
  if (VAR_16->sco_exist) {
   if (VAR_16->hid_exist &&
       VAR_16->pan_exist &&
       VAR_16->a2dp_exist) {
    if (VAR_17) {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], Error!!! SCO + HID + A2DP + PAN(HS)\n");
    } else {
     FUNC_0(VAR_15, VAR_12,
       VAR_13,
       "[BTCoex], SCO + HID + A2DP + PAN(EDR)==>PAN(EDR)+HID\n");
     VAR_18 =
         VAR_8;
    }
   }
  }
 }
 return VAR_18;
}
