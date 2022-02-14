
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;


typedef TYPE_2__* pDIG_T ;
struct TYPE_22__ {scalar_t__ NumQryBeaconPkt; } ;
struct TYPE_23__ {int CurIGValue; } ;
struct TYPE_24__ {int* pbPowerSaving; TYPE_1__ PhyDbgInfo; TYPE_2__ DM_DigTable; int Adapter; int RSSI_Min; } ;
struct TYPE_21__ {scalar_t__ pwr_mode; } ;
typedef TYPE_3__* PDM_ODM_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ,int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 TYPE_16__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;

void FUNC_16(PDM_ODM_T VAR_3)
{
 FUNC_7(VAR_3);
 FUNC_5(VAR_3);
 FUNC_11(VAR_3);
 FUNC_12(VAR_3);
 FUNC_1(VAR_3, VAR_0, VAR_1, ("odm_DIG(): RSSI = 0x%x\n", VAR_3->RSSI_Min));

 FUNC_14(VAR_3);





 if ((FUNC_3(VAR_3->Adapter)->pwr_mode != VAR_2)




 ) {
   FUNC_1(VAR_3, VAR_0, VAR_1, ("----Step1: odm_DIG is in LPS mode\n"));
   FUNC_1(VAR_3, VAR_0, VAR_1, ("---Step2: 8723AS is in LPS mode\n"));
   FUNC_9(VAR_3);
 } else
  FUNC_8(VAR_3);

 {
  pDIG_T VAR_4 = &VAR_3->DM_DigTable;

  FUNC_4(VAR_3, VAR_4->CurIGValue);
 }
 FUNC_6(VAR_3);

 if (*(VAR_3->pbPowerSaving) == 1)
  return;


 FUNC_15(VAR_3);
 FUNC_10(VAR_3);
 FUNC_13(VAR_3);
 FUNC_0(VAR_3);

 FUNC_2(VAR_3);





 VAR_3->PhyDbgInfo.NumQryBeaconPkt = 0;
}
