
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int Cnt_Cck_fail; } ;
struct TYPE_6__ {int SupportAbility; int RSSI_Min; scalar_t__ bLinked; scalar_t__ ExtLNA; TYPE_1__ FalseAlmCnt; } ;
typedef TYPE_1__* Pfalse_ALARM_STATISTICS ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;

void FUNC_2(void *VAR_4)
{
 PDM_ODM_T VAR_5 = (PDM_ODM_T)VAR_4;
 Pfalse_ALARM_STATISTICS VAR_6 = &(VAR_5->FalseAlmCnt);
 u8 VAR_7;


 if (
  !(VAR_5->SupportAbility & VAR_0) ||
  !(VAR_5->SupportAbility & VAR_1)
 ) {
  FUNC_0(
   VAR_5,
   VAR_2,
   VAR_3,
   ("odm_CCKPacketDetectionThresh()  return ==========\n")
  );
  return;
 }

 if (VAR_5->ExtLNA)
  return;

 FUNC_0(
  VAR_5,
  VAR_2,
  VAR_3,
  ("odm_CCKPacketDetectionThresh()  ==========>\n")
 );

 if (VAR_5->bLinked) {
  if (VAR_5->RSSI_Min > 25)
   VAR_7 = 0xcd;
  else if ((VAR_5->RSSI_Min <= 25) && (VAR_5->RSSI_Min > 10))
   VAR_7 = 0x83;
  else {
   if (VAR_6->Cnt_Cck_fail > 1000)
    VAR_7 = 0x83;
   else
    VAR_7 = 0x40;
  }
 } else {
  if (VAR_6->Cnt_Cck_fail > 1000)
   VAR_7 = 0x83;
  else
   VAR_7 = 0x40;
 }

 FUNC_1(VAR_5, VAR_7);

 FUNC_0(
  VAR_5,
  VAR_2,
  VAR_3,
  (
   "odm_CCKPacketDetectionThresh()  CurCCK_CCAThres = 0x%x\n",
   VAR_7
  )
 );
}
