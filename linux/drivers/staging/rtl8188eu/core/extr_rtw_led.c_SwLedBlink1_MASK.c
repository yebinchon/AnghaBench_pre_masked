
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlme_priv {int dummy; } ;
struct TYPE_2__ {scalar_t__ rf_pwrstate; } ;
struct adapter {TYPE_1__ pwrctrlpriv; struct mlme_priv mlmepriv; } ;
struct LED_871x {scalar_t__ BlinkingLedState; int CurrLedState; int bLedLinkBlinkInProgress; int bLedNoLinkBlinkInProgress; int bLedScanBlinkInProgress; int bLedBlinkInProgress; int bLedWPSBlinkInProgress; int BlinkTimer; int bLedOn; int BlinkTimes; struct adapter* padapter; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;




 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct LED_871x*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (struct adapter*,struct LED_871x*) ;
 int FUNC_6 (struct adapter*,struct LED_871x*) ;

__attribute__((used)) static void FUNC_7(struct LED_871x *VAR_12)
{
 struct adapter *VAR_13 = VAR_12->padapter;
 struct mlme_priv *VAR_14 = &VAR_13->mlmepriv;
 u8 VAR_15 = 0;


 if (VAR_12->BlinkingLedState == VAR_6) {
  FUNC_6(VAR_13, VAR_12);
  FUNC_0(VAR_9, VAR_8,
    ("Blinktimes (%d): turn on\n", VAR_12->BlinkTimes));
 } else {
  FUNC_5(VAR_13, VAR_12);
  FUNC_0(VAR_9, VAR_8,
    ("Blinktimes (%d): turn off\n", VAR_12->BlinkTimes));
 }

 if (VAR_13->pwrctrlpriv.rf_pwrstate != VAR_11) {
  FUNC_5(VAR_13, VAR_12);
  FUNC_1(VAR_12);
  return;
 }

 switch (VAR_12->CurrLedState) {
 case 131:
  if (VAR_12->bLedOn)
   VAR_12->BlinkingLedState = VAR_5;
  else
   VAR_12->BlinkingLedState = VAR_6;
  FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
     FUNC_4(VAR_2));
  break;
 case 133:
  if (VAR_12->bLedOn)
   VAR_12->BlinkingLedState = VAR_5;
  else
   VAR_12->BlinkingLedState = VAR_6;
  FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
     FUNC_4(VAR_1));
  break;
 case 132:
  VAR_12->BlinkTimes--;
  if (VAR_12->BlinkTimes == 0)
   VAR_15 = 1;
  if (VAR_15) {
   if (FUNC_2(VAR_14, VAR_7)) {
    VAR_12->bLedLinkBlinkInProgress = 1;
    VAR_12->CurrLedState = 133;
    if (VAR_12->bLedOn)
     VAR_12->BlinkingLedState = VAR_5;
    else
     VAR_12->BlinkingLedState = VAR_6;
    FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
       FUNC_4(VAR_1));
    FUNC_0(VAR_9, VAR_8, ("CurrLedState %d\n", VAR_12->CurrLedState));
   } else if (!FUNC_2(VAR_14, VAR_7)) {
    VAR_12->bLedNoLinkBlinkInProgress = 1;
    VAR_12->CurrLedState = 131;
    if (VAR_12->bLedOn)
     VAR_12->BlinkingLedState = VAR_5;
    else
     VAR_12->BlinkingLedState = VAR_6;
    FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
       FUNC_4(VAR_2));
    FUNC_0(VAR_9, VAR_8, ("CurrLedState %d\n", VAR_12->CurrLedState));
   }
   VAR_12->bLedScanBlinkInProgress = 0;
  } else {
   if (VAR_12->bLedOn)
    VAR_12->BlinkingLedState = VAR_5;
   else
    VAR_12->BlinkingLedState = VAR_6;
   FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
      FUNC_4(VAR_3));
  }
  break;
 case 130:
  VAR_12->BlinkTimes--;
  if (VAR_12->BlinkTimes == 0)
   VAR_15 = 1;
  if (VAR_15) {
   if (FUNC_2(VAR_14, VAR_7)) {
    VAR_12->bLedLinkBlinkInProgress = 1;
    VAR_12->CurrLedState = 133;
    if (VAR_12->bLedOn)
     VAR_12->BlinkingLedState = VAR_5;
    else
     VAR_12->BlinkingLedState = VAR_6;
    FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
       FUNC_4(VAR_1));
    FUNC_0(VAR_9, VAR_8, ("CurrLedState %d\n", VAR_12->CurrLedState));
   } else if (!FUNC_2(VAR_14, VAR_7)) {
    VAR_12->bLedNoLinkBlinkInProgress = 1;
    VAR_12->CurrLedState = 131;
    if (VAR_12->bLedOn)
     VAR_12->BlinkingLedState = VAR_5;
    else
     VAR_12->BlinkingLedState = VAR_6;
    FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
       FUNC_4(VAR_2));
    FUNC_0(VAR_9, VAR_8, ("CurrLedState %d\n", VAR_12->CurrLedState));
   }
   VAR_12->BlinkTimes = 0;
   VAR_12->bLedBlinkInProgress = 0;
  } else {
   if (VAR_12->bLedOn)
    VAR_12->BlinkingLedState = VAR_5;
   else
    VAR_12->BlinkingLedState = VAR_6;
   FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
      FUNC_4(VAR_0));
  }
  break;
 case 129:
  if (VAR_12->bLedOn)
   VAR_12->BlinkingLedState = VAR_5;
  else
   VAR_12->BlinkingLedState = VAR_6;
  FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
     FUNC_4(VAR_3));
  break;
 case 128:
  if (VAR_12->BlinkingLedState == VAR_6)
   VAR_15 = 0;
  else
   VAR_15 = 1;

  if (VAR_15) {
   VAR_12->bLedLinkBlinkInProgress = 1;
   VAR_12->CurrLedState = 133;
   if (VAR_12->bLedOn)
    VAR_12->BlinkingLedState = VAR_5;
   else
    VAR_12->BlinkingLedState = VAR_6;
   FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
      FUNC_4(VAR_1));
   FUNC_0(VAR_9, VAR_8, ("CurrLedState %d\n", VAR_12->CurrLedState));

   VAR_12->bLedWPSBlinkInProgress = 0;
  } else {
   VAR_12->BlinkingLedState = VAR_5;
   FUNC_3(&VAR_12->BlinkTimer, VAR_10 +
      FUNC_4(VAR_4));
  }
  break;
 default:
  break;
 }
}
