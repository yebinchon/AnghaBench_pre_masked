
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_22__ {int bNeedRecover0x948; int curAlgorithm; int bAutoTdmaAdjust; int preAlgorithm; int backup0x948; } ;
struct TYPE_21__ {scalar_t__ bC2hBtInquiryPage; scalar_t__ bUnderIps; } ;
struct TYPE_20__ {int (* fBtcWrite4Byte ) (TYPE_1__*,int,int ) ;scalar_t__ bManualControl; } ;
typedef TYPE_1__* PBTC_COEXIST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_15 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_16(PBTC_COEXIST VAR_4)
{
 u8 VAR_5 = 0;

 FUNC_0(VAR_1, VAR_0, ("[BTCoex], RunCoexistMechanism() ===>\n"));

 if (VAR_4->bManualControl) {
  FUNC_0(VAR_1, VAR_0, ("[BTCoex], RunCoexistMechanism(), return for Manual CTRL <===\n"));
  return;
 }

 if (VAR_3->bUnderIps) {
  FUNC_0(VAR_1, VAR_0, ("[BTCoex], wifi is under IPS !!!\n"));
  return;
 }

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_3->bC2hBtInquiryPage && (129 != VAR_5)) {
  FUNC_0(VAR_1, VAR_0, ("[BTCoex], BT is under inquiry/page scan !!\n"));
  FUNC_4(VAR_4);
  return;
 } else {
  if (VAR_2->bNeedRecover0x948) {
   VAR_2->bNeedRecover0x948 = 0;
   VAR_4->fBtcWrite4Byte(VAR_4, 0x948, VAR_2->backup0x948);
  }
 }

 VAR_2->curAlgorithm = VAR_5;
 FUNC_0(VAR_1, VAR_0, ("[BTCoex], Algorithm = %d\n", VAR_2->curAlgorithm));

 if (FUNC_14(VAR_4)) {
  FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant common.\n"));
  VAR_2->bAutoTdmaAdjust = 0;
 } else {
  if (VAR_2->curAlgorithm != VAR_2->preAlgorithm) {
   FUNC_0(
    VAR_1,
    VAR_0,
    (
     "[BTCoex], preAlgorithm =%d, curAlgorithm =%d\n",
     VAR_2->preAlgorithm,
     VAR_2->curAlgorithm
    )
   );
   VAR_2->bAutoTdmaAdjust = 0;
  }


  switch (VAR_2->curAlgorithm) {
  case 128:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = SCO.\n"));
   FUNC_12(VAR_4);
   break;
  case 135:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = HID.\n"));
   FUNC_5(VAR_4);
   break;
  case 137:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = A2DP.\n"));
   FUNC_1(VAR_4);
   break;
  case 136:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = A2DP+PAN(HS).\n"));
   FUNC_2(VAR_4);
   break;
  case 132:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = PAN(EDR).\n"));
   FUNC_8(VAR_4);
   break;
  case 129:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = HS mode.\n"));
   FUNC_11(VAR_4);
   break;
  case 131:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = PAN+A2DP.\n"));
   FUNC_9(VAR_4);
   break;
  case 130:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = PAN(EDR)+HID.\n"));
   FUNC_10(VAR_4);
   break;
  case 133:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = HID+A2DP+PAN.\n"));
   FUNC_7(VAR_4);
   break;
  case 134:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = HID+A2DP.\n"));
   FUNC_6(VAR_4);
   break;
  default:
   FUNC_0(VAR_1, VAR_0, ("[BTCoex], Action 2-Ant, algorithm = coexist All Off!!\n"));
   FUNC_13(VAR_4);
   break;
  }
  VAR_2->preAlgorithm = VAR_2->curAlgorithm;
 }
}
