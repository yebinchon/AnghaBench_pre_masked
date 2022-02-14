
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_15__ {scalar_t__ btStatus; int bAutoTdmaAdjust; } ;
struct TYPE_14__ {int bC2hBtInfoReqSent; int** btInfoC2h; int btRetryCnt; int bC2hBtPage; int btRssi; int btInfoExt; int bBtTxRxMask; int bC2hBtInquiryPage; int bBtLinkExist; int bPanExist; int bA2dpExist; int bHidExist; int bScoExist; int popEventCnt; int * btInfoC2hCnt; } ;
struct TYPE_13__ {int (* fBtcSet ) (TYPE_1__*,int ,int*) ;int bStopCoexDm; int bManualControl; int (* fBtcGet ) (TYPE_1__*,int ,int*) ;int (* fBtcSetBtReg ) (TYPE_1__*,int ,int,int) ;} ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_7__* VAR_29 ;
 TYPE_6__* VAR_30 ;
 int FUNC_5 (TYPE_1__*,int ,int*) ;
 int FUNC_6 (TYPE_1__*,int ,int,int) ;
 int FUNC_7 (TYPE_1__*,int ,int*) ;
 int FUNC_8 (TYPE_1__*,int ,int*) ;

void FUNC_9(
 PBTC_COEXIST VAR_31, u8 *VAR_32, u8 VAR_33
)
{
 u8 VAR_34 = 0;
 u8 VAR_35, VAR_36 = 0;
 bool VAR_37 = 0;
 bool VAR_38 = 0;

 VAR_30->bC2hBtInfoReqSent = 0;

 VAR_36 = VAR_32[0]&0xf;
 if (VAR_36 >= VAR_25)
  VAR_36 = VAR_26;
 VAR_30->btInfoC2hCnt[VAR_36]++;

 FUNC_0(
  VAR_8,
  VAR_28,
  ("[BTCoex], Bt info[%d], length =%d, hex data =[",
  VAR_36,
  VAR_33)
 );
 for (VAR_35 = 0; VAR_35 < VAR_33; VAR_35++) {
  VAR_30->btInfoC2h[VAR_36][VAR_35] = VAR_32[VAR_35];
  if (VAR_35 == 1)
   VAR_34 = VAR_32[VAR_35];
  if (VAR_35 == VAR_33-1)
   FUNC_0(
    VAR_8, VAR_28, ("0x%02x]\n", VAR_32[VAR_35])
   );
  else
   FUNC_0(VAR_8, VAR_28, ("0x%02x, ", VAR_32[VAR_35]));
 }

 if (VAR_26 != VAR_36) {
  VAR_30->btRetryCnt = VAR_30->btInfoC2h[VAR_36][2]&0xf;

  if (VAR_30->btRetryCnt >= 1)
   VAR_30->popEventCnt++;

  if (VAR_30->btInfoC2h[VAR_36][2]&0x20)
   VAR_30->bC2hBtPage = 1;
  else
   VAR_30->bC2hBtPage = 0;

  VAR_30->btRssi = VAR_30->btInfoC2h[VAR_36][3]*2-90;


  VAR_30->btInfoExt = VAR_30->btInfoC2h[VAR_36][4];

  VAR_30->bBtTxRxMask = (VAR_30->btInfoC2h[VAR_36][2]&0x40);
  VAR_31->fBtcSet(VAR_31, VAR_10, &VAR_30->bBtTxRxMask);

  if (!VAR_30->bBtTxRxMask) {

   FUNC_0(VAR_7, VAR_0, ("[BTCoex], Switch BT TRx Mask since BT RF REG 0x3C != 0x15\n"));
   VAR_31->fBtcSetBtReg(VAR_31, VAR_3, 0x3c, 0x15);
  }



  if (VAR_30->btInfoExt & VAR_1) {
   FUNC_0(
    VAR_7,
    VAR_0,
    ("[BTCoex], BT ext info bit1 check, send wifi BW&Chnl to BT!!\n")
   );
   VAR_31->fBtcGet(VAR_31, VAR_4, &VAR_37);
   if (VAR_37)
    FUNC_1(VAR_31, VAR_5);
   else
    FUNC_1(VAR_31, VAR_6);
  }

  if (VAR_30->btInfoExt & VAR_2) {
   if (!VAR_31->bManualControl && !VAR_31->bStopCoexDm) {
    FUNC_0(
     VAR_7,
     VAR_0,
     ("[BTCoex], BT ext info bit3 check, set BT NOT to ignore Wlan active!!\n")
    );
    FUNC_2(VAR_31, VAR_27, 0);
   }
  } else {

  }
 }


 if (VAR_34 & VAR_22)
  VAR_30->bC2hBtInquiryPage = 1;
 else
  VAR_30->bC2hBtInquiryPage = 0;


 if (!(VAR_34&VAR_19)) {
  VAR_30->bBtLinkExist = 0;
  VAR_30->bPanExist = 0;
  VAR_30->bA2dpExist = 0;
  VAR_30->bHidExist = 0;
  VAR_30->bScoExist = 0;
 } else {
  VAR_30->bBtLinkExist = 1;
  if (VAR_34 & VAR_20)
   VAR_30->bPanExist = 1;
  else
   VAR_30->bPanExist = 0;

  if (VAR_34 & VAR_17)
   VAR_30->bA2dpExist = 1;
  else
   VAR_30->bA2dpExist = 0;

  if (VAR_34 & VAR_21)
   VAR_30->bHidExist = 1;
  else
   VAR_30->bHidExist = 0;

  if (VAR_34 & VAR_24)
   VAR_30->bScoExist = 1;
  else
   VAR_30->bScoExist = 0;
 }

 FUNC_4(VAR_31);

 VAR_34 = VAR_34 & 0x1f;

 if (!(VAR_34&VAR_19)) {
  VAR_29->btStatus = VAR_15;
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), BT Non-Connected idle!!!\n"));
 } else if (VAR_34 == VAR_19) {

  VAR_29->btStatus = VAR_13;
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), BT Connected-idle!!!\n"));
 } else if (
  (VAR_34&VAR_24) ||
  (VAR_34&VAR_23)
 ) {
  VAR_29->btStatus = VAR_16;
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), BT SCO busy!!!\n"));
 } else if (VAR_34&VAR_18) {
  if (VAR_11 != VAR_29->btStatus)
   VAR_29->bAutoTdmaAdjust = 0;

  VAR_29->btStatus = VAR_11;
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), BT ACL busy!!!\n"));
 } else {
  VAR_29->btStatus = VAR_14;
  FUNC_0(VAR_7, VAR_0, ("[BTCoex], BtInfoNotify(), BT Non-Defined state!!!\n"));
 }

 if (
  (VAR_11 == VAR_29->btStatus) ||
  (VAR_16 == VAR_29->btStatus) ||
  (VAR_12 == VAR_29->btStatus)
 )
  VAR_38 = 1;
 else
  VAR_38 = 0;
 VAR_31->fBtcSet(VAR_31, VAR_9, &VAR_38);

 FUNC_3(VAR_31);
}
