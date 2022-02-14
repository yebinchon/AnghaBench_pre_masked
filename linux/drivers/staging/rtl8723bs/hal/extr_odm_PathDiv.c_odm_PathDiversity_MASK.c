
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SupportAbility; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,char*) ;

void FUNC_1(void *VAR_3)
{
 PDM_ODM_T VAR_4 = (PDM_ODM_T)VAR_3;

 if (!(VAR_4->SupportAbility & VAR_0))
  FUNC_0(
   VAR_4,
   VAR_1,
   VAR_2,
   ("Return: Not Support PathDiv\n")
  );
}
