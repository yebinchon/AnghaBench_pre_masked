
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_priv {int dummy; } ;
struct LED_871x {scalar_t__ BlinkingLedState; int bSWLedCtrl; int CurrLedState; int bLedLinkBlinkInProgress; int bLedNoLinkBlinkInProgress; int bLedScanBlinkInProgress; int bLedBlinkInProgress; int bLedWPSBlinkInProgress; int BlinkTimer; scalar_t__ bLedOn; int BlinkTimes; struct _adapter* padapter; } ;
struct led_priv {struct LED_871x SwLed1; } ;
struct eeprom_priv {scalar_t__ CustomerID; } ;
struct _adapter {struct eeprom_priv eeprompriv; struct mlme_priv mlmepriv; struct led_priv ledpriv; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

 void* VAR_5 ;
 scalar_t__ VAR_6 ;

 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct _adapter*,struct LED_871x*) ;
 int FUNC_1 (struct _adapter*,struct LED_871x*) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct mlme_priv*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct LED_871x *VAR_11)
{
 struct _adapter *VAR_12 = VAR_11->padapter;
 struct led_priv *VAR_13 = &VAR_12->ledpriv;
 struct mlme_priv *VAR_14 = &VAR_12->mlmepriv;
 struct eeprom_priv *VAR_15 = &VAR_12->eeprompriv;
 struct LED_871x *VAR_16 = &VAR_13->SwLed1;
 u8 VAR_17 = 0;

 if (VAR_15->CustomerID == VAR_7)
  VAR_11 = &VAR_13->SwLed1;

 if (VAR_11->BlinkingLedState == VAR_6)
  FUNC_1(VAR_12, VAR_11);
 else
  FUNC_0(VAR_12, VAR_11);
 if (VAR_15->CustomerID == VAR_8) {
  if (FUNC_2(VAR_14, VAR_9)) {
   if (!VAR_16->bSWLedCtrl) {
    FUNC_1(VAR_12, VAR_16);
    VAR_16->bSWLedCtrl = 1;
   } else if (!VAR_16->bLedOn) {
    FUNC_1(VAR_12, VAR_16);
   }
  } else {
   if (!VAR_16->bSWLedCtrl) {
    FUNC_0(VAR_12, VAR_16);
    VAR_16->bSWLedCtrl = 1;
   } else if (VAR_16->bLedOn) {
    FUNC_0(VAR_12, VAR_16);
   }
  }
 }
 switch (VAR_11->CurrLedState) {
 case 132:
  if (VAR_11->bLedOn)
   VAR_11->BlinkingLedState = VAR_5;
  else
   VAR_11->BlinkingLedState = VAR_6;
  FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
     FUNC_4(VAR_2));
  break;
 case 133:
  if (VAR_11->bLedOn)
   VAR_11->BlinkingLedState = VAR_5;
  else
   VAR_11->BlinkingLedState = VAR_6;
  FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
     FUNC_4(VAR_1));
  break;
 case 129:
  VAR_11->BlinkTimes--;
  if (VAR_11->BlinkTimes == 0)
   VAR_17 = 1;
  if (VAR_17) {
   if (FUNC_2(VAR_14, VAR_9)) {
    VAR_11->bLedLinkBlinkInProgress = 1;
    VAR_11->CurrLedState = 133;
    if (VAR_11->bLedOn)
     VAR_11->BlinkingLedState = VAR_5;
    else
     VAR_11->BlinkingLedState = VAR_6;
    FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
       FUNC_4(VAR_1));
   } else if (!FUNC_2(VAR_14, VAR_9)) {
    VAR_11->bLedNoLinkBlinkInProgress = 1;
    VAR_11->CurrLedState = 132;
    if (VAR_11->bLedOn)
     VAR_11->BlinkingLedState = VAR_5;
    else
     VAR_11->BlinkingLedState = VAR_6;
    FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
       FUNC_4(VAR_2));
   }
   VAR_11->bLedScanBlinkInProgress = 0;
  } else {
   if (VAR_11->bLedOn)
    VAR_11->BlinkingLedState = VAR_5;
   else
    VAR_11->BlinkingLedState = VAR_6;
   FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
      FUNC_4(VAR_3));
  }
  break;
 case 128:
  VAR_11->BlinkTimes--;
  if (VAR_11->BlinkTimes == 0)
   VAR_17 = 1;
  if (VAR_17) {
   if (FUNC_2(VAR_14, VAR_9)) {
    VAR_11->bLedLinkBlinkInProgress = 1;
    VAR_11->CurrLedState = 133;
    if (VAR_11->bLedOn)
     VAR_11->BlinkingLedState = VAR_5;
    else
     VAR_11->BlinkingLedState = VAR_6;
    FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
       FUNC_4(VAR_1));
   } else if (!FUNC_2(VAR_14, VAR_9)) {
    VAR_11->bLedNoLinkBlinkInProgress = 1;
    VAR_11->CurrLedState = 132;
    if (VAR_11->bLedOn)
     VAR_11->BlinkingLedState = VAR_5;
    else
     VAR_11->BlinkingLedState = VAR_6;
    FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
       FUNC_4(VAR_2));
   }
   VAR_11->BlinkTimes = 0;
   VAR_11->bLedBlinkInProgress = 0;
  } else {
   if (VAR_11->bLedOn)
    VAR_11->BlinkingLedState = VAR_5;
   else
    VAR_11->BlinkingLedState = VAR_6;
   FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
      FUNC_4(VAR_0));
  }
  break;
 case 131:
  if (VAR_11->bLedOn)
   VAR_11->BlinkingLedState = VAR_5;
  else
   VAR_11->BlinkingLedState = VAR_6;
  FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
     FUNC_4(VAR_3));
  break;
 case 130:
  if (VAR_11->BlinkingLedState == VAR_6) {
   VAR_11->BlinkingLedState = VAR_5;
   FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
      FUNC_4(VAR_4));
   VAR_17 = 0;
  } else {
   VAR_17 = 1;
  }
  if (VAR_17) {
   VAR_11->bLedLinkBlinkInProgress = 1;
   VAR_11->CurrLedState = 133;
   if (VAR_11->bLedOn)
    VAR_11->BlinkingLedState = VAR_5;
   else
    VAR_11->BlinkingLedState = VAR_6;
   FUNC_3(&VAR_11->BlinkTimer, VAR_10 +
      FUNC_4(VAR_1));
  }
  VAR_11->bLedWPSBlinkInProgress = 0;
  break;
 default:
  break;
 }
}
