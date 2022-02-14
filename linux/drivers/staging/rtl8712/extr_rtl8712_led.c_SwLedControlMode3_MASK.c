
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int traffic_busy; } ;
struct mlme_priv {TYPE_1__ sitesurveyctrl; } ;
struct LED_871x {int bLedScanBlinkInProgress; int bLedBlinkInProgress; int BlinkTimes; int bLedWPSBlinkInProgress; int BlinkTimer; void* BlinkingLedState; void* CurrLedState; int bLedOn; } ;
struct led_priv {struct LED_871x SwLed0; } ;
struct _adapter {struct mlme_priv mlmepriv; struct led_priv ledpriv; } ;
typedef enum LED_CTL_MODE { ____Placeholder_LED_CTL_MODE } LED_CTL_MODE ;


 int FUNC_0 (struct LED_871x*) ;
 int FUNC_1 (struct LED_871x*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct _adapter *VAR_11,
         enum LED_CTL_MODE VAR_12)
{
 struct led_priv *VAR_13 = &VAR_11->ledpriv;
 struct mlme_priv *VAR_14 = &VAR_11->mlmepriv;
 struct LED_871x *VAR_15 = &VAR_13->SwLed0;

 switch (VAR_12) {
 case 134:
  if (VAR_14->sitesurveyctrl.traffic_busy)
   ;
  else if (!VAR_15->bLedScanBlinkInProgress) {
   if (FUNC_1(VAR_15))
    return;
   if (VAR_15->bLedBlinkInProgress) {
    FUNC_3(&VAR_15->BlinkTimer);
    VAR_15->bLedBlinkInProgress = 0;
   }
   VAR_15->bLedScanBlinkInProgress = 1;
   VAR_15->CurrLedState = VAR_5;
   VAR_15->BlinkTimes = 24;
   if (VAR_15->bLedOn)
    VAR_15->BlinkingLedState = VAR_6;
   else
    VAR_15->BlinkingLedState = VAR_7;
   FUNC_4(&VAR_15->BlinkTimer, VAR_10 +
      FUNC_5(VAR_1));
  }
  break;
 case 128:
 case 135:
  if (!VAR_15->bLedBlinkInProgress &&
      FUNC_2(VAR_14, VAR_9)) {
   if (VAR_15->CurrLedState == VAR_5 ||
       FUNC_1(VAR_15))
    return;
   VAR_15->bLedBlinkInProgress = 1;
   VAR_15->CurrLedState = VAR_8;
   VAR_15->BlinkTimes = 2;
   if (VAR_15->bLedOn)
    VAR_15->BlinkingLedState = VAR_6;
   else
    VAR_15->BlinkingLedState = VAR_7;
   FUNC_4(&VAR_15->BlinkTimer, VAR_10 +
      FUNC_5(VAR_0));
  }
  break;
 case 138:
  if (FUNC_1(VAR_15))
   return;
  VAR_15->CurrLedState = VAR_7;
  VAR_15->BlinkingLedState = VAR_7;
  if (VAR_15->bLedBlinkInProgress) {
   FUNC_3(&VAR_15->BlinkTimer);
   VAR_15->bLedBlinkInProgress = 0;
  }
  if (VAR_15->bLedScanBlinkInProgress) {
   FUNC_3(&VAR_15->BlinkTimer);
   VAR_15->bLedScanBlinkInProgress = 0;
  }
  FUNC_4(&VAR_15->BlinkTimer,
     VAR_10 + FUNC_5(0));
  break;
 case 132:
 case 131:
  if (!VAR_15->bLedWPSBlinkInProgress) {
   if (VAR_15->bLedBlinkInProgress) {
    FUNC_3(&VAR_15->BlinkTimer);
    VAR_15->bLedBlinkInProgress = 0;
   }
   if (VAR_15->bLedScanBlinkInProgress) {
    FUNC_3(&VAR_15->BlinkTimer);
    VAR_15->bLedScanBlinkInProgress = 0;
   }
   VAR_15->bLedWPSBlinkInProgress = 1;
   VAR_15->CurrLedState = VAR_2;
   if (VAR_15->bLedOn)
    VAR_15->BlinkingLedState = VAR_6;
   else
    VAR_15->BlinkingLedState = VAR_7;
   FUNC_4(&VAR_15->BlinkTimer, VAR_10 +
      FUNC_5(VAR_1));
  }
  break;
 case 130:
  if (VAR_15->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_15->BlinkTimer);
   VAR_15->bLedWPSBlinkInProgress = 0;
  } else {
   VAR_15->bLedWPSBlinkInProgress = 1;
  }
  VAR_15->CurrLedState = VAR_3;
  if (VAR_15->bLedOn) {
   VAR_15->BlinkingLedState = VAR_6;
   FUNC_4(&VAR_15->BlinkTimer, VAR_10 +
      FUNC_5(VAR_4));
  } else {
   VAR_15->BlinkingLedState = VAR_7;
   FUNC_4(&VAR_15->BlinkTimer,
      VAR_10 + FUNC_5(0));
  }
  break;
 case 129:
  if (VAR_15->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_15->BlinkTimer);
   VAR_15->bLedWPSBlinkInProgress = 0;
  }
  VAR_15->CurrLedState = VAR_6;
  VAR_15->BlinkingLedState = VAR_6;
  FUNC_4(&VAR_15->BlinkTimer,
     VAR_10 + FUNC_5(0));
  break;
 case 133:
 case 137:
  if (!FUNC_0(VAR_15)) {
   VAR_15->CurrLedState = VAR_6;
   VAR_15->BlinkingLedState = VAR_6;
   FUNC_4(&VAR_15->BlinkTimer,
      VAR_10 + FUNC_5(0));
  }
  break;
 case 136:
  VAR_15->CurrLedState = VAR_6;
  VAR_15->BlinkingLedState = VAR_6;
  if (VAR_15->bLedBlinkInProgress) {
   FUNC_3(&VAR_15->BlinkTimer);
   VAR_15->bLedBlinkInProgress = 0;
  }
  if (VAR_15->bLedScanBlinkInProgress) {
   FUNC_3(&VAR_15->BlinkTimer);
   VAR_15->bLedScanBlinkInProgress = 0;
  }
  if (VAR_15->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_15->BlinkTimer);
   VAR_15->bLedWPSBlinkInProgress = 0;
  }
  FUNC_4(&VAR_15->BlinkTimer,
     VAR_10 + FUNC_5(0));
  break;
 default:
  break;
 }
}
