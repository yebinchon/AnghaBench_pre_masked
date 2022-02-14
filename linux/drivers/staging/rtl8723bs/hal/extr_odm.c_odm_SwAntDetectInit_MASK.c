
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* pSWAT_T ;
struct TYPE_4__ {scalar_t__ SWAS_NoLink_State; void* CurAntenna; void* PreAntenna; int SWAS_NoLink_BK_Reg92c; } ;
struct TYPE_5__ {int Adapter; TYPE_1__ DM_SWAT_Table; } ;
typedef TYPE_2__* PDM_ODM_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(PDM_ODM_T VAR_2)
{
 pSWAT_T VAR_3 = &VAR_2->DM_SWAT_Table;

 VAR_3->SWAS_NoLink_BK_Reg92c = FUNC_0(VAR_2->Adapter, VAR_1);
 VAR_3->PreAntenna = VAR_0;
 VAR_3->CurAntenna = VAR_0;
 VAR_3->SWAS_NoLink_State = 0;
}
