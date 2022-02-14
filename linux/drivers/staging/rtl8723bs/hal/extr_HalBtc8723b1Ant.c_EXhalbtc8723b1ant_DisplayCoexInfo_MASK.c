
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_65__ TYPE_5__ ;
typedef struct TYPE_64__ TYPE_57__ ;
typedef struct TYPE_63__ TYPE_56__ ;
typedef struct TYPE_62__ TYPE_4__ ;
typedef struct TYPE_61__ TYPE_3__ ;
typedef struct TYPE_60__ TYPE_2__ ;
typedef struct TYPE_59__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
typedef scalar_t__ s32 ;
struct TYPE_65__ {int btdmAntPos; int btdmAntNum; int pgAntNum; } ;
struct TYPE_64__ {scalar_t__ btStatus; int curPsTdma; int backupAmpduMaxTime; int backupRetryLimit; int backupArfrCnt2; int backupArfrCnt1; int bCurIgnoreWlanAct; int bAutoTdmaAdjust; int * psTdmaPara; int bCurLowPenaltyRa; int * wifiChnlInfo; } ;
struct TYPE_63__ {int btInfoExt; scalar_t__ highPriorityRx; int highPriorityTx; scalar_t__ lowPriorityRx; int lowPriorityTx; int nCRCErr_11nAgg; int nCRCErr_11n; int nCRCErr_11g; int nCRCErr_CCK; int nCRCOK_11nAgg; int nCRCOK_11n; int nCRCOK_11g; int nCRCOK_CCK; int nCoexTableType; scalar_t__ bUnderLps; scalar_t__ bUnderIps; scalar_t__* btInfoC2hCnt; int ** btInfoC2h; int popEventCnt; int btRetryCnt; int btRssi; scalar_t__ bC2hBtInquiryPage; scalar_t__ bCCKLock; int nScanAPNum; scalar_t__ bWiFiIsHighPriTask; } ;
struct TYPE_62__ {scalar_t__ bSlaveRole; int bA2dpExist; int bPanExist; int bHidExist; int bScoExist; } ;
struct TYPE_59__ {int raMask; int aggBufSize; scalar_t__ bBtCtrlAggBufSize; scalar_t__ bRejectAggPkt; int rpwmVal; int lpsVal; scalar_t__ bBtDisabled; } ;
struct TYPE_60__ {int hciVersion; scalar_t__ bProfileNotified; } ;
struct TYPE_61__ {int* cliBuf; scalar_t__ (* fBtcRead4Byte ) (TYPE_3__*,int) ;int (* fBtcRead1Byte ) (TYPE_3__*,int) ;int (* fBtcDispDbgMsg ) (TYPE_3__*,int ) ;int (* fBtcRead2Byte ) (TYPE_3__*,int) ;TYPE_1__ btInfo; scalar_t__ bManualControl; int (* fBtcGet ) (TYPE_3__*,int ,scalar_t__*) ;scalar_t__ bStopCoexDm; TYPE_4__ btLinkInfo; TYPE_2__ stackInfo; TYPE_5__ boardInfo; } ;
typedef TYPE_2__* PBTC_STACK_INFO ;
typedef TYPE_3__* PBTC_COEXIST ;
typedef TYPE_4__* PBTC_BT_LINK_INFO ;
typedef TYPE_5__* PBTC_BOARD_INFO ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int ,char*,...) ;
 int * VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 TYPE_57__* VAR_35 ;
 TYPE_56__* VAR_36 ;
 int FUNC_2 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_3__*,int ,int*) ;
 int FUNC_4 (TYPE_3__*,int ,int*) ;
 int FUNC_5 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_6 (TYPE_3__*,int ,int*) ;
 int FUNC_7 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_8 (TYPE_3__*,int ,int*) ;
 int FUNC_9 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*,int) ;
 int FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 (TYPE_3__*,int) ;
 scalar_t__ FUNC_18 (TYPE_3__*,int) ;
 scalar_t__ FUNC_19 (TYPE_3__*,int) ;
 scalar_t__ FUNC_20 (TYPE_3__*,int) ;
 int FUNC_21 (TYPE_3__*,int) ;
 scalar_t__ FUNC_22 (TYPE_3__*,int) ;
 int FUNC_23 (TYPE_3__*,int) ;
 int FUNC_24 (TYPE_3__*,int ,int*) ;
 scalar_t__ FUNC_25 (TYPE_3__*,int) ;
 scalar_t__ FUNC_26 (TYPE_3__*,int) ;
 scalar_t__ FUNC_27 (TYPE_3__*,int) ;
 int FUNC_28 (TYPE_3__*,int) ;
 int FUNC_29 (TYPE_3__*,int) ;
 scalar_t__ FUNC_30 (TYPE_3__*,int) ;
 int FUNC_31 (TYPE_3__*,int) ;
 scalar_t__ FUNC_32 (TYPE_3__*,int) ;
 int FUNC_33 (TYPE_3__*,int) ;
 scalar_t__ FUNC_34 (TYPE_3__*,int) ;
 int FUNC_35 (TYPE_3__*,int ,int*) ;
 int FUNC_36 (TYPE_3__*,int) ;
 scalar_t__ FUNC_37 (TYPE_3__*,int) ;
 scalar_t__ FUNC_38 (TYPE_3__*,int) ;
 scalar_t__ FUNC_39 (TYPE_3__*,int) ;
 scalar_t__ FUNC_40 (TYPE_3__*,int) ;
 int FUNC_41 (TYPE_3__*,int) ;
 int FUNC_42 (TYPE_3__*,int) ;
 scalar_t__ FUNC_43 (TYPE_3__*,int) ;
 scalar_t__ FUNC_44 (TYPE_3__*,int) ;
 scalar_t__ FUNC_45 (TYPE_3__*,int) ;
 int FUNC_46 (TYPE_3__*,int ,int*) ;
 int FUNC_47 (TYPE_3__*,int ) ;
 int FUNC_48 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_49 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_50 (TYPE_3__*,int ,int*) ;
 int FUNC_51 (TYPE_3__*,int ,int*) ;

void FUNC_52(PBTC_COEXIST VAR_37)
{
 PBTC_BOARD_INFO VAR_38 = &VAR_37->boardInfo;
 PBTC_STACK_INFO VAR_39 = &VAR_37->stackInfo;
 PBTC_BT_LINK_INFO VAR_40 = &VAR_37->btLinkInfo;
 u8 *VAR_41 = VAR_37->cliBuf;
 u8 VAR_42[4], VAR_43, VAR_44, VAR_45 = 0;
 u16 VAR_46[4];
 u32 VAR_47[4];
 bool VAR_48 = 0;
 bool VAR_49 = 0;
 bool VAR_50 = 0;
 bool VAR_51 = 0;
 bool VAR_52 = 0;
 bool VAR_53 = 0;
 bool VAR_54 = 0;
 s32 VAR_55 = 0, VAR_56 = 0;
 u32 VAR_57, VAR_58, VAR_59, VAR_60, VAR_61;
 u8 VAR_62, VAR_63;
 u32 VAR_64 = 0, VAR_65 = 0;
 static u8 VAR_66;

 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n ============[BT Coexist info]============"
 );
 FUNC_0(VAR_41);

 if (VAR_37->bManualControl) {
  FUNC_1(
   VAR_41,
   VAR_26,
   "\r\n ============[Under Manual Control]============"
  );
  FUNC_0(VAR_41);
  FUNC_1(VAR_41,
   VAR_26,
   "\r\n =========================================="
  );
  FUNC_0(VAR_41);
 }
 if (VAR_37->bStopCoexDm) {
  FUNC_1(
   VAR_41,
   VAR_26,
   "\r\n ============[Coex is STOPPED]============"
  );
  FUNC_0(VAR_41);
  FUNC_1(
   VAR_41,
   VAR_26,
   "\r\n =========================================="
  );
  FUNC_0(VAR_41);
 }

 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d/ %d/ %d", "Ant PG Num/ Ant Mech/ Ant Pos:", VAR_38->pgAntNum,

  VAR_38->btdmAntNum,
  VAR_38->btdmAntPos
 );
 FUNC_0(VAR_41);

 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %s / %d", "BT stack/ hci ext ver", ((VAR_39->bProfileNotified) ? "Yes" : "No"),

  VAR_39->hciVersion
 );
 FUNC_0(VAR_41);

 VAR_37->fBtcGet(VAR_37, VAR_15, &VAR_65);
 VAR_37->fBtcGet(VAR_37, VAR_17, &VAR_64);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d_%x/ 0x%x/ 0x%x(%d)", "CoexVer/ FwVer/ PatchVer", VAR_29,

  VAR_28,
  VAR_64,
  VAR_65,
  VAR_65
 );
 FUNC_0(VAR_41);

 VAR_37->fBtcGet(VAR_37, VAR_4, &VAR_53);
 VAR_37->fBtcGet(VAR_37, VAR_13, &VAR_62);
 VAR_37->fBtcGet(VAR_37, VAR_14, &VAR_63);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d / %d(%d)", "Dot11 channel / HsChnl(HsMode)", VAR_62,

  VAR_63,
  VAR_53
 );
 FUNC_0(VAR_41);

 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %02x %02x %02x ", "H2C Wifi inform bt chnl Info", VAR_35->wifiChnlInfo[0],

  VAR_35->wifiChnlInfo[1],
  VAR_35->wifiChnlInfo[2]
 );
 FUNC_0(VAR_41);

 VAR_37->fBtcGet(VAR_37, VAR_12, &VAR_55);
 VAR_37->fBtcGet(VAR_37, VAR_11, &VAR_56);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d/ %d", "Wifi rssi/ HS rssi", VAR_55-100, VAR_56-100

 );
 FUNC_0(VAR_41);

 VAR_37->fBtcGet(VAR_37, VAR_8, &VAR_49);
 VAR_37->fBtcGet(VAR_37, VAR_6, &VAR_50);
 VAR_37->fBtcGet(VAR_37, VAR_7, &VAR_48);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d/ %d/ %d/ %s", "Wifi bLink/ bRoam/ bScan/ bHi-Pri", VAR_50, VAR_48, VAR_49, ((VAR_36->bWiFiIsHighPriTask) ? "1" : "0")

 );
 FUNC_0(VAR_41);

 VAR_37->fBtcGet(VAR_37, VAR_9, &VAR_51);
 VAR_37->fBtcGet(VAR_37, VAR_16, &VAR_57);
 VAR_37->fBtcGet(VAR_37, VAR_5, &VAR_54);
 VAR_37->fBtcGet(
  VAR_37, VAR_19, &VAR_58
 );
 VAR_37->fBtcGet(
  VAR_37, VAR_10, &VAR_52
 );

 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %s / %s/ %s/ AP =%d/ %s ", "Wifi status", (VAR_51 ? "5G" : "2.4G"),

  ((VAR_52) ? "11b" : ((VAR_21 == VAR_57) ? "11bg" : (((VAR_20 == VAR_57) ? "HT40" : "HT20")))),
  ((!VAR_54) ? "idle" : ((VAR_22 == VAR_58) ? "uplink" : "downlink")),
  VAR_36->nScanAPNum,
  (VAR_36->bCCKLock) ? "Lock" : "noLock"
 );
 FUNC_0(VAR_41);

 VAR_37->fBtcGet(
  VAR_37, VAR_18, &VAR_61
 );
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d/ %d/ %d/ %d/ %d", "sta/vwifi/hs/p2pGo/p2pGc", ((VAR_61&VAR_34) ? 1 : 0),

  ((VAR_61&VAR_30) ? 1 : 0),
  ((VAR_61&VAR_31) ? 1 : 0),
  ((VAR_61&VAR_33) ? 1 : 0),
  ((VAR_61&VAR_32) ? 1 : 0)
 );
 FUNC_0(VAR_41);


 VAR_66++;
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = [%s/ %d/ %d/ %d] ", "BT [status/ rssi/ retryCnt/ popCnt]", ((VAR_37->btInfo.bBtDisabled) ? ("disabled") : ((VAR_36->bC2hBtInquiryPage) ? ("inquiry/page scan") : ((VAR_24 == VAR_35->btStatus) ? "non-connected idle" :

  ((VAR_23 == VAR_35->btStatus) ? "connected-idle" : "busy")))),
  VAR_36->btRssi, VAR_36->btRetryCnt, VAR_36->popEventCnt
 );
 FUNC_0(VAR_41);

 if (VAR_66 >= 5) {
  VAR_36->popEventCnt = 0;
  VAR_66 = 0;
 }


 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d / %d / %d / %d", "SCO/HID/PAN/A2DP", VAR_40->bScoExist,

  VAR_40->bHidExist,
  VAR_40->bPanExist,
  VAR_40->bA2dpExist
 );
 FUNC_0(VAR_41);

 if (VAR_39->bProfileNotified) {
  VAR_37->fBtcDispDbgMsg(VAR_37, VAR_1);
 } else {
  FUNC_1(VAR_41, VAR_26, "\r\n %-35s = %s", "BT Role", (VAR_40->bSlaveRole) ? "Slave" : "Master");

  FUNC_0(VAR_41);
 }


 VAR_44 = VAR_36->btInfoExt;
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %s", "BT Info A2DP rate", (VAR_44&VAR_0) ? "Basic rate" : "EDR rate"

 );
 FUNC_0(VAR_41);

 for (VAR_43 = 0; VAR_43 < VAR_25; VAR_43++) {
  if (VAR_36->btInfoC2hCnt[VAR_43]) {
   FUNC_1(
    VAR_41,
    VAR_26,
    "\r\n %-35s = %02x %02x %02x %02x %02x %02x %02x(%d)", VAR_27[VAR_43], VAR_36->btInfoC2h[VAR_43][0], VAR_36->btInfoC2h[VAR_43][1],

    VAR_36->btInfoC2h[VAR_43][2], VAR_36->btInfoC2h[VAR_43][3],
    VAR_36->btInfoC2h[VAR_43][4], VAR_36->btInfoC2h[VAR_43][5],
    VAR_36->btInfoC2h[VAR_43][6], VAR_36->btInfoC2hCnt[VAR_43]
   );
   FUNC_0(VAR_41);
  }
 }
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %s/%s, (0x%x/0x%x)", "PS state, IPS/LPS, (lps/rpwm)", (VAR_36->bUnderIps ? "IPS ON" : "IPS OFF"),

  (VAR_36->bUnderLps ? "LPS ON" : "LPS OFF"),
  VAR_37->btInfo.lpsVal,
  VAR_37->btInfo.rpwmVal
 );
 FUNC_0(VAR_41);
 VAR_37->fBtcDispDbgMsg(VAR_37, VAR_3);

 if (!VAR_37->bManualControl) {

  FUNC_1(
   VAR_41,
   VAR_26,
   "\r\n %-35s", "============[Sw mechanism]============"
  );
  FUNC_0(VAR_41);

  FUNC_1(
   VAR_41,
   VAR_26,
   "\r\n %-35s = %d", "SM[LowPenaltyRA]", VAR_35->bCurLowPenaltyRa

  );
  FUNC_0(VAR_41);

  FUNC_1(
   VAR_41,
   VAR_26,
   "\r\n %-35s = %s/ %s/ %d ", "DelBA/ BtCtrlAgg/ AggSize", (VAR_37->btInfo.bRejectAggPkt ? "Yes" : "No"),

   (VAR_37->btInfo.bBtCtrlAggBufSize ? "Yes" : "No"),
   VAR_37->btInfo.aggBufSize
  );
  FUNC_0(VAR_41);
  FUNC_1(
   VAR_41,
   VAR_26,
   "\r\n %-35s = 0x%x ", "Rate Mask", VAR_37->btInfo.raMask

  );
  FUNC_0(VAR_41);


  FUNC_1(VAR_41, VAR_26, "\r\n %-35s", "============[Fw mechanism]============");
  FUNC_0(VAR_41);

  VAR_45 = VAR_35->curPsTdma;
  FUNC_1(VAR_41, VAR_26, "\r\n %-35s = %02x %02x %02x %02x %02x case-%d (auto:%d)", "PS TDMA", VAR_35->psTdmaPara[0], VAR_35->psTdmaPara[1],

   VAR_35->psTdmaPara[2], VAR_35->psTdmaPara[3],
   VAR_35->psTdmaPara[4], VAR_45, VAR_35->bAutoTdmaAdjust);
  FUNC_0(VAR_41);

  FUNC_1(VAR_41, VAR_26, "\r\n %-35s = %d", "Coex Table Type", VAR_36->nCoexTableType);

  FUNC_0(VAR_41);

  FUNC_1(VAR_41, VAR_26, "\r\n %-35s = %d", "IgnWlanAct", VAR_35->bCurIgnoreWlanAct);

  FUNC_0(VAR_41);






 }


 FUNC_1(VAR_41, VAR_26, "\r\n %-35s", "============[Hw setting]============");
 FUNC_0(VAR_41);

 FUNC_1(VAR_41, VAR_26, "\r\n %-35s = 0x%x/0x%x/0x%x/0x%x", "backup ARFR1/ARFR2/RL/AMaxTime", VAR_35->backupArfrCnt1, VAR_35->backupArfrCnt2, VAR_35->backupRetryLimit, VAR_35->backupAmpduMaxTime);

 FUNC_0(VAR_41);

 VAR_47[0] = VAR_37->fBtcRead4Byte(VAR_37, 0x430);
 VAR_47[1] = VAR_37->fBtcRead4Byte(VAR_37, 0x434);
 VAR_46[0] = VAR_37->fBtcRead2Byte(VAR_37, 0x42a);
 VAR_42[0] = VAR_37->fBtcRead1Byte(VAR_37, 0x456);
 FUNC_1(VAR_41, VAR_26, "\r\n %-35s = 0x%x/0x%x/0x%x/0x%x", "0x430/0x434/0x42a/0x456", VAR_47[0], VAR_47[1], VAR_46[0], VAR_42[0]);

 FUNC_0(VAR_41);

 VAR_42[0] = VAR_37->fBtcRead1Byte(VAR_37, 0x778);
 VAR_47[0] = VAR_37->fBtcRead4Byte(VAR_37, 0x6cc);
 VAR_47[1] = VAR_37->fBtcRead4Byte(VAR_37, 0x880);
 FUNC_1(
  VAR_41, VAR_26,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x", "0x778/0x6cc/0x880[29:25]", VAR_42[0], VAR_47[0], (VAR_47[1]&0x3e000000) >> 25

 );
 FUNC_0(VAR_41);

 VAR_47[0] = VAR_37->fBtcRead4Byte(VAR_37, 0x948);
 VAR_42[0] = VAR_37->fBtcRead1Byte(VAR_37, 0x67);
 VAR_47[1] = VAR_37->fBtcRead4Byte(VAR_37, 0x764);
 VAR_42[1] = VAR_37->fBtcRead1Byte(VAR_37, 0x76e);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x/ 0x%x", "0x948/ 0x67[5] / 0x764 / 0x76e", VAR_47[0], ((VAR_42[0]&0x20) >> 5), (VAR_47[1] & 0xffff), VAR_42[1]

 );
 FUNC_0(VAR_41);

 VAR_47[0] = VAR_37->fBtcRead4Byte(VAR_37, 0x92c);
 VAR_47[1] = VAR_37->fBtcRead4Byte(VAR_37, 0x930);
 VAR_47[2] = VAR_37->fBtcRead4Byte(VAR_37, 0x944);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x", "0x92c[1:0]/ 0x930[7:0]/0x944[1:0]", VAR_47[0]&0x3, VAR_47[1]&0xff, VAR_47[2]&0x3

 );
 FUNC_0(VAR_41);

 VAR_42[0] = VAR_37->fBtcRead1Byte(VAR_37, 0x39);
 VAR_42[1] = VAR_37->fBtcRead1Byte(VAR_37, 0x40);
 VAR_47[0] = VAR_37->fBtcRead4Byte(VAR_37, 0x4c);
 VAR_42[2] = VAR_37->fBtcRead1Byte(VAR_37, 0x64);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x/ 0x%x", "0x38[11]/0x40/0x4c[24:23]/0x64[0]", ((VAR_42[0] & 0x8)>>3),

  VAR_42[1],
  ((VAR_47[0]&0x01800000)>>23),
  VAR_42[2]&0x1
 );
 FUNC_0(VAR_41);

 VAR_47[0] = VAR_37->fBtcRead4Byte(VAR_37, 0x550);
 VAR_42[0] = VAR_37->fBtcRead1Byte(VAR_37, 0x522);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = 0x%x/ 0x%x", "0x550(bcn ctrl)/0x522", VAR_47[0], VAR_42[0]

 );
 FUNC_0(VAR_41);

 VAR_47[0] = VAR_37->fBtcRead4Byte(VAR_37, 0xc50);
 VAR_42[0] = VAR_37->fBtcRead1Byte(VAR_37, 0x49c);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = 0x%x/ 0x%x", "0xc50(dig)/0x49c(null-drop)", VAR_47[0]&0xff, VAR_42[0]

 );
 FUNC_0(VAR_41);

 VAR_47[0] = VAR_37->fBtcRead4Byte(VAR_37, 0xda0);
 VAR_47[1] = VAR_37->fBtcRead4Byte(VAR_37, 0xda4);
 VAR_47[2] = VAR_37->fBtcRead4Byte(VAR_37, 0xda8);
 VAR_47[3] = VAR_37->fBtcRead4Byte(VAR_37, 0xcf0);

 VAR_42[0] = VAR_37->fBtcRead1Byte(VAR_37, 0xa5b);
 VAR_42[1] = VAR_37->fBtcRead1Byte(VAR_37, 0xa5c);

 VAR_59 =
  ((VAR_47[0]&0xffff0000) >> 16) +
  ((VAR_47[1]&0xffff0000) >> 16) +
  (VAR_47[1] & 0xffff) + (VAR_47[2] & 0xffff) + ((VAR_47[3]&0xffff0000) >> 16) + (VAR_47[3] & 0xffff);

 VAR_60 = (VAR_42[0] << 8) + VAR_42[1];

 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x", "OFDM-CCA/OFDM-FA/CCK-FA", VAR_47[0]&0xffff, VAR_59, VAR_60

 );
 FUNC_0(VAR_41);


 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d/ %d/ %d/ %d", "CRC_OK CCK/11g/11n/11n-Agg", VAR_36->nCRCOK_CCK,

  VAR_36->nCRCOK_11g,
  VAR_36->nCRCOK_11n,
  VAR_36->nCRCOK_11nAgg
 );
 FUNC_0(VAR_41);

 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d/ %d/ %d/ %d", "CRC_Err CCK/11g/11n/11n-Agg", VAR_36->nCRCErr_CCK,

  VAR_36->nCRCErr_11g,
  VAR_36->nCRCErr_11n,
  VAR_36->nCRCErr_11nAgg
 );
 FUNC_0(VAR_41);

 VAR_47[0] = VAR_37->fBtcRead4Byte(VAR_37, 0x6c0);
 VAR_47[1] = VAR_37->fBtcRead4Byte(VAR_37, 0x6c4);
 VAR_47[2] = VAR_37->fBtcRead4Byte(VAR_37, 0x6c8);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x", "0x6c0/0x6c4/0x6c8(coexTable)", VAR_47[0], VAR_47[1], VAR_47[2]);

 FUNC_0(VAR_41);

 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d/ %d", "0x770(high-pri rx/tx)", VAR_36->highPriorityRx, VAR_36->highPriorityTx

 );
 FUNC_0(VAR_41);
 FUNC_1(
  VAR_41,
  VAR_26,
  "\r\n %-35s = %d/ %d", "0x774(low-pri rx/tx)", VAR_36->lowPriorityRx, VAR_36->lowPriorityTx

 );
 FUNC_0(VAR_41);

 VAR_37->fBtcDispDbgMsg(VAR_37, VAR_2);
}
