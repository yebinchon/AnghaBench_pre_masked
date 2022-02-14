
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tolerance_cnt; scalar_t__ NHMCurRxOkcnt; scalar_t__ NHMCurTxOkcnt; scalar_t__ NHMLastRxOkcnt; scalar_t__ NHMLastTxOkcnt; scalar_t__ adaptivity_flag; } ;
typedef TYPE_1__* PDM_ODM_T ;



void FUNC_0(void *VAR_0)
{
 PDM_ODM_T VAR_1 = (PDM_ODM_T)VAR_0;

 VAR_1->adaptivity_flag = 0;
 VAR_1->tolerance_cnt = 3;
 VAR_1->NHMLastTxOkcnt = 0;
 VAR_1->NHMLastRxOkcnt = 0;
 VAR_1->NHMCurTxOkcnt = 0;
 VAR_1->NHMCurRxOkcnt = 0;
}
