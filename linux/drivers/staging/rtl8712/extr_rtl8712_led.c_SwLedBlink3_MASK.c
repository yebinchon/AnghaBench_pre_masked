
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_priv {int dummy; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;
struct LED_871x {scalar_t__ BlinkingLedState; int CurrLedState; int bLedScanBlinkInProgress; int bLedBlinkInProgress; int bLedWPSBlinkInProgress; int BlinkTimer; int bLedOn; int BlinkTimes; struct _adapter* padapter; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 void* VAR_3 ;
 scalar_t__ VAR_4 ;

 int FUNC_0 (struct _adapter*,struct LED_871x*) ;
 int FUNC_1 (struct _adapter*,struct LED_871x*) ;
 int VAR_5 ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct LED_871x *VAR_7)
{
 struct _adapter *VAR_8 = VAR_7->padapter;
 struct mlme_priv *VAR_9 = &VAR_8->mlmepriv;
 u8 VAR_10 = 0;


 if (VAR_7->BlinkingLedState == VAR_4)
  FUNC_1(VAR_8, VAR_7);
 else
  if (VAR_7->CurrLedState != 130)
   FUNC_0(VAR_8, VAR_7);
 switch (VAR_7->CurrLedState) {
 case 129:
  VAR_7->BlinkTimes--;
  if (VAR_7->BlinkTimes == 0)
   VAR_10 = 1;
  if (VAR_10) {
   if (FUNC_2(VAR_9, VAR_5)) {
    VAR_7->CurrLedState = VAR_4;
    VAR_7->BlinkingLedState = VAR_4;
    if (!VAR_7->bLedOn)
     FUNC_1(VAR_8, VAR_7);
   } else if (!FUNC_2(VAR_9, VAR_5)) {
    VAR_7->CurrLedState = VAR_3;
    VAR_7->BlinkingLedState = VAR_3;
    if (VAR_7->bLedOn)
     FUNC_0(VAR_8, VAR_7);
   }
   VAR_7->bLedScanBlinkInProgress = 0;
  } else {
   if (VAR_7->bLedOn)
    VAR_7->BlinkingLedState = VAR_3;
   else
    VAR_7->BlinkingLedState = VAR_4;
   FUNC_3(&VAR_7->BlinkTimer, VAR_6 +
      FUNC_4(VAR_1));
  }
  break;
 case 128:
  VAR_7->BlinkTimes--;
  if (VAR_7->BlinkTimes == 0)
   VAR_10 = 1;
  if (VAR_10) {
   if (FUNC_2(VAR_9, VAR_5)) {
    VAR_7->CurrLedState = VAR_4;
    VAR_7->BlinkingLedState = VAR_4;
    if (!VAR_7->bLedOn)
     FUNC_1(VAR_8, VAR_7);
   } else if (!FUNC_2(VAR_9, VAR_5)) {
    VAR_7->CurrLedState = VAR_3;
    VAR_7->BlinkingLedState = VAR_3;
    if (VAR_7->bLedOn)
     FUNC_0(VAR_8, VAR_7);
   }
   VAR_7->bLedBlinkInProgress = 0;
  } else {
   if (VAR_7->bLedOn)
    VAR_7->BlinkingLedState = VAR_3;
   else
    VAR_7->BlinkingLedState = VAR_4;
   FUNC_3(&VAR_7->BlinkTimer, VAR_6 +
      FUNC_4(VAR_0));
  }
  break;
 case 131:
  if (VAR_7->bLedOn)
   VAR_7->BlinkingLedState = VAR_3;
  else
   VAR_7->BlinkingLedState = VAR_4;
  FUNC_3(&VAR_7->BlinkTimer, VAR_6 +
     FUNC_4(VAR_1));
  break;
 case 130:
  if (VAR_7->BlinkingLedState == VAR_4) {
   VAR_7->BlinkingLedState = VAR_3;
   FUNC_3(&VAR_7->BlinkTimer, VAR_6 +
      FUNC_4(VAR_2));
   VAR_10 = 0;
  } else {
   VAR_10 = 1;
  }
  if (VAR_10) {
   VAR_7->CurrLedState = VAR_4;
   VAR_7->BlinkingLedState = VAR_4;
   FUNC_1(VAR_8, VAR_7);
   VAR_7->bLedWPSBlinkInProgress = 0;
  }
  break;
 default:
  break;
 }
}
