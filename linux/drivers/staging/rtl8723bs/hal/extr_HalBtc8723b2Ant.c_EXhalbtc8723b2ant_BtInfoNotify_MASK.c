
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_16__ {scalar_t__ btStatus; int bLimitedDig; } ;
struct TYPE_15__ {int bC2hBtInfoReqSent; int** btInfoC2h; int btRetryCnt; int btRssi; int btInfoExt; int bBtTxRxMask; int bC2hBtInquiryPage; int bBtLinkExist; int bPanExist; int bA2dpExist; int bHidExist; int bScoExist; int * btInfoC2hCnt; } ;
struct TYPE_14__ {int (* fBtcSet ) (TYPE_1__*,int ,int*) ;int (* fBtcGet ) (TYPE_1__*,int ,int*) ;int (* fBtcSetBtReg ) (TYPE_1__*,int ,int,int) ;scalar_t__ bManualControl; } ;
typedef TYPE_1__* PBTC_COEXIST ;


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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_8__* VAR_30 ;
 TYPE_7__* VAR_31 ;
 int FUNC_5 (TYPE_1__*,int ,int*) ;
 int FUNC_6 (TYPE_1__*,int ,int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int*) ;
 int FUNC_8 (TYPE_1__*,int ,int*) ;
 int FUNC_9 (TYPE_1__*,int ,int*) ;

void FUNC_10(
 PBTC_COEXIST VAR_32, u8 *VAR_33, u8 VAR_34
)
{
 u8 VAR_35 = 0;
 u8 VAR_36, VAR_37 = 0;
 bool VAR_38 = 0, VAR_39 = 0;
 bool VAR_40 = 0;

 VAR_31->bC2hBtInfoReqSent = 0;

 VAR_37 = VAR_33[0]&0xf;
 if (VAR_37 >= VAR_26)
  VAR_37 = VAR_27;

 VAR_31->btInfoC2hCnt[VAR_37]++;

 FUNC_0(VAR_8, VAR_29, ("[BTCoex], Bt info[%d], length =%d, hex data =[", VAR_37, VAR_34));
 for (VAR_36 = 0; VAR_36 < VAR_34; VAR_36++) {
  VAR_31->btInfoC2h[VAR_37][VAR_36] = VAR_33[VAR_36];
  if (VAR_36 == 1)
   VAR_35 = VAR_33[VAR_36];

  if (VAR_36 == VAR_34-1) {
   FUNC_0(VAR_8, VAR_29, ("0x%02x]\n", VAR_33[VAR_36]));
  } else {
   FUNC_0(VAR_8, VAR_29, ("0x%02x, ", VAR_33[VAR_36]));
  }
 }

 if (VAR_32->bManualControl) {
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), return for Manual CTRL<===\n"));
  return;
 }

 if (VAR_27 != VAR_37) {
  VAR_31->btRetryCnt = VAR_31->btInfoC2h[VAR_37][2]&0xf;

  VAR_31->btRssi = VAR_31->btInfoC2h[VAR_37][3]*2+10;

  VAR_31->btInfoExt = VAR_31->btInfoC2h[VAR_37][4];

  VAR_31->bBtTxRxMask = (VAR_31->btInfoC2h[VAR_37][2]&0x40);
  VAR_32->fBtcSet(VAR_32, VAR_11, &VAR_31->bBtTxRxMask);
  if (VAR_31->bBtTxRxMask) {

   FUNC_0(VAR_7, VAR_0, ("[BTCoex], Switch BT TRx Mask since BT RF REG 0x3C != 0x01\n"));
   VAR_32->fBtcSetBtReg(VAR_32, VAR_3, 0x3c, 0x01);
  }



  if ((VAR_31->btInfoExt & VAR_1)) {
   FUNC_0(VAR_7, VAR_0, ("[BTCoex], BT ext info bit1 check, send wifi BW&Chnl to BT!!\n"));
   VAR_32->fBtcGet(VAR_32, VAR_4, &VAR_40);

   if (VAR_40)
    FUNC_1(VAR_32, VAR_5);
   else
    FUNC_1(VAR_32, VAR_6);
  }

  if ((VAR_31->btInfoExt & VAR_2)) {
   FUNC_0(VAR_7, VAR_0, ("[BTCoex], BT ext info bit3 check, set BT NOT to ignore Wlan active!!\n"));
   FUNC_2(VAR_32, VAR_28, 0);
  } else {

  }
 }


 if (VAR_35 & VAR_23)
  VAR_31->bC2hBtInquiryPage = 1;
 else
  VAR_31->bC2hBtInquiryPage = 0;


 if (!(VAR_35&VAR_20)) {
  VAR_31->bBtLinkExist = 0;
  VAR_31->bPanExist = 0;
  VAR_31->bA2dpExist = 0;
  VAR_31->bHidExist = 0;
  VAR_31->bScoExist = 0;
 } else {
  VAR_31->bBtLinkExist = 1;
  if (VAR_35 & VAR_21)
   VAR_31->bPanExist = 1;
  else
   VAR_31->bPanExist = 0;
  if (VAR_35 & VAR_18)
   VAR_31->bA2dpExist = 1;
  else
   VAR_31->bA2dpExist = 0;
  if (VAR_35 & VAR_22)
   VAR_31->bHidExist = 1;
  else
   VAR_31->bHidExist = 0;
  if (VAR_35 & VAR_25)
   VAR_31->bScoExist = 1;
  else
   VAR_31->bScoExist = 0;
 }

 FUNC_4(VAR_32);

 if (!(VAR_35&VAR_20)) {
  VAR_30->btStatus = VAR_16;
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), BT Non-Connected idle!!!\n"));
 } else if (VAR_35 == VAR_20) {
  VAR_30->btStatus = VAR_14;
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), BT Connected-idle!!!\n"));
 } else if (
  (VAR_35&VAR_25) ||
  (VAR_35&VAR_24)
 ) {
  VAR_30->btStatus = VAR_17;
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), BT SCO busy!!!\n"));
 } else if (VAR_35&VAR_19) {
  VAR_30->btStatus = VAR_12;
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), BT ACL busy!!!\n"));
 } else {
  VAR_30->btStatus = VAR_15;
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), BT Non-Defined state!!!\n"));
 }

 if (
  (VAR_12 == VAR_30->btStatus) ||
  (VAR_17 == VAR_30->btStatus) ||
  (VAR_13 == VAR_30->btStatus)
 ) {
  VAR_38 = 1;
  VAR_39 = 1;
 } else {
  VAR_38 = 0;
  VAR_39 = 0;
 }

 VAR_32->fBtcSet(VAR_32, VAR_10, &VAR_38);

 VAR_30->bLimitedDig = VAR_39;
 VAR_32->fBtcSet(VAR_32, VAR_9, &VAR_39);

 FUNC_3(VAR_32);
}
