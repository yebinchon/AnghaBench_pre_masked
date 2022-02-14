
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int traffic_busy; } ;
struct mlme_priv {TYPE_2__ sitesurveyctrl; } ;
struct LED_871x {int bLedBlinkInProgress; int bLedScanBlinkInProgress; int BlinkTimes; int BlinkTimer; void* BlinkingLedState; void* CurrLedState; int bLedOn; } ;
struct led_priv {struct LED_871x SwLed1; struct LED_871x SwLed0; } ;
struct TYPE_3__ {scalar_t__ CustomerID; } ;
struct _adapter {TYPE_1__ eeprompriv; struct mlme_priv mlmepriv; struct led_priv ledpriv; } ;
typedef enum LED_CTL_MODE { ____Placeholder_LED_CTL_MODE } LED_CTL_MODE ;


 int VAR_0 ;
 int VAR_1 ;







 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct _adapter*,struct LED_871x*) ;
 int VAR_7 ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct _adapter *VAR_9,
         enum LED_CTL_MODE VAR_10)
{
 struct led_priv *VAR_11 = &VAR_9->ledpriv;
 struct mlme_priv *VAR_12 = &VAR_9->mlmepriv;
 struct LED_871x *VAR_13 = &VAR_11->SwLed0;

 if (VAR_9->eeprompriv.CustomerID == VAR_6)
  VAR_13 = &VAR_11->SwLed1;

 switch (VAR_10) {
 case 131:
 case 133:
 case 134:
  if (VAR_13->CurrLedState == VAR_2)
   return;
  VAR_13->CurrLedState = VAR_4;
  VAR_13->BlinkingLedState = VAR_4;
  VAR_13->bLedBlinkInProgress = 0;
  FUNC_3(&VAR_13->BlinkTimer,
     VAR_8 + FUNC_4(0));
  break;
 case 129:
  if (VAR_12->sitesurveyctrl.traffic_busy &&
      FUNC_1(VAR_12, VAR_7))
   ;
  else if (!VAR_13->bLedScanBlinkInProgress) {
   if (VAR_13->bLedBlinkInProgress) {
    FUNC_2(&VAR_13->BlinkTimer);
    VAR_13->bLedBlinkInProgress = 0;
   }
   VAR_13->bLedScanBlinkInProgress = 1;
   VAR_13->CurrLedState = VAR_2;
   VAR_13->BlinkTimes = 24;
   if (VAR_13->bLedOn)
    VAR_13->BlinkingLedState = VAR_3;
   else
    VAR_13->BlinkingLedState = VAR_4;
   FUNC_3(&VAR_13->BlinkTimer, VAR_8 +
      FUNC_4(VAR_1));
  }
  break;
 case 128:
 case 130:
  if (!VAR_13->bLedBlinkInProgress) {
   if (VAR_13->CurrLedState == VAR_2)
    return;
   VAR_13->bLedBlinkInProgress = 1;
   VAR_13->CurrLedState = VAR_5;
   VAR_13->BlinkTimes = 2;
   if (VAR_13->bLedOn)
    VAR_13->BlinkingLedState = VAR_3;
   else
    VAR_13->BlinkingLedState = VAR_4;
   FUNC_3(&VAR_13->BlinkTimer, VAR_8 +
      FUNC_4(VAR_0));
  }
  break;
 case 132:
  VAR_13->CurrLedState = VAR_3;
  VAR_13->BlinkingLedState = VAR_3;
  if (VAR_13->bLedBlinkInProgress) {
   FUNC_2(&VAR_13->BlinkTimer);
   VAR_13->bLedBlinkInProgress = 0;
  }
  FUNC_0(VAR_9, VAR_13);
  break;
 default:
  break;
 }
}
