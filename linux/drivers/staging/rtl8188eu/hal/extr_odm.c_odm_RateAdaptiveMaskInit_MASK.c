
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct odm_rate_adapt {scalar_t__ Type; int HighRSSIThresh; int LowRSSIThresh; int RATRState; } ;
struct odm_dm_struct {int bUseRAMask; struct odm_rate_adapt RateAdaptive; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(struct odm_dm_struct *VAR_2)
{
 struct odm_rate_adapt *VAR_3 = &VAR_2->RateAdaptive;

 VAR_3->Type = VAR_1;
 if (VAR_3->Type == VAR_1)
  VAR_2->bUseRAMask = 1;
 else
  VAR_2->bUseRAMask = 0;

 VAR_3->RATRState = VAR_0;
 VAR_3->HighRSSIThresh = 50;
 VAR_3->LowRSSIThresh = 20;
}
