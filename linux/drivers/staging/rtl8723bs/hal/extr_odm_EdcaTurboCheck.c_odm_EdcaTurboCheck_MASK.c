
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int SupportAbility; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(void *VAR_3)
{




 PDM_ODM_T VAR_4 = (PDM_ODM_T)VAR_3;

 FUNC_0(VAR_4, VAR_0, VAR_1,
       ("odm_EdcaTurboCheck ========================>\n"));

 if (!(VAR_4->SupportAbility & VAR_2))
  return;

 FUNC_1(VAR_4);
 FUNC_0(VAR_4, VAR_0, VAR_1,
       ("<========================odm_EdcaTurboCheck\n"));
}
