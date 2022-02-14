
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ bA2dpExist; scalar_t__ bPanExist; scalar_t__ bHidExist; scalar_t__ bScoExist; int bBtLinkExist; } ;
struct TYPE_5__ {int (* fBtcGet ) (TYPE_1__*,int ,int*) ;TYPE_2__ btLinkInfo; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BT_LINK_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
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
 int FUNC_1 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static u8 FUNC_2(PBTC_COEXIST VAR_14)
{
 PBTC_BT_LINK_INFO VAR_15 = &VAR_14->btLinkInfo;
 bool VAR_16 = 0;
 u8 VAR_17 = VAR_13;
 u8 VAR_18 = 0;

 VAR_14->fBtcGet(VAR_14, VAR_1, &VAR_16);

 if (!VAR_15->bBtLinkExist) {
  FUNC_0(
   VAR_2,
   VAR_0,
   ("[BTCoex], No BT link exists!!!\n")
  );
  return VAR_17;
 }

 if (VAR_15->bScoExist)
  VAR_18++;
 if (VAR_15->bHidExist)
  VAR_18++;
 if (VAR_15->bPanExist)
  VAR_18++;
 if (VAR_15->bA2dpExist)
  VAR_18++;

 if (VAR_18 == 1) {
  if (VAR_15->bScoExist) {
   FUNC_0(
    VAR_2,
    VAR_0,
    ("[BTCoex], BT Profile = SCO only\n")
   );
   VAR_17 = VAR_12;
  } else {
   if (VAR_15->bHidExist) {
    FUNC_0(
     VAR_2,
     VAR_0,
     ("[BTCoex], BT Profile = HID only\n")
    );
    VAR_17 = VAR_5;
   } else if (VAR_15->bA2dpExist) {
    FUNC_0(
     VAR_2,
     VAR_0,
     ("[BTCoex], BT Profile = A2DP only\n")
    );
    VAR_17 = VAR_3;
   } else if (VAR_15->bPanExist) {
    if (VAR_16) {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = PAN(HS) only\n")
     );
     VAR_17 = VAR_11;
    } else {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = PAN(EDR) only\n")
     );
     VAR_17 = VAR_8;
    }
   }
  }
 } else if (VAR_18 == 2) {
  if (VAR_15->bScoExist) {
   if (VAR_15->bHidExist) {
    FUNC_0(
     VAR_2,
     VAR_0,
     ("[BTCoex], BT Profile = SCO + HID\n")
    );
    VAR_17 = VAR_5;
   } else if (VAR_15->bA2dpExist) {
    FUNC_0(
     VAR_2,
     VAR_0,
     ("[BTCoex], BT Profile = SCO + A2DP ==> SCO\n")
    );
    VAR_17 = VAR_12;
   } else if (VAR_15->bPanExist) {
    if (VAR_16) {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = SCO + PAN(HS)\n")
     );
     VAR_17 = VAR_12;
    } else {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = SCO + PAN(EDR)\n")
     );
     VAR_17 = VAR_10;
    }
   }
  } else {
   if (VAR_15->bHidExist && VAR_15->bA2dpExist) {
    FUNC_0(
     VAR_2,
     VAR_0,
     ("[BTCoex], BT Profile = HID + A2DP\n")
    );
    VAR_17 = VAR_6;
   } else if (VAR_15->bHidExist && VAR_15->bPanExist) {
    if (VAR_16) {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = HID + PAN(HS)\n")
     );
     VAR_17 = VAR_6;
    } else {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = HID + PAN(EDR)\n")
     );
     VAR_17 = VAR_10;
    }
   } else if (VAR_15->bPanExist && VAR_15->bA2dpExist) {
    if (VAR_16) {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = A2DP + PAN(HS)\n")
     );
     VAR_17 = VAR_4;
    } else {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = A2DP + PAN(EDR)\n")
     );
     VAR_17 = VAR_9;
    }
   }
  }
 } else if (VAR_18 == 3) {
  if (VAR_15->bScoExist) {
   if (VAR_15->bHidExist && VAR_15->bA2dpExist) {
    FUNC_0(
     VAR_2,
     VAR_0,
     ("[BTCoex], BT Profile = SCO + HID + A2DP ==> HID\n")
    );
    VAR_17 = VAR_5;
   } else if (
    VAR_15->bHidExist && VAR_15->bPanExist
   ) {
    if (VAR_16) {
     FUNC_0(VAR_2, VAR_0, ("[BTCoex], BT Profile = SCO + HID + PAN(HS)\n"));
     VAR_17 = VAR_6;
    } else {
     FUNC_0(VAR_2, VAR_0, ("[BTCoex], BT Profile = SCO + HID + PAN(EDR)\n"));
     VAR_17 = VAR_10;
    }
   } else if (VAR_15->bPanExist && VAR_15->bA2dpExist) {
    if (VAR_16) {
     FUNC_0(VAR_2, VAR_0, ("[BTCoex], BT Profile = SCO + A2DP + PAN(HS)\n"));
     VAR_17 = VAR_12;
    } else {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = SCO + A2DP + PAN(EDR) ==> HID\n")
     );
     VAR_17 = VAR_10;
    }
   }
  } else {
   if (
    VAR_15->bHidExist &&
    VAR_15->bPanExist &&
    VAR_15->bA2dpExist
   ) {
    if (VAR_16) {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = HID + A2DP + PAN(HS)\n")
     );
     VAR_17 = VAR_6;
    } else {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = HID + A2DP + PAN(EDR)\n")
     );
     VAR_17 = VAR_7;
    }
   }
  }
 } else if (VAR_18 >= 3) {
  if (VAR_15->bScoExist) {
   if (
    VAR_15->bHidExist &&
    VAR_15->bPanExist &&
    VAR_15->bA2dpExist
   ) {
    if (VAR_16) {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], Error!!! BT Profile = SCO + HID + A2DP + PAN(HS)\n")
     );

    } else {
     FUNC_0(
      VAR_2,
      VAR_0,
      ("[BTCoex], BT Profile = SCO + HID + A2DP + PAN(EDR) ==>PAN(EDR)+HID\n")
     );
     VAR_17 = VAR_10;
    }
   }
  }
 }

 return VAR_17;
}
