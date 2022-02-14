
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef TYPE_1__* pDIG_T ;
struct TYPE_4__ {scalar_t__ CurCCK_CCAThres; scalar_t__ PreCCK_CCAThres; } ;
struct TYPE_5__ {int Adapter; TYPE_1__ DM_DigTable; } ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

void FUNC_2(void *VAR_1, u8 VAR_2)
{
 PDM_ODM_T VAR_3 = (PDM_ODM_T)VAR_1;
 pDIG_T VAR_4 = &VAR_3->DM_DigTable;


 if (VAR_4->CurCCK_CCAThres != VAR_2)
  FUNC_1(VAR_3->Adapter, FUNC_0(VAR_0, VAR_3), VAR_2);

 VAR_4->PreCCK_CCAThres = VAR_4->CurCCK_CCAThres;
 VAR_4->CurCCK_CCAThres = VAR_2;
}
