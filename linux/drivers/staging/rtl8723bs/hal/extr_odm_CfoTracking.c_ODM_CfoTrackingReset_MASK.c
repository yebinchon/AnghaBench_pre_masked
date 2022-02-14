
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int bAdjust; int DefXCap; } ;
struct TYPE_6__ {TYPE_2__ DM_CfoTrack; } ;
typedef TYPE_1__* PDM_ODM_T ;
typedef TYPE_2__* PCFO_TRACKING ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;

void FUNC_3(void *VAR_0)
{
 PDM_ODM_T VAR_1 = (PDM_ODM_T)VAR_0;
 PCFO_TRACKING VAR_2 = &VAR_1->DM_CfoTrack;

 VAR_2->DefXCap = FUNC_0(VAR_1);
 VAR_2->bAdjust = 1;

 FUNC_2(VAR_1, VAR_2->DefXCap);
 FUNC_1(VAR_1, 1);
}
