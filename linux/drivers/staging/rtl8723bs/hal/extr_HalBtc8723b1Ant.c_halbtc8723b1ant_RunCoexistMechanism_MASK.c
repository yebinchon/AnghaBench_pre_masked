
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_27__ {scalar_t__ bScoExist; scalar_t__ bBtLinkExist; scalar_t__ bA2dpExist; } ;
struct TYPE_26__ {int (* fBtcGet ) (TYPE_1__*,int ,int*) ;int (* fBtcSet ) (TYPE_1__*,int ,int*) ;scalar_t__ bStopCoexDm; scalar_t__ bManualControl; TYPE_2__ btLinkInfo; } ;
struct TYPE_25__ {scalar_t__ btStatus; } ;
struct TYPE_24__ {scalar_t__ bC2hBtInquiryPage; scalar_t__ bUnderIps; } ;
typedef TYPE_1__* PBTC_COEXIST ;
typedef TYPE_2__* PBTC_BT_LINK_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int,int,int) ;
 int FUNC_9 (TYPE_1__*,int ,int,int,int ,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 TYPE_11__* VAR_16 ;
 TYPE_10__* VAR_17 ;
 int FUNC_12 (TYPE_1__*,int ,int*) ;
 int FUNC_13 (TYPE_1__*,int ,int*) ;
 int FUNC_14 (TYPE_1__*,int ,int*) ;
 int FUNC_15 (TYPE_1__*,int ,int*) ;
 int FUNC_16 (TYPE_1__*,int ,int*) ;
 int FUNC_17 (TYPE_1__*,int ,int*) ;
 int FUNC_18 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void FUNC_19(PBTC_COEXIST VAR_18)
{
 PBTC_BT_LINK_INFO VAR_19 = &VAR_18->btLinkInfo;
 bool VAR_20 = 0, VAR_21 = 0;
 bool VAR_22 = 0;
 bool VAR_23 = 0;
 u8 VAR_24 = 5;
 u32 VAR_25 = 0;
 u32 VAR_26 = 0;

 FUNC_0(VAR_7, VAR_0, ("[BTCoex], RunCoexistMechanism() ===>\n"));

 if (VAR_18->bManualControl) {
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], RunCoexistMechanism(), return for Manual CTRL <===\n"));
  return;
 }

 if (VAR_18->bStopCoexDm) {
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], RunCoexistMechanism(), return for Stop Coex DM <===\n"));
  return;
 }

 if (VAR_17->bUnderIps) {
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], wifi is under IPS !!!\n"));
  return;
 }

 if (
  (VAR_10 == VAR_16->btStatus) ||
  (VAR_12 == VAR_16->btStatus) ||
  (VAR_11 == VAR_16->btStatus)
 ){
  VAR_22 = 1;
 }

 VAR_18->fBtcSet(
  VAR_18,
  VAR_9,
  &VAR_22
 );
 VAR_18->fBtcGet(
  VAR_18,
  VAR_2,
  &VAR_20
 );

 VAR_18->fBtcGet(
  VAR_18,
  VAR_6,
  &VAR_25
 );
 VAR_26 = VAR_25>>16;

 if ((VAR_26 >= 2) || (VAR_25&VAR_15)) {
  FUNC_0(
   VAR_8,
   VAR_13,
   (
    "############# [BTCoex],  Multi-Port numOfWifiLink = %d, wifiLinkStatus = 0x%x\n",
    VAR_26,
    VAR_25
   )
  );
  FUNC_9(VAR_18, VAR_14, 0, 0, 0, 0);
  FUNC_8(VAR_18, VAR_14, 0, VAR_23, VAR_24);

  if ((VAR_19->bA2dpExist) && (VAR_17->bC2hBtInquiryPage)) {
   FUNC_0(
    VAR_8,
    VAR_13,
    ("############# [BTCoex],  BT Is Inquirying\n")
   );
   FUNC_1(VAR_18);
  } else
   FUNC_4(VAR_18);

  return;
 }

 if ((VAR_19->bBtLinkExist) && (VAR_20)) {
  FUNC_9(VAR_18, VAR_14, 1, 1, 0, 1);

  if (VAR_19->bScoExist)
   FUNC_8(VAR_18, VAR_14, 0, 1, 0x5);
  else
   FUNC_8(VAR_18, VAR_14, 0, 1, 0x8);

  FUNC_11(VAR_18, 1);
  FUNC_10(VAR_18);
 } else {
  FUNC_9(VAR_18, VAR_14, 0, 0, 0, 0);

  FUNC_8(VAR_18, VAR_14, 0, 0, 0x5);

  FUNC_11(VAR_18, 0);
  FUNC_10(VAR_18);
 }

 VAR_18->fBtcGet(VAR_18, VAR_1, &VAR_21);
 if (VAR_17->bC2hBtInquiryPage) {
  FUNC_0(
   VAR_8,
   VAR_13,
   ("############# [BTCoex],  BT Is Inquirying\n")
  );
  FUNC_1(VAR_18);
  return;
 } else if (VAR_21) {
  FUNC_2(VAR_18);
  return;
 }


 if (!VAR_20) {
  bool VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;

  FUNC_0(VAR_7, VAR_0, ("[BTCoex], wifi is non connected-idle !!!\n"));

  VAR_18->fBtcGet(VAR_18, VAR_5, &VAR_27);
  VAR_18->fBtcGet(VAR_18, VAR_3, &VAR_28);
  VAR_18->fBtcGet(VAR_18, VAR_4, &VAR_29);

  if (VAR_27 || VAR_28 || VAR_29) {
    if (VAR_27)
    FUNC_7(VAR_18);
    else
    FUNC_6(VAR_18);
  } else
   FUNC_5(VAR_18);
 } else
  FUNC_3(VAR_18);
}
