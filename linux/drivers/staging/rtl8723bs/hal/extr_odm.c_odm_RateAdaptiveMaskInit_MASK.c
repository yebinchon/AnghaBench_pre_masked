
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Type; int LdpcThres; int bUseLdpc; int HighRSSIThresh; int LowRSSIThresh; int RATRState; } ;
struct TYPE_5__ {int bUseRAMask; TYPE_1__ RateAdaptive; } ;
typedef TYPE_1__* PODM_RATE_ADAPTIVE ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(PDM_ODM_T VAR_2)
{
 PODM_RATE_ADAPTIVE VAR_3 = &VAR_2->RateAdaptive;

 VAR_3->Type = VAR_1;
 if (VAR_3->Type == VAR_1)
  VAR_2->bUseRAMask = 1;
 else
  VAR_2->bUseRAMask = 0;

 VAR_3->RATRState = VAR_0;
 VAR_3->LdpcThres = 35;
 VAR_3->bUseLdpc = 0;
 VAR_3->HighRSSIThresh = 50;
 VAR_3->LowRSSIThresh = 20;
}
