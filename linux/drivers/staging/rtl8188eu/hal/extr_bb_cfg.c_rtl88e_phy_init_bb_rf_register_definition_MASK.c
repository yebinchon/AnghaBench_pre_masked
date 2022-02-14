
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bb_reg_def {int rfLSSIReadBackPi; int rfLSSIReadBack; int rfTxAFE; int rfTxIQImbalance; int rfRxAFE; int rfRxIQImbalance; int rfAGCControl2; int rfAGCControl1; void* rfSwitchControl; int rfHSSIPara2; int rfHSSIPara1; void* rfTxGainStage; void* rfLSSI_Select; int rf3wireOffset; void* rfintfe; void* rfintfo; void* rfintfi; void* rfintfs; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct bb_reg_def* PHYRegDef; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

__attribute__((used)) static void FUNC_0(struct adapter *VAR_31)
{
 struct bb_reg_def *VAR_32[4];

 VAR_32[VAR_0] = &VAR_31->HalData->PHYRegDef[VAR_0];
 VAR_32[VAR_1] = &VAR_31->HalData->PHYRegDef[VAR_1];

 VAR_32[VAR_0]->rfintfs = VAR_6;
 VAR_32[VAR_1]->rfintfs = VAR_6;

 VAR_32[VAR_0]->rfintfi = VAR_5;
 VAR_32[VAR_1]->rfintfi = VAR_5;

 VAR_32[VAR_0]->rfintfo = VAR_13;
 VAR_32[VAR_1]->rfintfo = VAR_18;

 VAR_32[VAR_0]->rfintfe = VAR_13;
 VAR_32[VAR_1]->rfintfe = VAR_18;

 VAR_32[VAR_0]->rf3wireOffset = VAR_11;
 VAR_32[VAR_1]->rf3wireOffset = VAR_16;

 VAR_32[VAR_0]->rfLSSI_Select = VAR_7;
 VAR_32[VAR_1]->rfLSSI_Select = VAR_7;

 VAR_32[VAR_0]->rfTxGainStage = VAR_4;
 VAR_32[VAR_1]->rfTxGainStage = VAR_4;

 VAR_32[VAR_0]->rfHSSIPara1 = VAR_9;
 VAR_32[VAR_1]->rfHSSIPara1 = VAR_14;

 VAR_32[VAR_0]->rfHSSIPara2 = VAR_10;
 VAR_32[VAR_1]->rfHSSIPara2 = VAR_15;

 VAR_32[VAR_0]->rfSwitchControl = VAR_8;
 VAR_32[VAR_1]->rfSwitchControl = VAR_8;

 VAR_32[VAR_0]->rfAGCControl1 = VAR_19;
 VAR_32[VAR_1]->rfAGCControl1 = VAR_25;

 VAR_32[VAR_0]->rfAGCControl2 = VAR_20;
 VAR_32[VAR_1]->rfAGCControl2 = VAR_26;

 VAR_32[VAR_0]->rfRxIQImbalance = VAR_22;
 VAR_32[VAR_1]->rfRxIQImbalance = VAR_28;

 VAR_32[VAR_0]->rfRxAFE = VAR_21;
 VAR_32[VAR_1]->rfRxAFE = VAR_27;

 VAR_32[VAR_0]->rfTxIQImbalance = VAR_24;
 VAR_32[VAR_1]->rfTxIQImbalance = VAR_30;

 VAR_32[VAR_0]->rfTxAFE = VAR_23;
 VAR_32[VAR_1]->rfTxAFE = VAR_29;

 VAR_32[VAR_0]->rfLSSIReadBack = VAR_12;
 VAR_32[VAR_1]->rfLSSIReadBack = VAR_17;

 VAR_32[VAR_0]->rfLSSIReadBackPi = VAR_2;
 VAR_32[VAR_1]->rfLSSIReadBackPi = VAR_3;
}
