
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bFwCurrentInPSMode; } ;
struct adapter {TYPE_2__* HalData; TYPE_1__ pwrctrlpriv; } ;
struct TYPE_4__ {scalar_t__ LastHMEBoxNum; } ;



void FUNC_0(struct adapter *VAR_0)
{

 VAR_0->pwrctrlpriv.bFwCurrentInPSMode = 0;


 VAR_0->HalData->LastHMEBoxNum = 0;
}
