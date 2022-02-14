
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_3__ {int * pODM_StaInfo; } ;
typedef int PSTA_INFO_T ;
typedef TYPE_1__* PDM_ODM_T ;
typedef int ODM_CMNINFO_E ;




void FUNC_0(
 PDM_ODM_T VAR_0,
 ODM_CMNINFO_E VAR_1,
 u16 VAR_2,
 void *VAR_3
)
{



 switch (VAR_1) {



 case 128:
  VAR_0->pODM_StaInfo[VAR_2] = (PSTA_INFO_T)VAR_3;
  break;

 default:

  break;
 }

}
