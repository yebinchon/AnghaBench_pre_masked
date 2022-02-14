
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ NHM_cnt_0; int Adapter; } ;
typedef TYPE_1__* PDM_ODM_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(void *VAR_3)
{
 PDM_ODM_T VAR_4 = (PDM_ODM_T)VAR_3;
 u32 VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_4->Adapter, VAR_0, VAR_2);

 VAR_4->NHM_cnt_0 = (u8)(VAR_5 & VAR_1);
}
