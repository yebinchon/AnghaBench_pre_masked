
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {void* bt_profile_action; void* bt_profile_case; int cstate; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int c2h_bt_info_original; scalar_t__ c2h_bt_info_req_sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 TYPE_2__ VAR_14 ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_15)
{
 struct rtl_priv *VAR_16 = FUNC_7(VAR_15);
 u8 VAR_17;
 FUNC_0(VAR_16, VAR_11, VAR_12,
  "[BTCoex] Get bt info by fw!!\n");

 FUNC_1(VAR_15);

 if (VAR_14) {
   FUNC_0(VAR_16, VAR_11, VAR_13,
    "[BTCoex] c2h for bt_info not rcvd yet!!\n");
 }

 VAR_17 = VAR_14;



 FUNC_4(VAR_15);
 FUNC_6(VAR_15);

 if (FUNC_5(VAR_15)) {
  VAR_16->btcoexist.bt_profile_case = VAR_5;
  VAR_16->btcoexist.bt_profile_action = VAR_5;
  FUNC_0(VAR_16, VAR_11, VAR_12,
  "Action 2-Ant common.\n");
 } else {
  if ((VAR_17 & VAR_2) ||
   (VAR_17 & VAR_3) ||
   (VAR_17 & VAR_4)) {
    VAR_16->btcoexist.cstate |=
     VAR_10;
    VAR_16->btcoexist.bt_profile_case =
     VAR_7;
    VAR_16->btcoexist.bt_profile_action =
     VAR_7;
    FUNC_0(VAR_16, VAR_11, VAR_12,
      "[BTCoex], BTInfo: bHid|bSCOBusy|bSCOeSCO\n");
    FUNC_3(VAR_15);
  } else if ((VAR_17 & VAR_1) ||
    (VAR_17 & VAR_0)) {
    VAR_16->btcoexist.cstate |=
     VAR_9;
    VAR_16->btcoexist.bt_profile_case =
     VAR_6;
    VAR_16->btcoexist.bt_profile_action =
     VAR_6;
    FUNC_0(VAR_16, VAR_11, VAR_12,
      "BTInfo: bFTP|bA2DP\n");
    FUNC_2(VAR_15);
  } else {
    VAR_16->btcoexist.cstate |=
     VAR_10;
    VAR_16->btcoexist.bt_profile_case =
     VAR_8;
    VAR_16->btcoexist.bt_profile_action =
     VAR_8;
    FUNC_0(VAR_16, VAR_11, VAR_12,
      "[BTCoex], BTInfo: undefined case!!!!\n");
    FUNC_3(VAR_15);
  }
 }
}
