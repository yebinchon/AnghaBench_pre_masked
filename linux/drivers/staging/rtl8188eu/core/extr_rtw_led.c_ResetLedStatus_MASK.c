
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LED_871x {int bLedOn; int bLedBlinkInProgress; int bLedWPSBlinkInProgress; int bLedNoLinkBlinkInProgress; int bLedLinkBlinkInProgress; int bLedScanBlinkInProgress; int BlinkingLedState; scalar_t__ BlinkTimes; int CurrLedState; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct LED_871x *VAR_2)
{
 VAR_2->CurrLedState = VAR_1;
 VAR_2->bLedOn = 0;

 VAR_2->bLedBlinkInProgress = 0;
 VAR_2->bLedWPSBlinkInProgress = 0;

 VAR_2->BlinkTimes = 0;
 VAR_2->BlinkingLedState = VAR_0;

 VAR_2->bLedNoLinkBlinkInProgress = 0;
 VAR_2->bLedLinkBlinkInProgress = 0;
 VAR_2->bLedScanBlinkInProgress = 0;
}
