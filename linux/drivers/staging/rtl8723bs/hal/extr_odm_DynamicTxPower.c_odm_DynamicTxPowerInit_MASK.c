
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_priv {int bDynamicTxPowerEnable; void* DynamicTxHighPowerLvl; void* LastDTPLvl; } ;
struct hal_com_data {struct dm_priv dmpriv; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {struct adapter* Adapter; } ;
typedef TYPE_1__* PDM_ODM_T ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 void* VAR_0 ;

void FUNC_1(void *VAR_1)
{
 PDM_ODM_T VAR_2 = (PDM_ODM_T)VAR_1;

 struct adapter *VAR_3 = VAR_2->Adapter;
 struct hal_com_data *VAR_4 = FUNC_0(VAR_3);
 struct dm_priv *VAR_5 = &VAR_4->dmpriv;

 VAR_5->bDynamicTxPowerEnable = 0;

 VAR_5->LastDTPLvl = VAR_0;
 VAR_5->DynamicTxHighPowerLvl = VAR_0;
}
