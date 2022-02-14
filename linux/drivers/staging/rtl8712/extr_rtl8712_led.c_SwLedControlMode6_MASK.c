
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlme_priv {int dummy; } ;
struct LED_871x {int bLedBlinkInProgress; int BlinkTimes; int bLedWPSBlinkInProgress; int BlinkTimer; void* BlinkingLedState; void* CurrLedState; int bLedOn; } ;
struct led_priv {struct LED_871x SwLed0; } ;
struct _adapter {struct mlme_priv mlmepriv; struct led_priv ledpriv; } ;
typedef enum LED_CTL_MODE { ____Placeholder_LED_CTL_MODE } LED_CTL_MODE ;


 int FUNC_0 (struct LED_871x*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (struct _adapter*,struct LED_871x*) ;
 int VAR_6 ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct _adapter *VAR_8,
         enum LED_CTL_MODE VAR_9)
{
 struct led_priv *VAR_10 = &VAR_8->ledpriv;
 struct mlme_priv *VAR_11 = &VAR_8->mlmepriv;
 struct LED_871x *VAR_12 = &VAR_10->SwLed0;

 switch (VAR_9) {
 case 135:
 case 137:
 case 138:
 case 133:
  if (FUNC_0(VAR_12))
   return;
  VAR_12->CurrLedState = VAR_4;
  VAR_12->BlinkingLedState = VAR_4;
  VAR_12->bLedBlinkInProgress = 0;
  FUNC_4(&VAR_12->BlinkTimer, VAR_7 + FUNC_5(0));
  break;
 case 128:
 case 134:
  if (!VAR_12->bLedBlinkInProgress &&
      FUNC_2(VAR_11, VAR_6)) {
   if (FUNC_0(VAR_12))
    return;
   VAR_12->bLedBlinkInProgress = 1;
   VAR_12->CurrLedState = VAR_5;
   VAR_12->BlinkTimes = 2;
   if (VAR_12->bLedOn)
    VAR_12->BlinkingLedState = VAR_3;
   else
    VAR_12->BlinkingLedState = VAR_4;
   FUNC_4(&VAR_12->BlinkTimer, VAR_7 +
      FUNC_5(VAR_0));
  }
  break;
 case 132:
 case 131:
  if (!VAR_12->bLedWPSBlinkInProgress) {
   if (VAR_12->bLedBlinkInProgress) {
    FUNC_3(&VAR_12->BlinkTimer);
    VAR_12->bLedBlinkInProgress = 0;
   }
   VAR_12->bLedWPSBlinkInProgress = 1;
   VAR_12->CurrLedState = VAR_2;
   if (VAR_12->bLedOn)
    VAR_12->BlinkingLedState = VAR_3;
   else
    VAR_12->BlinkingLedState = VAR_4;
   FUNC_4(&VAR_12->BlinkTimer, VAR_7 +
      FUNC_5(VAR_1));
  }
  break;
 case 129:
 case 130:
  if (VAR_12->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_12->BlinkTimer);
   VAR_12->bLedWPSBlinkInProgress = 0;
  }
  VAR_12->CurrLedState = VAR_4;
  VAR_12->BlinkingLedState = VAR_4;
  FUNC_4(&VAR_12->BlinkTimer,
     VAR_7 + FUNC_5(0));
  break;
 case 136:
  VAR_12->CurrLedState = VAR_3;
  VAR_12->BlinkingLedState = VAR_3;
  if (VAR_12->bLedBlinkInProgress) {
   FUNC_3(&VAR_12->BlinkTimer);
   VAR_12->bLedBlinkInProgress = 0;
  }
  if (VAR_12->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_12->BlinkTimer);
   VAR_12->bLedWPSBlinkInProgress = 0;
  }
  FUNC_1(VAR_8, VAR_12);
  break;
 default:
  break;
 }
}
