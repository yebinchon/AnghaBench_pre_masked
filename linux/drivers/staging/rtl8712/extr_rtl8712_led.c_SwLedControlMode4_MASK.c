
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int traffic_busy; } ;
struct mlme_priv {TYPE_1__ sitesurveyctrl; } ;
struct LED_871x {int bLedWPSBlinkInProgress; int bLedStartToLinkBlinkInProgress; int bLedBlinkInProgress; int bLedNoLinkBlinkInProgress; int bLedScanBlinkInProgress; int BlinkTimes; int bLedLinkBlinkInProgress; void* BlinkingLedState; int BlinkTimer; void* CurrLedState; int bLedOn; } ;
struct led_priv {struct LED_871x SwLed1; struct LED_871x SwLed0; } ;
struct _adapter {struct mlme_priv mlmepriv; struct led_priv ledpriv; } ;
typedef enum LED_CTL_MODE { ____Placeholder_LED_CTL_MODE } LED_CTL_MODE ;


 int FUNC_0 (struct LED_871x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_1 (struct _adapter*,struct LED_871x*) ;
 int VAR_15 ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct _adapter *VAR_17,
         enum LED_CTL_MODE VAR_18)
{
 struct led_priv *VAR_19 = &VAR_17->ledpriv;
 struct mlme_priv *VAR_20 = &VAR_17->mlmepriv;
 struct LED_871x *VAR_21 = &VAR_19->SwLed0;
 struct LED_871x *VAR_22 = &VAR_19->SwLed1;

 switch (VAR_18) {
 case 134:
  if (VAR_22->bLedWPSBlinkInProgress) {
   VAR_22->bLedWPSBlinkInProgress = 0;
   FUNC_3(&VAR_22->BlinkTimer);
   VAR_22->BlinkingLedState = VAR_11;
   VAR_22->CurrLedState = VAR_11;
   if (VAR_22->bLedOn)
    FUNC_4(&VAR_21->BlinkTimer,
       VAR_16 + FUNC_5(0));
  }
  if (!VAR_21->bLedStartToLinkBlinkInProgress) {
   if (VAR_21->CurrLedState == VAR_10 ||
       FUNC_0(VAR_21))
    return;
   if (VAR_21->bLedBlinkInProgress) {
    FUNC_3(&VAR_21->BlinkTimer);
    VAR_21->bLedBlinkInProgress = 0;
   }
   if (VAR_21->bLedNoLinkBlinkInProgress) {
    FUNC_3(&VAR_21->BlinkTimer);
    VAR_21->bLedNoLinkBlinkInProgress = 0;
   }
   VAR_21->bLedStartToLinkBlinkInProgress = 1;
   VAR_21->CurrLedState = VAR_6;
   if (VAR_21->bLedOn) {
    VAR_21->BlinkingLedState = VAR_11;
    FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
       FUNC_5(VAR_5));
   } else {
    VAR_21->BlinkingLedState = VAR_12;
    FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
       FUNC_5(VAR_1));
   }
  }
  break;
 case 139:
 case 138:

  if (VAR_18 == 139) {
   if (VAR_22->bLedWPSBlinkInProgress) {
    VAR_22->bLedWPSBlinkInProgress = 0;
    FUNC_3(&VAR_22->BlinkTimer);
    VAR_22->BlinkingLedState = VAR_11;
    VAR_22->CurrLedState = VAR_11;
    if (VAR_22->bLedOn)
     FUNC_4(&VAR_21->BlinkTimer,
        VAR_16 + FUNC_5(0));
   }
  }
  if (!VAR_21->bLedNoLinkBlinkInProgress) {
   if (VAR_21->CurrLedState == VAR_10 ||
       FUNC_0(VAR_21))
    return;
   if (VAR_21->bLedBlinkInProgress) {
    FUNC_3(&VAR_21->BlinkTimer);
    VAR_21->bLedBlinkInProgress = 0;
   }
   VAR_21->bLedNoLinkBlinkInProgress = 1;
   VAR_21->CurrLedState = VAR_4;
   if (VAR_21->bLedOn)
    VAR_21->BlinkingLedState = VAR_11;
   else
    VAR_21->BlinkingLedState = VAR_12;
   FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
      FUNC_5(VAR_2));
  }
  break;
 case 135:
  if (VAR_20->sitesurveyctrl.traffic_busy &&
      FUNC_2(VAR_20, VAR_15))
   ;
  else if (!VAR_21->bLedScanBlinkInProgress) {
   if (FUNC_0(VAR_21))
    return;
   if (VAR_21->bLedNoLinkBlinkInProgress) {
    FUNC_3(&VAR_21->BlinkTimer);
    VAR_21->bLedNoLinkBlinkInProgress = 0;
   }
   if (VAR_21->bLedBlinkInProgress) {
    FUNC_3(&VAR_21->BlinkTimer);
    VAR_21->bLedBlinkInProgress = 0;
   }
   VAR_21->bLedScanBlinkInProgress = 1;
   VAR_21->CurrLedState = VAR_10;
   VAR_21->BlinkTimes = 24;
   if (VAR_21->bLedOn)
    VAR_21->BlinkingLedState = VAR_11;
   else
    VAR_21->BlinkingLedState = VAR_12;
   FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
      FUNC_5(VAR_3));
  }
  break;
 case 128:
 case 136:
  if (!VAR_21->bLedBlinkInProgress) {
   if (VAR_21->CurrLedState == VAR_10 ||
       FUNC_0(VAR_21))
    return;
   if (VAR_21->bLedNoLinkBlinkInProgress) {
    FUNC_3(&VAR_21->BlinkTimer);
    VAR_21->bLedNoLinkBlinkInProgress = 0;
   }
   VAR_21->bLedBlinkInProgress = 1;
   VAR_21->CurrLedState = VAR_13;
   VAR_21->BlinkTimes = 2;
   if (VAR_21->bLedOn)
    VAR_21->BlinkingLedState = VAR_11;
   else
    VAR_21->BlinkingLedState = VAR_12;
   FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
      FUNC_5(VAR_0));
  }
  break;
 case 133:
 case 132:
  if (VAR_22->bLedWPSBlinkInProgress) {
   VAR_22->bLedWPSBlinkInProgress = 0;
   FUNC_3(&VAR_22->BlinkTimer);
   VAR_22->BlinkingLedState = VAR_11;
   VAR_22->CurrLedState = VAR_11;
   if (VAR_22->bLedOn)
    FUNC_4(&VAR_21->BlinkTimer,
       VAR_16 + FUNC_5(0));
  }
  if (!VAR_21->bLedWPSBlinkInProgress) {
   if (VAR_21->bLedNoLinkBlinkInProgress) {
    FUNC_3(&VAR_21->BlinkTimer);
    VAR_21->bLedNoLinkBlinkInProgress = 0;
   }
   if (VAR_21->bLedBlinkInProgress) {
    FUNC_3(&VAR_21->BlinkTimer);
    VAR_21->bLedBlinkInProgress = 0;
   }
   if (VAR_21->bLedScanBlinkInProgress) {
    FUNC_3(&VAR_21->BlinkTimer);
    VAR_21->bLedScanBlinkInProgress = 0;
   }
   VAR_21->bLedWPSBlinkInProgress = 1;
   VAR_21->CurrLedState = VAR_7;
   if (VAR_21->bLedOn) {
    VAR_21->BlinkingLedState = VAR_11;
    FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
       FUNC_5(VAR_5));
   } else {
    VAR_21->BlinkingLedState = VAR_12;
    FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
       FUNC_5(VAR_1));
   }
  }
  break;
 case 131:
  if (VAR_21->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_21->BlinkTimer);
   VAR_21->bLedWPSBlinkInProgress = 0;
  }
  VAR_21->bLedNoLinkBlinkInProgress = 1;
  VAR_21->CurrLedState = VAR_4;
  if (VAR_21->bLedOn)
   VAR_21->BlinkingLedState = VAR_11;
  else
   VAR_21->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
     FUNC_5(VAR_2));
  break;
 case 130:
  if (VAR_21->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_21->BlinkTimer);
   VAR_21->bLedWPSBlinkInProgress = 0;
  }
  VAR_21->bLedNoLinkBlinkInProgress = 1;
  VAR_21->CurrLedState = VAR_4;
  if (VAR_21->bLedOn)
   VAR_21->BlinkingLedState = VAR_11;
  else
   VAR_21->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
     FUNC_5(VAR_2));

  if (VAR_22->bLedWPSBlinkInProgress)
   FUNC_3(&VAR_22->BlinkTimer);
  else
   VAR_22->bLedWPSBlinkInProgress = 1;
  VAR_22->CurrLedState = VAR_8;
  if (VAR_22->bLedOn)
   VAR_22->BlinkingLedState = VAR_11;
  else
   VAR_22->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
     FUNC_5(VAR_1));
  break;
 case 129:
  if (VAR_21->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_21->BlinkTimer);
   VAR_21->bLedWPSBlinkInProgress = 0;
  }
  VAR_21->bLedNoLinkBlinkInProgress = 1;
  VAR_21->CurrLedState = VAR_4;
  if (VAR_21->bLedOn)
   VAR_21->BlinkingLedState = VAR_11;
  else
   VAR_21->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
     FUNC_5(VAR_2));

  if (VAR_22->bLedWPSBlinkInProgress)
   FUNC_3(&VAR_22->BlinkTimer);
  else
   VAR_22->bLedWPSBlinkInProgress = 1;
  VAR_22->CurrLedState = VAR_9;
  VAR_22->BlinkTimes = 10;
  if (VAR_22->bLedOn)
   VAR_22->BlinkingLedState = VAR_11;
  else
   VAR_22->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_21->BlinkTimer, VAR_16 +
     FUNC_5(VAR_1));
  break;
 case 137:
  VAR_21->CurrLedState = VAR_11;
  VAR_21->BlinkingLedState = VAR_11;
  if (VAR_21->bLedNoLinkBlinkInProgress) {
   FUNC_3(&VAR_21->BlinkTimer);
   VAR_21->bLedNoLinkBlinkInProgress = 0;
  }
  if (VAR_21->bLedLinkBlinkInProgress) {
   FUNC_3(&VAR_21->BlinkTimer);
   VAR_21->bLedLinkBlinkInProgress = 0;
  }
  if (VAR_21->bLedBlinkInProgress) {
   FUNC_3(&VAR_21->BlinkTimer);
   VAR_21->bLedBlinkInProgress = 0;
  }
  if (VAR_21->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_21->BlinkTimer);
   VAR_21->bLedWPSBlinkInProgress = 0;
  }
  if (VAR_21->bLedScanBlinkInProgress) {
   FUNC_3(&VAR_21->BlinkTimer);
   VAR_21->bLedScanBlinkInProgress = 0;
  }
  if (VAR_21->bLedStartToLinkBlinkInProgress) {
   FUNC_3(&VAR_21->BlinkTimer);
   VAR_21->bLedStartToLinkBlinkInProgress = 0;
  }
  if (VAR_22->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_22->BlinkTimer);
   VAR_22->bLedWPSBlinkInProgress = 0;
  }
  VAR_22->BlinkingLedState = VAR_14;
  FUNC_1(VAR_17, VAR_21);
  FUNC_1(VAR_17, VAR_22);
  break;
 default:
  break;
 }
}
