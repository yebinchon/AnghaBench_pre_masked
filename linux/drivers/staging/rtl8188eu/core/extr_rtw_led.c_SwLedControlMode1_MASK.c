
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bBusyTraffic; } ;
struct mlme_priv {TYPE_1__ LinkDetectInfo; } ;
struct LED_871x {int bLedNoLinkBlinkInProgress; int bLedLinkBlinkInProgress; int bLedBlinkInProgress; int bLedScanBlinkInProgress; int BlinkTimes; int bLedWPSBlinkInProgress; void* CurrLedState; int BlinkTimer; void* BlinkingLedState; int bLedOn; } ;
struct led_priv {struct LED_871x sw_led; } ;
struct adapter {struct mlme_priv mlmepriv; struct led_priv ledpriv; } ;
typedef enum LED_CTL_MODE { ____Placeholder_LED_CTL_MODE } LED_CTL_MODE ;


 int FUNC_0 (struct LED_871x*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct adapter*,struct LED_871x*) ;

__attribute__((used)) static void FUNC_7(struct adapter *VAR_17, enum LED_CTL_MODE VAR_18)
{
 struct led_priv *VAR_19 = &VAR_17->ledpriv;
 struct LED_871x *VAR_20 = &VAR_19->sw_led;
 struct mlme_priv *VAR_21 = &VAR_17->mlmepriv;

 switch (VAR_18) {
 case 136:
 case 133:
 case 138:
  if (VAR_20->bLedNoLinkBlinkInProgress)
   break;
  if (VAR_20->CurrLedState == VAR_4 ||
      FUNC_0(VAR_20))
   return;
  if (VAR_20->bLedLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedBlinkInProgress = 0;
  }
  VAR_20->bLedNoLinkBlinkInProgress = 1;
  VAR_20->CurrLedState = VAR_6;
  if (VAR_20->bLedOn)
   VAR_20->BlinkingLedState = VAR_11;
  else
   VAR_20->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_20->BlinkTimer, VAR_16 +
     FUNC_5(VAR_3));
  break;
 case 139:
  if (VAR_20->bLedLinkBlinkInProgress)
   break;
  if (VAR_20->CurrLedState == VAR_4 ||
      FUNC_0(VAR_20))
   return;
  if (VAR_20->bLedNoLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedNoLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedBlinkInProgress = 0;
  }
  VAR_20->bLedLinkBlinkInProgress = 1;
  VAR_20->CurrLedState = VAR_2;
  if (VAR_20->bLedOn)
   VAR_20->BlinkingLedState = VAR_11;
  else
   VAR_20->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_20->BlinkTimer, VAR_16 +
     FUNC_5(VAR_1));
  break;
 case 134:
  if (VAR_21->LinkDetectInfo.bBusyTraffic &&
      FUNC_2(VAR_21, VAR_13))
   break;
  if (VAR_20->bLedScanBlinkInProgress)
   break;
  if (FUNC_0(VAR_20))
   return;
  if (VAR_20->bLedNoLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedNoLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedBlinkInProgress = 0;
  }
  VAR_20->bLedScanBlinkInProgress = 1;
  VAR_20->CurrLedState = VAR_4;
  VAR_20->BlinkTimes = 24;
  if (VAR_20->bLedOn)
   VAR_20->BlinkingLedState = VAR_11;
  else
   VAR_20->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_20->BlinkTimer, VAR_16 +
     FUNC_5(VAR_5));
  break;
 case 128:
 case 135:
  if (VAR_20->bLedBlinkInProgress)
   break;
  if (VAR_20->CurrLedState == VAR_4 ||
      FUNC_0(VAR_20))
   return;
  if (VAR_20->bLedNoLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedNoLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedLinkBlinkInProgress = 0;
  }
  VAR_20->bLedBlinkInProgress = 1;
  VAR_20->CurrLedState = VAR_7;
  VAR_20->BlinkTimes = 2;
  if (VAR_20->bLedOn)
   VAR_20->BlinkingLedState = VAR_11;
  else
   VAR_20->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_20->BlinkTimer, VAR_16 +
     FUNC_5(VAR_0));
  break;
 case 132:
 case 131:
  if (VAR_20->bLedWPSBlinkInProgress)
   break;
  if (VAR_20->bLedNoLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedNoLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedBlinkInProgress = 0;
  }
  if (VAR_20->bLedScanBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedScanBlinkInProgress = 0;
  }
  VAR_20->bLedWPSBlinkInProgress = 1;
  VAR_20->CurrLedState = VAR_8;
  if (VAR_20->bLedOn)
   VAR_20->BlinkingLedState = VAR_11;
  else
   VAR_20->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_20->BlinkTimer, VAR_16 +
     FUNC_5(VAR_5));
  break;
 case 130:
  if (VAR_20->bLedNoLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedNoLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedBlinkInProgress = 0;
  }
  if (VAR_20->bLedScanBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedScanBlinkInProgress = 0;
  }
  if (VAR_20->bLedWPSBlinkInProgress)
   FUNC_3(&VAR_20->BlinkTimer);
  else
   VAR_20->bLedWPSBlinkInProgress = 1;
  VAR_20->CurrLedState = VAR_9;
  if (VAR_20->bLedOn) {
   VAR_20->BlinkingLedState = VAR_11;
   FUNC_4(&VAR_20->BlinkTimer, VAR_16 +
      FUNC_5(VAR_10));
  } else {
   VAR_20->BlinkingLedState = VAR_12;
   FUNC_4(&VAR_20->BlinkTimer,
      VAR_16 + FUNC_5(0));
  }
  break;
 case 129:
  if (VAR_20->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedWPSBlinkInProgress = 0;
  }
  VAR_20->bLedNoLinkBlinkInProgress = 1;
  VAR_20->CurrLedState = VAR_6;
  if (VAR_20->bLedOn)
   VAR_20->BlinkingLedState = VAR_11;
  else
   VAR_20->BlinkingLedState = VAR_12;
  FUNC_4(&VAR_20->BlinkTimer, VAR_16 +
     FUNC_5(VAR_3));
  break;
 case 137:
  VAR_20->CurrLedState = VAR_11;
  VAR_20->BlinkingLedState = VAR_11;
  if (VAR_20->bLedNoLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedNoLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedLinkBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedLinkBlinkInProgress = 0;
  }
  if (VAR_20->bLedBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedBlinkInProgress = 0;
  }
  if (VAR_20->bLedWPSBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedWPSBlinkInProgress = 0;
  }
  if (VAR_20->bLedScanBlinkInProgress) {
   FUNC_3(&VAR_20->BlinkTimer);
   VAR_20->bLedScanBlinkInProgress = 0;
  }
  FUNC_6(VAR_17, VAR_20);
  break;
 default:
  break;
 }

 FUNC_1(VAR_15, VAR_14,
   ("Led %d\n", VAR_20->CurrLedState));
}
