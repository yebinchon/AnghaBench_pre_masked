
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int SupportAbility; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(PDM_ODM_T VAR_3)
{

 FUNC_0(VAR_3, VAR_1, VAR_2, ("odm_RefreshRateAdaptiveMask()---------->\n"));
 if (!(VAR_3->SupportAbility & VAR_0)) {
  FUNC_0(VAR_3, VAR_1, VAR_2, ("odm_RefreshRateAdaptiveMask(): Return cos not supported\n"));
  return;
 }
 FUNC_1(VAR_3);
}
