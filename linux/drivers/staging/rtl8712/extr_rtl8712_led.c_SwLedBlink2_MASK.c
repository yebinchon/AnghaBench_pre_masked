
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlme_priv {int dummy; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;
struct LED_871x {scalar_t__ BlinkingLedState; int CurrLedState; int bLedScanBlinkInProgress; int bLedBlinkInProgress; int BlinkTimer; int bLedOn; int BlinkTimes; struct _adapter* padapter; } ;


 int VAR_0 ;
 int VAR_1 ;

 void* VAR_2 ;
 scalar_t__ VAR_3 ;

 int FUNC_0 (struct _adapter*,struct LED_871x*) ;
 int FUNC_1 (struct _adapter*,struct LED_871x*) ;
 int VAR_4 ;
 int FUNC_2 (struct mlme_priv*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct LED_871x *VAR_6)
{
 struct _adapter *VAR_7 = VAR_6->padapter;
 struct mlme_priv *VAR_8 = &VAR_7->mlmepriv;
 u8 VAR_9 = 0;


 if (VAR_6->BlinkingLedState == VAR_3)
  FUNC_1(VAR_7, VAR_6);
 else
  FUNC_0(VAR_7, VAR_6);
 switch (VAR_6->CurrLedState) {
 case 129:
  VAR_6->BlinkTimes--;
  if (VAR_6->BlinkTimes == 0)
   VAR_9 = 1;
  if (VAR_9) {
   if (FUNC_2(VAR_8, VAR_4)) {
    VAR_6->CurrLedState = VAR_3;
    VAR_6->BlinkingLedState = VAR_3;
    FUNC_1(VAR_7, VAR_6);
   } else if (!FUNC_2(VAR_8, VAR_4)) {
    VAR_6->CurrLedState = VAR_2;
    VAR_6->BlinkingLedState = VAR_2;
    FUNC_0(VAR_7, VAR_6);
   }
   VAR_6->bLedScanBlinkInProgress = 0;
  } else {
   if (VAR_6->bLedOn)
    VAR_6->BlinkingLedState = VAR_2;
   else
    VAR_6->BlinkingLedState = VAR_3;
   FUNC_3(&VAR_6->BlinkTimer, VAR_5 +
      FUNC_4(VAR_1));
  }
  break;
 case 128:
  VAR_6->BlinkTimes--;
  if (VAR_6->BlinkTimes == 0)
   VAR_9 = 1;
  if (VAR_9) {
   if (FUNC_2(VAR_8, VAR_4)) {
    VAR_6->CurrLedState = VAR_3;
    VAR_6->BlinkingLedState = VAR_3;
    FUNC_1(VAR_7, VAR_6);
   } else if (!FUNC_2(VAR_8, VAR_4)) {
    VAR_6->CurrLedState = VAR_2;
    VAR_6->BlinkingLedState = VAR_2;
    FUNC_0(VAR_7, VAR_6);
   }
   VAR_6->bLedBlinkInProgress = 0;
  } else {
   if (VAR_6->bLedOn)
    VAR_6->BlinkingLedState = VAR_2;
   else
    VAR_6->BlinkingLedState = VAR_3;
   FUNC_3(&VAR_6->BlinkTimer, VAR_5 +
      FUNC_4(VAR_0));
  }
  break;
 default:
  break;
 }
}
