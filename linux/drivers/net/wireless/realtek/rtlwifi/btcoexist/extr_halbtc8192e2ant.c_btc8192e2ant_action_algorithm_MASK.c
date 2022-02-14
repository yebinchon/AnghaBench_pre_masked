
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct btc_stack_info {int num_of_hid; } ;
struct btc_bt_link_info {scalar_t__ a2dp_exist; scalar_t__ pan_exist; scalar_t__ hid_exist; scalar_t__ sco_exist; int bt_link_exist; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;struct btc_stack_info stack_info; struct btc_bt_link_info bt_link_info; struct rtl_priv* adapter; } ;


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
 int VAR_14 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static u8 FUNC_2(struct btc_coexist *VAR_15)
{
 struct rtl_priv *VAR_16 = VAR_15->adapter;
 struct btc_bt_link_info *VAR_17 = &VAR_15->bt_link_info;
 struct btc_stack_info *VAR_18 = &VAR_15->stack_info;
 bool VAR_19 = 0;
 u8 VAR_20 = VAR_12;
 u8 VAR_21 = 0;

 VAR_15->btc_get(VAR_15, VAR_0, &VAR_19);

 if (!VAR_17->bt_link_exist) {
  FUNC_0(VAR_16, VAR_13, VAR_14,
    "No BT link exists!!!\n");
  return VAR_20;
 }

 if (VAR_17->sco_exist)
  VAR_21++;
 if (VAR_17->hid_exist)
  VAR_21++;
 if (VAR_17->pan_exist)
  VAR_21++;
 if (VAR_17->a2dp_exist)
  VAR_21++;

 if (VAR_21 == 1) {
  if (VAR_17->sco_exist) {
   FUNC_0(VAR_16, VAR_13, VAR_14,
     "SCO only\n");
   VAR_20 = VAR_10;
  } else {
   if (VAR_17->hid_exist) {
    FUNC_0(VAR_16, VAR_13, VAR_14,
      "HID only\n");
    VAR_20 = VAR_3;
   } else if (VAR_17->a2dp_exist) {
    FUNC_0(VAR_16, VAR_13, VAR_14,
      "A2DP only\n");
    VAR_20 = VAR_1;
   } else if (VAR_17->pan_exist) {
    if (VAR_19) {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "PAN(HS) only\n");
     VAR_20 =
      VAR_9;
    } else {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "PAN(EDR) only\n");
     VAR_20 =
      VAR_6;
    }
   }
  }
 } else if (VAR_21 == 2) {
  if (VAR_17->sco_exist) {
   if (VAR_17->hid_exist) {
    FUNC_0(VAR_16, VAR_13, VAR_14,
      "SCO + HID\n");
    VAR_20 = VAR_10;
   } else if (VAR_17->a2dp_exist) {
    FUNC_0(VAR_16, VAR_13, VAR_14,
      "SCO + A2DP ==> SCO\n");
    VAR_20 = VAR_8;
   } else if (VAR_17->pan_exist) {
    if (VAR_19) {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "SCO + PAN(HS)\n");
     VAR_20 = VAR_10;
    } else {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "SCO + PAN(EDR)\n");
     VAR_20 =
      VAR_11;
    }
   }
  } else {
   if (VAR_17->hid_exist &&
       VAR_17->a2dp_exist) {
    if (VAR_18->num_of_hid >= 2) {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "HID*2 + A2DP\n");
     VAR_20 =
     VAR_5;
    } else {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "HID + A2DP\n");
     VAR_20 =
         VAR_4;
    }
   } else if (VAR_17->hid_exist &&
       VAR_17->pan_exist) {
    if (VAR_19) {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "HID + PAN(HS)\n");
     VAR_20 = VAR_3;
    } else {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "HID + PAN(EDR)\n");
     VAR_20 =
         VAR_8;
    }
   } else if (VAR_17->pan_exist &&
       VAR_17->a2dp_exist) {
    if (VAR_19) {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "A2DP + PAN(HS)\n");
     VAR_20 =
         VAR_2;
    } else {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "A2DP + PAN(EDR)\n");
     VAR_20 =
         VAR_7;
    }
   }
  }
 } else if (VAR_21 == 3) {
  if (VAR_17->sco_exist) {
   if (VAR_17->hid_exist &&
       VAR_17->a2dp_exist) {
    FUNC_0(VAR_16, VAR_13, VAR_14,
      "SCO + HID + A2DP ==> HID\n");
    VAR_20 = VAR_8;
   } else if (VAR_17->hid_exist &&
       VAR_17->pan_exist) {
    if (VAR_19) {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "SCO + HID + PAN(HS)\n");
     VAR_20 = VAR_10;
    } else {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "SCO + HID + PAN(EDR)\n");
     VAR_20 =
      VAR_11;
    }
   } else if (VAR_17->pan_exist &&
       VAR_17->a2dp_exist) {
    if (VAR_19) {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "SCO + A2DP + PAN(HS)\n");
     VAR_20 = VAR_10;
    } else {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "SCO + A2DP + PAN(EDR)\n");
     VAR_20 =
         VAR_8;
    }
   }
  } else {
   if (VAR_17->hid_exist &&
       VAR_17->pan_exist &&
       VAR_17->a2dp_exist) {
    if (VAR_19) {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "HID + A2DP + PAN(HS)\n");
     VAR_20 =
         VAR_4;
    } else {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "HID + A2DP + PAN(EDR)\n");
     VAR_20 =
     VAR_5;
    }
   }
  }
 } else if (VAR_21 >= 3) {
  if (VAR_17->sco_exist) {
   if (VAR_17->hid_exist &&
       VAR_17->pan_exist &&
       VAR_17->a2dp_exist) {
    if (VAR_19) {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "ErrorSCO+HID+A2DP+PAN(HS)\n");

    } else {
     FUNC_0(VAR_16, VAR_13,
       VAR_14,
       "SCO+HID+A2DP+PAN(EDR)\n");
     VAR_20 =
         VAR_8;
    }
   }
  }
 }

 return VAR_20;
}
