
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_60__ TYPE_5__ ;
typedef struct TYPE_59__ TYPE_51__ ;
typedef struct TYPE_58__ TYPE_50__ ;
typedef struct TYPE_57__ TYPE_4__ ;
typedef struct TYPE_56__ TYPE_3__ ;
typedef struct TYPE_55__ TYPE_2__ ;
typedef struct TYPE_54__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int s32 ;
struct TYPE_60__ {scalar_t__ pgAntNum; int btdmAntNum; } ;
struct TYPE_59__ {scalar_t__ btStatus; int curPsTdma; scalar_t__ curBtDecPwrLvl; int bCurIgnoreWlanAct; int btRf0x1eBackup; int bAutoTdmaAdjust; int * psTdmaPara; int curDacSwingLvl; int bCurDacSwingOn; int bCurAdcBackOff; int bCurAgcTableEn; int bLimitedDig; int bCurLowPenaltyRa; int bCurRfRxLpfShrink; int * wifiChnlInfo; } ;
struct TYPE_58__ {int btInfoExt; scalar_t__ highPriorityRx; int highPriorityTx; scalar_t__ lowPriorityRx; int lowPriorityTx; scalar_t__ bUnderLps; scalar_t__ bUnderIps; scalar_t__* btInfoC2hCnt; int ** btInfoC2h; int btRetryCnt; int btRssi; scalar_t__ bC2hBtInquiryPage; } ;
struct TYPE_57__ {int bA2dpExist; int bPanExist; int bHidExist; int bScoExist; } ;
struct TYPE_54__ {scalar_t__ bBtDisabled; } ;
struct TYPE_55__ {int hciVersion; scalar_t__ bProfileNotified; } ;
struct TYPE_56__ {int* cliBuf; int (* fBtcRead1Byte ) (TYPE_3__*,int) ;scalar_t__ (* fBtcRead4Byte ) (TYPE_3__*,int) ;int (* fBtcDispDbgMsg ) (TYPE_3__*,int ) ;TYPE_1__ btInfo; int (* fBtcGet ) (TYPE_3__*,int ,scalar_t__*) ;scalar_t__ bManualControl; TYPE_4__ btLinkInfo; TYPE_2__ stackInfo; TYPE_5__ boardInfo; } ;
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
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int ,char*,...) ;
 int * VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_51__* VAR_29 ;
 TYPE_50__* VAR_30 ;
 int FUNC_3 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_4 (TYPE_3__*,int ,int*) ;
 int FUNC_5 (TYPE_3__*,int ,int*) ;
 int FUNC_6 (TYPE_3__*,int ,int*) ;
 int FUNC_7 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_8 (TYPE_3__*,int ,int*) ;
 int FUNC_9 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*,int) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (TYPE_3__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*,int) ;
 int FUNC_16 (TYPE_3__*,int) ;
 int FUNC_17 (TYPE_3__*,int) ;
 scalar_t__ FUNC_18 (TYPE_3__*,int) ;
 scalar_t__ FUNC_19 (TYPE_3__*,int) ;
 scalar_t__ FUNC_20 (TYPE_3__*,int) ;
 int FUNC_21 (TYPE_3__*,int) ;
 int FUNC_22 (TYPE_3__*,int) ;
 scalar_t__ FUNC_23 (TYPE_3__*,int) ;
 int FUNC_24 (TYPE_3__*,int) ;
 int FUNC_25 (TYPE_3__*,int ,int*) ;
 scalar_t__ FUNC_26 (TYPE_3__*,int) ;
 int FUNC_27 (TYPE_3__*,int) ;
 scalar_t__ FUNC_28 (TYPE_3__*,int) ;
 int FUNC_29 (TYPE_3__*,int) ;
 scalar_t__ FUNC_30 (TYPE_3__*,int) ;
 scalar_t__ FUNC_31 (TYPE_3__*,int) ;
 scalar_t__ FUNC_32 (TYPE_3__*,int) ;
 scalar_t__ FUNC_33 (TYPE_3__*,int) ;
 int FUNC_34 (TYPE_3__*,int) ;
 int FUNC_35 (TYPE_3__*,int) ;
 int FUNC_36 (TYPE_3__*,int ,int*) ;
 scalar_t__ FUNC_37 (TYPE_3__*,int) ;
 scalar_t__ FUNC_38 (TYPE_3__*,int) ;
 scalar_t__ FUNC_39 (TYPE_3__*,int) ;
 int FUNC_40 (TYPE_3__*,int) ;
 int FUNC_41 (TYPE_3__*,int ) ;
 int FUNC_42 (TYPE_3__*,int ,int*) ;
 int FUNC_43 (TYPE_3__*,int ,int*) ;
 int FUNC_44 (TYPE_3__*,int ,int*) ;
 int FUNC_45 (TYPE_3__*,int ,int*) ;
 int FUNC_46 (TYPE_3__*,int ,int*) ;

void FUNC_47(PBTC_COEXIST VAR_31)
{
 PBTC_BOARD_INFO VAR_32 = &VAR_31->boardInfo;
 PBTC_STACK_INFO VAR_33 = &VAR_31->stackInfo;
 PBTC_BT_LINK_INFO VAR_34 = &VAR_31->btLinkInfo;
 u8 *VAR_35 = VAR_31->cliBuf;
 u8 VAR_36[4], VAR_37, VAR_38, VAR_39 = 0;
 u32 VAR_40[4];
 bool VAR_41 = 0, VAR_42 = 0, VAR_43 = 0, VAR_44 = 0;
 bool VAR_45 = 0, VAR_46 = 0;
 s32 VAR_47 = 0, VAR_48 = 0;
 u32 VAR_49, VAR_50, VAR_51, VAR_52;
 u8 VAR_53, VAR_54;
 u32 VAR_55 = 0, VAR_56 = 0;
 u8 VAR_57 = 0;

 FUNC_1(VAR_35, VAR_25, "\r\n ============[BT Coexist info]============");
 FUNC_0(VAR_35);

 if (VAR_31->bManualControl) {
  FUNC_1(VAR_35, VAR_25, "\r\n ============[Under Manual Control]============");
  FUNC_0(VAR_35);
  FUNC_1(VAR_35, VAR_25, "\r\n ==========================================");
  FUNC_0(VAR_35);
 }

 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %d/ %d ", "Ant PG number/ Ant mechanism:", VAR_32->pgAntNum,

  VAR_32->btdmAntNum
 );
 FUNC_0(VAR_35);

 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %s / %d", "BT stack/ hci ext ver", (VAR_33->bProfileNotified ? "Yes" : "No"),

  VAR_33->hciVersion
 );
 FUNC_0(VAR_35);

 VAR_31->fBtcGet(VAR_31, VAR_15, &VAR_56);
 VAR_31->fBtcGet(VAR_31, VAR_17, &VAR_55);
 FUNC_1(VAR_35, VAR_25, "\r\n %-35s = %d_%x/ 0x%x/ 0x%x(%d)", "CoexVer/ FwVer/ PatchVer", VAR_28, VAR_27, VAR_55, VAR_56, VAR_56);

 FUNC_0(VAR_35);

 VAR_31->fBtcGet(VAR_31, VAR_4, &VAR_45);
 VAR_31->fBtcGet(VAR_31, VAR_13, &VAR_53);
 VAR_31->fBtcGet(VAR_31, VAR_14, &VAR_54);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %d / %d(%d)", "Dot11 channel / HsChnl(HsMode)", VAR_53,

  VAR_54,
  VAR_45
 );
 FUNC_0(VAR_35);

 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %02x %02x %02x ", "H2C Wifi inform bt chnl Info", VAR_29->wifiChnlInfo[0],

  VAR_29->wifiChnlInfo[1],
  VAR_29->wifiChnlInfo[2]
 );
 FUNC_0(VAR_35);

 VAR_31->fBtcGet(VAR_31, VAR_11, &VAR_47);
 VAR_31->fBtcGet(VAR_31, VAR_10, &VAR_48);
 VAR_31->fBtcGet(VAR_31, VAR_12, &VAR_57);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %d/ %d/ %d", "Wifi rssi/ HS rssi/ AP#", VAR_47,

  VAR_48,
  VAR_57
 );
 FUNC_0(VAR_35);

 VAR_31->fBtcGet(VAR_31, VAR_8, &VAR_42);
 VAR_31->fBtcGet(VAR_31, VAR_6, &VAR_43);
 VAR_31->fBtcGet(VAR_31, VAR_7, &VAR_41);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %d/ %d/ %d ", "Wifi bLink/ bRoam/ bScan", VAR_43,

  VAR_41,
  VAR_42
 );
 FUNC_0(VAR_35);

 VAR_31->fBtcGet(VAR_31, VAR_9, &VAR_44);
 VAR_31->fBtcGet(VAR_31, VAR_16, &VAR_49);
 VAR_31->fBtcGet(VAR_31, VAR_5, &VAR_46);
 VAR_31->fBtcGet(VAR_31, VAR_18, &VAR_50);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %s / %s/ %s ", "Wifi status", (VAR_44 ? "5G" : "2.4G"),

  ((VAR_20 == VAR_49) ? "Legacy" : (((VAR_19 == VAR_49) ? "HT40" : "HT20"))),
  ((!VAR_46) ? "idle" : ((VAR_21 == VAR_50) ? "uplink" : "downlink"))
 );
 FUNC_0(VAR_35);

 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = [%s/ %d/ %d] ", "BT [status/ rssi/ retryCnt]", ((VAR_31->btInfo.bBtDisabled) ? ("disabled") : ((VAR_30->bC2hBtInquiryPage) ? ("inquiry/page scan") : ((VAR_23 == VAR_29->btStatus) ? "non-connected idle" :

  ((VAR_22 == VAR_29->btStatus) ? "connected-idle" : "busy")))),
  VAR_30->btRssi,
  VAR_30->btRetryCnt
 );
 FUNC_0(VAR_35);

 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %d / %d / %d / %d", "SCO/HID/PAN/A2DP", VAR_34->bScoExist,

  VAR_34->bHidExist,
  VAR_34->bPanExist,
  VAR_34->bA2dpExist
 );
 FUNC_0(VAR_35);
 VAR_31->fBtcDispDbgMsg(VAR_31, VAR_1);

 VAR_38 = VAR_30->btInfoExt;
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %s", "BT Info A2DP rate", (VAR_38&VAR_0) ? "Basic rate" : "EDR rate"

 );
 FUNC_0(VAR_35);

 for (VAR_37 = 0; VAR_37 < VAR_24; VAR_37++) {
  if (VAR_30->btInfoC2hCnt[VAR_37]) {
   FUNC_1(
    VAR_35,
    VAR_25,
    "\r\n %-35s = %02x %02x %02x %02x %02x %02x %02x(%d)", VAR_26[VAR_37], VAR_30->btInfoC2h[VAR_37][0],

    VAR_30->btInfoC2h[VAR_37][1],
    VAR_30->btInfoC2h[VAR_37][2],
    VAR_30->btInfoC2h[VAR_37][3],
    VAR_30->btInfoC2h[VAR_37][4],
    VAR_30->btInfoC2h[VAR_37][5],
    VAR_30->btInfoC2h[VAR_37][6],
    VAR_30->btInfoC2hCnt[VAR_37]
   );
   FUNC_0(VAR_35);
  }
 }

 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %s/%s", "PS state, IPS/LPS", ((VAR_30->bUnderIps ? "IPS ON" : "IPS OFF")),

  ((VAR_30->bUnderLps ? "LPS ON" : "LPS OFF"))
 );
 FUNC_0(VAR_35);
 VAR_31->fBtcDispDbgMsg(VAR_31, VAR_3);


 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s", "============[Sw mechanism]============"
 );
 FUNC_0(VAR_35);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %d/ %d/ %d ", "SM1[ShRf/ LpRA/ LimDig]", VAR_29->bCurRfRxLpfShrink,

  VAR_29->bCurLowPenaltyRa,
  VAR_29->bLimitedDig
 );
 FUNC_0(VAR_35);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %d/ %d/ %d(0x%x) ",
  "SM2[AgcT/ AdcB/ SwDacSwing(lvl)]", VAR_29->bCurAgcTableEn,

  VAR_29->bCurAdcBackOff,
  VAR_29->bCurDacSwingOn,
  VAR_29->curDacSwingLvl
 );
 FUNC_0(VAR_35);


 FUNC_1(VAR_35, VAR_25, "\r\n %-35s", "============[Fw mechanism]============");
 FUNC_0(VAR_35);

 VAR_39 = VAR_29->curPsTdma;
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %02x %02x %02x %02x %02x case-%d (auto:%d)", "PS TDMA", VAR_29->psTdmaPara[0],

  VAR_29->psTdmaPara[1],
  VAR_29->psTdmaPara[2],
  VAR_29->psTdmaPara[3],
  VAR_29->psTdmaPara[4],
  VAR_39, VAR_29->bAutoTdmaAdjust
 );
 FUNC_0(VAR_35);

 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %d/ %d ", "DecBtPwr/ IgnWlanAct", VAR_29->curBtDecPwrLvl,

  VAR_29->bCurIgnoreWlanAct
 );
 FUNC_0(VAR_35);


 FUNC_1(VAR_35, VAR_25, "\r\n %-35s", "============[Hw setting]============");
 FUNC_0(VAR_35);

 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = 0x%x", "RF-A, 0x1e initVal", VAR_29->btRf0x1eBackup

 );
 FUNC_0(VAR_35);

 VAR_36[0] = VAR_31->fBtcRead1Byte(VAR_31, 0x778);
 VAR_40[0] = VAR_31->fBtcRead4Byte(VAR_31, 0x880);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = 0x%x/ 0x%x", "0x778/0x880[29:25]", VAR_36[0],

  (VAR_40[0]&0x3e000000) >> 25
 );
 FUNC_0(VAR_35);


 VAR_40[0] = VAR_31->fBtcRead4Byte(VAR_31, 0x948);
 VAR_36[0] = VAR_31->fBtcRead1Byte(VAR_31, 0x67);
 VAR_36[1] = VAR_31->fBtcRead1Byte(VAR_31, 0x765);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x", "0x948/ 0x67[5] / 0x765", VAR_40[0],

  ((VAR_36[0]&0x20)>>5),
  VAR_36[1]
 );
 FUNC_0(VAR_35);

 VAR_40[0] = VAR_31->fBtcRead4Byte(VAR_31, 0x92c);
 VAR_40[1] = VAR_31->fBtcRead4Byte(VAR_31, 0x930);
 VAR_40[2] = VAR_31->fBtcRead4Byte(VAR_31, 0x944);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x", "0x92c[1:0]/ 0x930[7:0]/0x944[1:0]", VAR_40[0]&0x3,

  VAR_40[1]&0xff,
  VAR_40[2]&0x3
 );
 FUNC_0(VAR_35);


 VAR_36[0] = VAR_31->fBtcRead1Byte(VAR_31, 0x39);
 VAR_36[1] = VAR_31->fBtcRead1Byte(VAR_31, 0x40);
 VAR_40[0] = VAR_31->fBtcRead4Byte(VAR_31, 0x4c);
 VAR_36[2] = VAR_31->fBtcRead1Byte(VAR_31, 0x64);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x/ 0x%x", "0x38[11]/0x40/0x4c[24:23]/0x64[0]", ((VAR_36[0] & 0x8)>>3),

  VAR_36[1],
  ((VAR_40[0]&0x01800000)>>23),
  VAR_36[2]&0x1
 );
 FUNC_0(VAR_35);

 VAR_40[0] = VAR_31->fBtcRead4Byte(VAR_31, 0x550);
 VAR_36[0] = VAR_31->fBtcRead1Byte(VAR_31, 0x522);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = 0x%x/ 0x%x", "0x550(bcn ctrl)/0x522", VAR_40[0],

  VAR_36[0]
 );
 FUNC_0(VAR_35);

 VAR_40[0] = VAR_31->fBtcRead4Byte(VAR_31, 0xc50);
 VAR_36[0] = VAR_31->fBtcRead1Byte(VAR_31, 0x49c);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = 0x%x/ 0x%x", "0xc50(dig)/0x49c(null-drop)", VAR_40[0]&0xff,

  VAR_36[0]
 );
 FUNC_0(VAR_35);

 VAR_40[0] = VAR_31->fBtcRead4Byte(VAR_31, 0xda0);
 VAR_40[1] = VAR_31->fBtcRead4Byte(VAR_31, 0xda4);
 VAR_40[2] = VAR_31->fBtcRead4Byte(VAR_31, 0xda8);
 VAR_40[3] = VAR_31->fBtcRead4Byte(VAR_31, 0xcf0);

 VAR_36[0] = VAR_31->fBtcRead1Byte(VAR_31, 0xa5b);
 VAR_36[1] = VAR_31->fBtcRead1Byte(VAR_31, 0xa5c);

 VAR_51 =
  ((VAR_40[0]&0xffff0000) >> 16) +
  ((VAR_40[1]&0xffff0000) >> 16) +
  (VAR_40[1] & 0xffff) + (VAR_40[2] & 0xffff) + ((VAR_40[3]&0xffff0000) >> 16) +

  (VAR_40[3] & 0xffff);

 VAR_52 = (VAR_36[0] << 8) + VAR_36[1];

 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x", "OFDM-CCA/OFDM-FA/CCK-FA", VAR_40[0]&0xffff,

  VAR_51,
  VAR_52
 );
 FUNC_0(VAR_35);

 VAR_40[0] = VAR_31->fBtcRead4Byte(VAR_31, 0x6c0);
 VAR_40[1] = VAR_31->fBtcRead4Byte(VAR_31, 0x6c4);
 VAR_40[2] = VAR_31->fBtcRead4Byte(VAR_31, 0x6c8);
 VAR_36[0] = VAR_31->fBtcRead1Byte(VAR_31, 0x6cc);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = 0x%x/ 0x%x/ 0x%x/ 0x%x", "0x6c0/0x6c4/0x6c8/0x6cc(coexTable)", VAR_40[0],

  VAR_40[1],
  VAR_40[2],
  VAR_36[0]
 );
 FUNC_0(VAR_35);

 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %d/ %d", "0x770(high-pri rx/tx)", VAR_30->highPriorityRx,

  VAR_30->highPriorityTx
 );
 FUNC_0(VAR_35);
 FUNC_1(
  VAR_35,
  VAR_25,
  "\r\n %-35s = %d/ %d", "0x774(low-pri rx/tx)", VAR_30->lowPriorityRx,

  VAR_30->lowPriorityTx
 );
 FUNC_0(VAR_35);

 FUNC_2(VAR_31);
 VAR_31->fBtcDispDbgMsg(VAR_31, VAR_2);
}
