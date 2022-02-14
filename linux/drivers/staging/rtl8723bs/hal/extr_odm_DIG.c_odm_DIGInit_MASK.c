
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef TYPE_1__* pDIG_T ;
struct TYPE_5__ {int bStopDIG; int bPSDInProgress; int PreCCK_CCAThres; int CurCCK_CCAThres; int bMediaConnect_0; int bMediaConnect_1; int BT30_CurIGI; void* rx_gain_range_min; int rx_gain_range_max; void* DIG_Dynamic_MIN_1; void* DIG_Dynamic_MIN_0; scalar_t__ Recover_cnt; scalar_t__ LargeFAHit; void* ForbiddenIGI; int BackoffVal_range_min; int BackoffVal_range_max; int BackoffVal; int FAHighThresh; int FALowThresh; int RssiHighThresh; int RssiLowThresh; scalar_t__ CurIGValue; } ;
struct TYPE_6__ {int bDMInitialGainEnable; int Adapter; TYPE_1__ DM_DigTable; } ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

void FUNC_3(void *VAR_11)
{
 PDM_ODM_T VAR_12 = (PDM_ODM_T)VAR_11;
 pDIG_T VAR_13 = &VAR_12->DM_DigTable;

 VAR_13->bStopDIG = 0;
 VAR_13->bPSDInProgress = 0;
 VAR_13->CurIGValue = (u8) FUNC_2(VAR_12->Adapter, FUNC_1(VAR_10, VAR_12), FUNC_0(VAR_9, VAR_12));
 VAR_13->RssiLowThresh = VAR_6;
 VAR_13->RssiHighThresh = VAR_5;
 VAR_13->FALowThresh = VAR_8;
 VAR_13->FAHighThresh = VAR_7;
 VAR_13->BackoffVal = VAR_0;
 VAR_13->BackoffVal_range_max = VAR_1;
 VAR_13->BackoffVal_range_min = VAR_2;
 VAR_13->PreCCK_CCAThres = 0xFF;
 VAR_13->CurCCK_CCAThres = 0x83;
 VAR_13->ForbiddenIGI = VAR_4;
 VAR_13->LargeFAHit = 0;
 VAR_13->Recover_cnt = 0;
 VAR_13->bMediaConnect_0 = 0;
 VAR_13->bMediaConnect_1 = 0;


 VAR_12->bDMInitialGainEnable = 1;

 VAR_13->DIG_Dynamic_MIN_0 = VAR_4;
 VAR_13->DIG_Dynamic_MIN_1 = VAR_4;


 VAR_13->BT30_CurIGI = 0x32;

 VAR_13->rx_gain_range_max = VAR_3;
 VAR_13->rx_gain_range_min = VAR_4;

}
