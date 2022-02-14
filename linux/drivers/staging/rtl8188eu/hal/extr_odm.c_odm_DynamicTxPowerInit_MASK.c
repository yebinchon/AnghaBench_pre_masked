
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct odm_dm_struct {struct adapter* Adapter; } ;
struct dm_priv {int bDynamicTxPowerEnable; void* DynamicTxHighPowerLvl; void* LastDTPLvl; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct dm_priv dmpriv; } ;


 void* VAR_0 ;

void FUNC_0(struct odm_dm_struct *VAR_1)
{
 struct adapter *VAR_2 = VAR_1->Adapter;
 struct dm_priv *VAR_3 = &VAR_2->HalData->dmpriv;

 VAR_3->bDynamicTxPowerEnable = 0;
 VAR_3->LastDTPLvl = VAR_0;
 VAR_3->DynamicTxHighPowerLvl = VAR_0;
}
