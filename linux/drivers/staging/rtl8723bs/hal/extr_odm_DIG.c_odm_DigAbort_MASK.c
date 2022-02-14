
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SupportAbility; int bDMInitialGainEnable; scalar_t__* pbScanInProcess; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;

bool FUNC_1(void *VAR_4)
{
 PDM_ODM_T VAR_5 = (PDM_ODM_T)VAR_4;


 if (!(VAR_5->SupportAbility & VAR_1)) {
  FUNC_0(VAR_5, VAR_2, VAR_3, ("odm_DIG(): Return: SupportAbility ODM_BB_FA_CNT is disabled\n"));
  return 1;
 }


 if (!(VAR_5->SupportAbility & VAR_0)) {
  FUNC_0(VAR_5, VAR_2, VAR_3, ("odm_DIG(): Return: SupportAbility ODM_BB_DIG is disabled\n"));
  return 1;
 }


 if (*(VAR_5->pbScanInProcess)) {
  FUNC_0(VAR_5, VAR_2, VAR_3, ("odm_DIG(): Return: In Scan Progress\n"));
  return 1;
 }


 if (VAR_5->bDMInitialGainEnable == 0) {
  FUNC_0(VAR_5, VAR_2, VAR_3, ("odm_DIG(): Return: PSD is Processing\n"));
  return 1;
 }

 return 0;
}
