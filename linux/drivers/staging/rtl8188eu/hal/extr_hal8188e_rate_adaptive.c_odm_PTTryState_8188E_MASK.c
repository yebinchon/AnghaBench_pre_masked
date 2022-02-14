
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct odm_ra_info {int PTTryState; int PTModeSS; int DecisionRate; int RssiStaRA; int PTStage; int PTStopCount; int PTPreRssi; scalar_t__ PTPreRate; scalar_t__ RAstage; } ;



__attribute__((used)) static void FUNC_0(struct odm_ra_info *VAR_0)
{
 VAR_0->PTTryState = 0;
 switch (VAR_0->PTModeSS) {
 case 3:
  if (VAR_0->DecisionRate >= 0x19)
   VAR_0->PTTryState = 1;
  break;
 case 2:
  if (VAR_0->DecisionRate >= 0x11)
   VAR_0->PTTryState = 1;
  break;
 case 1:
  if (VAR_0->DecisionRate >= 0x0a)
   VAR_0->PTTryState = 1;
  break;
 case 0:
  if (VAR_0->DecisionRate >= 0x03)
   VAR_0->PTTryState = 1;
  break;
 default:
  VAR_0->PTTryState = 0;
  break;
 }

 if (VAR_0->RssiStaRA < 48) {
  VAR_0->PTStage = 0;
 } else if (VAR_0->PTTryState == 1) {
  if ((VAR_0->PTStopCount >= 10) ||
      (VAR_0->PTPreRssi > VAR_0->RssiStaRA + 5) ||
      (VAR_0->PTPreRssi < VAR_0->RssiStaRA - 5) ||
      (VAR_0->DecisionRate != VAR_0->PTPreRate)) {
   if (VAR_0->PTStage == 0)
    VAR_0->PTStage = 1;
   else if (VAR_0->PTStage == 1)
    VAR_0->PTStage = 3;
   else
    VAR_0->PTStage = 5;

   VAR_0->PTPreRssi = VAR_0->RssiStaRA;
   VAR_0->PTStopCount = 0;
  } else {
   VAR_0->RAstage = 0;
   VAR_0->PTStopCount++;
  }
 } else {
  VAR_0->PTStage = 0;
  VAR_0->RAstage = 0;
 }
 VAR_0->PTPreRate = VAR_0->DecisionRate;
}
