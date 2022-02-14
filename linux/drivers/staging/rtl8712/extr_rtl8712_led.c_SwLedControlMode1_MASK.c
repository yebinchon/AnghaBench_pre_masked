
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sitesurvey_ctrl {int traffic_busy; } ;
struct mlme_priv {struct sitesurvey_ctrl sitesurveyctrl; } ;
struct LED_871x {int bLedNoLinkBlinkInProgress; int bLedLinkBlinkInProgress; int bLedBlinkInProgress; int bLedScanBlinkInProgress; int BlinkTimes; int bLedWPSBlinkInProgress; int BlinkTimer; void* BlinkingLedState; void* CurrLedState; int bLedOn; } ;
struct led_priv {struct LED_871x SwLed1; struct LED_871x SwLed0; } ;
struct TYPE_2__ {scalar_t__ CustomerID; } ;
struct _adapter {TYPE_1__ eeprompriv; struct mlme_priv mlmepriv; struct led_priv ledpriv; } ;
typedef enum LED_CTL_MODE { ____Placeholder_LED_CTL_MODE } LED_CTL_MODE ;


 int FUNC_0 (struct LED_871x*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct mlme_priv*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct _adapter *VAR_16,
         enum LED_CTL_MODE VAR_17)
{
 struct led_priv *VAR_18 = &VAR_16->ledpriv;
 struct LED_871x *VAR_19 = &VAR_18->SwLed0;
 struct mlme_priv *VAR_20 = &VAR_16->mlmepriv;
 struct sitesurvey_ctrl *VAR_21 = &VAR_20->sitesurveyctrl;

 if (VAR_16->eeprompriv.CustomerID == VAR_13)
  VAR_19 = &VAR_18->SwLed1;
 switch (VAR_17) {
 case 133:
 case 137:
  if (!VAR_19->bLedNoLinkBlinkInProgress) {
   if (VAR_19->CurrLedState == VAR_9 ||
       FUNC_0(VAR_19))
    return;
   if (VAR_19->bLedLinkBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedLinkBlinkInProgress = 0;
   }
   if (VAR_19->bLedBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedBlinkInProgress = 0;
   }
   VAR_19->bLedNoLinkBlinkInProgress = 1;
   VAR_19->CurrLedState = VAR_5;
   if (VAR_19->bLedOn)
    VAR_19->BlinkingLedState = VAR_10;
   else
    VAR_19->BlinkingLedState = VAR_11;
   FUNC_3(&VAR_19->BlinkTimer, VAR_15 +
      FUNC_4(VAR_3));
  }
  break;
 case 138:
  if (!VAR_19->bLedLinkBlinkInProgress) {
   if (VAR_19->CurrLedState == VAR_9 ||
       FUNC_0(VAR_19))
    return;
   if (VAR_19->bLedNoLinkBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedNoLinkBlinkInProgress = 0;
   }
   if (VAR_19->bLedBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedBlinkInProgress = 0;
   }
   VAR_19->bLedLinkBlinkInProgress = 1;
   VAR_19->CurrLedState = VAR_2;
   if (VAR_19->bLedOn)
    VAR_19->BlinkingLedState = VAR_10;
   else
    VAR_19->BlinkingLedState = VAR_11;
   FUNC_3(&VAR_19->BlinkTimer, VAR_15 +
      FUNC_4(VAR_1));
  }
  break;
 case 134:
  if (VAR_21->traffic_busy &&
      FUNC_1(VAR_20, VAR_14))
   ;
  else if (!VAR_19->bLedScanBlinkInProgress) {
   if (FUNC_0(VAR_19))
    return;
   if (VAR_19->bLedNoLinkBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedNoLinkBlinkInProgress = 0;
   }
   if (VAR_19->bLedLinkBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedLinkBlinkInProgress = 0;
   }
   if (VAR_19->bLedBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedBlinkInProgress = 0;
   }
   VAR_19->bLedScanBlinkInProgress = 1;
   VAR_19->CurrLedState = VAR_9;
   VAR_19->BlinkTimes = 24;
   if (VAR_19->bLedOn)
    VAR_19->BlinkingLedState = VAR_10;
   else
    VAR_19->BlinkingLedState = VAR_11;
   FUNC_3(&VAR_19->BlinkTimer, VAR_15 +
      FUNC_4(VAR_4));
  }
  break;
 case 128:
 case 135:
  if (!VAR_19->bLedBlinkInProgress) {
   if (VAR_19->CurrLedState == VAR_9 ||
       FUNC_0(VAR_19))
    return;
   if (VAR_19->bLedNoLinkBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedNoLinkBlinkInProgress = 0;
   }
   if (VAR_19->bLedLinkBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedLinkBlinkInProgress = 0;
   }
   VAR_19->bLedBlinkInProgress = 1;
   VAR_19->CurrLedState = VAR_12;
   VAR_19->BlinkTimes = 2;
   if (VAR_19->bLedOn)
    VAR_19->BlinkingLedState = VAR_10;
   else
    VAR_19->BlinkingLedState = VAR_11;
   FUNC_3(&VAR_19->BlinkTimer, VAR_15 +
      FUNC_4(VAR_0));
  }
  break;

 case 132:
 case 131:
  if (!VAR_19->bLedWPSBlinkInProgress) {
   if (VAR_19->bLedNoLinkBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedNoLinkBlinkInProgress = 0;
   }
   if (VAR_19->bLedLinkBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedLinkBlinkInProgress = 0;
   }
   if (VAR_19->bLedBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedBlinkInProgress = 0;
   }
   if (VAR_19->bLedScanBlinkInProgress) {
    FUNC_2(&VAR_19->BlinkTimer);
    VAR_19->bLedScanBlinkInProgress = 0;
   }
   VAR_19->bLedWPSBlinkInProgress = 1;
   VAR_19->CurrLedState = VAR_6;
   if (VAR_19->bLedOn)
    VAR_19->BlinkingLedState = VAR_10;
   else
    VAR_19->BlinkingLedState = VAR_11;
   FUNC_3(&VAR_19->BlinkTimer, VAR_15 +
      FUNC_4(VAR_4));
  }
  break;
 case 130:
  if (VAR_19->bLedNoLinkBlinkInProgress) {
   FUNC_2(&VAR_19->BlinkTimer);
   VAR_19->bLedNoLinkBlinkInProgress = 0;
  }
  if (VAR_19->bLedLinkBlinkInProgress) {
   FUNC_2(&VAR_19->BlinkTimer);
   VAR_19->bLedLinkBlinkInProgress = 0;
  }
  if (VAR_19->bLedBlinkInProgress) {
   FUNC_2(&VAR_19->BlinkTimer);
   VAR_19->bLedBlinkInProgress = 0;
  }
  if (VAR_19->bLedScanBlinkInProgress) {
   FUNC_2(&VAR_19->BlinkTimer);
   VAR_19->bLedScanBlinkInProgress = 0;
  }
  if (VAR_19->bLedWPSBlinkInProgress)
   FUNC_2(&VAR_19->BlinkTimer);
  else
   VAR_19->bLedWPSBlinkInProgress = 1;
  VAR_19->CurrLedState = VAR_7;
  if (VAR_19->bLedOn) {
   VAR_19->BlinkingLedState = VAR_10;
   FUNC_3(&VAR_19->BlinkTimer, VAR_15 +
      FUNC_4(VAR_8));
  } else {
   VAR_19->BlinkingLedState = VAR_11;
   FUNC_3(&VAR_19->BlinkTimer,
      VAR_15 + FUNC_4(0));
  }
  break;
 case 129:
  if (VAR_19->bLedWPSBlinkInProgress) {
   FUNC_2(&VAR_19->BlinkTimer);
   VAR_19->bLedWPSBlinkInProgress = 0;
  }
  VAR_19->bLedNoLinkBlinkInProgress = 1;
  VAR_19->CurrLedState = VAR_5;
  if (VAR_19->bLedOn)
   VAR_19->BlinkingLedState = VAR_10;
  else
   VAR_19->BlinkingLedState = VAR_11;
  FUNC_3(&VAR_19->BlinkTimer, VAR_15 +
     FUNC_4(VAR_3));
  break;
 case 136:
  VAR_19->CurrLedState = VAR_10;
  VAR_19->BlinkingLedState = VAR_10;
  if (VAR_19->bLedNoLinkBlinkInProgress) {
   FUNC_2(&VAR_19->BlinkTimer);
   VAR_19->bLedNoLinkBlinkInProgress = 0;
  }
  if (VAR_19->bLedLinkBlinkInProgress) {
   FUNC_2(&VAR_19->BlinkTimer);
   VAR_19->bLedLinkBlinkInProgress = 0;
  }
  if (VAR_19->bLedBlinkInProgress) {
   FUNC_2(&VAR_19->BlinkTimer);
   VAR_19->bLedBlinkInProgress = 0;
  }
  if (VAR_19->bLedWPSBlinkInProgress) {
   FUNC_2(&VAR_19->BlinkTimer);
   VAR_19->bLedWPSBlinkInProgress = 0;
  }
  if (VAR_19->bLedScanBlinkInProgress) {
   FUNC_2(&VAR_19->BlinkTimer);
   VAR_19->bLedScanBlinkInProgress = 0;
  }
  FUNC_3(&VAR_19->BlinkTimer,
     VAR_15 + FUNC_4(0));
  break;
 default:
  break;
 }
}
