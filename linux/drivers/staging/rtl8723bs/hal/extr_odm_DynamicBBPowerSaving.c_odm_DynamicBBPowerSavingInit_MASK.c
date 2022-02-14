
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pPS_T ;
struct TYPE_3__ {scalar_t__ initialize; scalar_t__ Rssi_val_min; void* CurRFState; void* PreRFState; void* CurCCAState; void* PreCCAState; } ;
struct TYPE_4__ {TYPE_1__ DM_PSTable; } ;
typedef TYPE_2__* PDM_ODM_T ;


 void* VAR_0 ;
 void* VAR_1 ;

void FUNC_0(void *VAR_2)
{
 PDM_ODM_T VAR_3 = (PDM_ODM_T)VAR_2;
 pPS_T VAR_4 = &VAR_3->DM_PSTable;

 VAR_4->PreCCAState = VAR_0;
 VAR_4->CurCCAState = VAR_0;
 VAR_4->PreRFState = VAR_1;
 VAR_4->CurRFState = VAR_1;
 VAR_4->Rssi_val_min = 0;
 VAR_4->initialize = 0;
}
