
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct LED_871x {scalar_t__ BlinkingLedState; int CurrLedState; int BlinkTimes; int bLedNoLinkBlinkInProgress; int bLedScanBlinkInProgress; int bLedBlinkInProgress; int BlinkTimer; int bLedOn; int bLedWPSBlinkInProgress; struct _adapter* padapter; } ;
struct led_priv {struct LED_871x SwLed1; } ;
struct _adapter {struct led_priv ledpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;





 void* VAR_6 ;
 scalar_t__ VAR_7 ;

 scalar_t__ VAR_8 ;
 int FUNC_0 (struct _adapter*,struct LED_871x*) ;
 int FUNC_1 (struct _adapter*,struct LED_871x*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct LED_871x *VAR_10)
{
 struct _adapter *VAR_11 = VAR_10->padapter;
 struct led_priv *VAR_12 = &VAR_11->ledpriv;
 struct LED_871x *VAR_13 = &VAR_12->SwLed1;
 u8 VAR_14 = 0;


 if (VAR_10->BlinkingLedState == VAR_7)
  FUNC_1(VAR_11, VAR_10);
 else
  FUNC_0(VAR_11, VAR_10);
 if (!VAR_13->bLedWPSBlinkInProgress &&
     VAR_13->BlinkingLedState == VAR_8) {
  VAR_13->BlinkingLedState = VAR_6;
  VAR_13->CurrLedState = VAR_6;
  FUNC_0(VAR_11, VAR_13);
 }
 switch (VAR_10->CurrLedState) {
 case 134:
  if (VAR_10->bLedOn)
   VAR_10->BlinkingLedState = VAR_6;
  else
   VAR_10->BlinkingLedState = VAR_7;
  FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
     FUNC_3(VAR_3));
  break;
 case 133:
  if (VAR_10->bLedOn) {
   VAR_10->BlinkingLedState = VAR_6;
   FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_3(VAR_5));
  } else {
   VAR_10->BlinkingLedState = VAR_7;
   FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_3(VAR_2));
  }
  break;
 case 129:
  VAR_10->BlinkTimes--;
  if (VAR_10->BlinkTimes == 0)
   VAR_14 = 1;
  if (VAR_14) {
   VAR_10->bLedNoLinkBlinkInProgress = 1;
   VAR_10->CurrLedState = 134;
   if (VAR_10->bLedOn)
    VAR_10->BlinkingLedState = VAR_6;
   else
    VAR_10->BlinkingLedState = VAR_7;
   FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_3(VAR_3));
   VAR_10->bLedScanBlinkInProgress = 0;
  } else {
   if (VAR_10->bLedOn)
    VAR_10->BlinkingLedState = VAR_6;
   else
    VAR_10->BlinkingLedState = VAR_7;
   FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_3(VAR_4));
  }
  break;
 case 128:
  VAR_10->BlinkTimes--;
  if (VAR_10->BlinkTimes == 0)
   VAR_14 = 1;
  if (VAR_14) {
   VAR_10->bLedNoLinkBlinkInProgress = 1;
   VAR_10->CurrLedState = 134;
   if (VAR_10->bLedOn)
    VAR_10->BlinkingLedState = VAR_6;
   else
    VAR_10->BlinkingLedState = VAR_7;
   FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_3(VAR_3));
   VAR_10->bLedBlinkInProgress = 0;
  } else {
   if (VAR_10->bLedOn)
    VAR_10->BlinkingLedState = VAR_6;
   else
    VAR_10->BlinkingLedState = VAR_7;
   FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_3(VAR_0));
  }
  break;
 case 132:
  if (VAR_10->bLedOn) {
   VAR_10->BlinkingLedState = VAR_6;
   FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_3(VAR_5));
  } else {
   VAR_10->BlinkingLedState = VAR_7;
   FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_3(VAR_2));
  }
  break;
 case 131:
  if (VAR_10->bLedOn)
   VAR_10->BlinkingLedState = VAR_6;
  else
   VAR_10->BlinkingLedState = VAR_7;
  FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
     FUNC_3(VAR_2));
  break;
 case 130:
  VAR_10->BlinkTimes--;
  if (VAR_10->BlinkTimes == 0) {
   if (VAR_10->bLedOn)
    VAR_10->BlinkTimes = 1;
   else
    VAR_14 = 1;
  }
  if (VAR_14) {
   VAR_10->BlinkTimes = 10;
   VAR_10->BlinkingLedState = VAR_7;
   FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_3(VAR_1));
  } else {
   if (VAR_10->bLedOn)
    VAR_10->BlinkingLedState = VAR_6;
   else
    VAR_10->BlinkingLedState = VAR_7;
   FUNC_2(&VAR_10->BlinkTimer, VAR_9 +
      FUNC_3(VAR_2));
  }
  break;
 default:
  break;
 }
}
