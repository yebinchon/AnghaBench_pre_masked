
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int GetDeltaSwingTable; int PHY_LCCalibrate; int DoIQK; int ODM_TxPwrTrackSetPwr; int ThermalRegAddr; int RfPathCount; int AverageThermalNum; int Threshold_IQK; int SwingTableSize_OFDM; int SwingTableSize_CCK; } ;
typedef TYPE_1__* PTXPWRTRACK_CFG ;


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

void FUNC_0(PTXPWRTRACK_CFG VAR_10)
{
 VAR_10->SwingTableSize_CCK = VAR_1;
 VAR_10->SwingTableSize_OFDM = VAR_7;
 VAR_10->Threshold_IQK = VAR_4;
 VAR_10->AverageThermalNum = VAR_0;
 VAR_10->RfPathCount = VAR_5;
 VAR_10->ThermalRegAddr = VAR_9;

 VAR_10->ODM_TxPwrTrackSetPwr = VAR_6;
 VAR_10->DoIQK = VAR_2;
 VAR_10->PHY_LCCalibrate = VAR_8;
 VAR_10->GetDeltaSwingTable = VAR_3;
}
