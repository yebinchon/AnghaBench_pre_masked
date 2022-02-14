
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct _adapter {int dummy; } ;
struct LED_871x {scalar_t__ BlinkingLedState; int CurrLedState; int bLedBlinkInProgress; int BlinkTimer; int bLedOn; int BlinkTimes; struct _adapter* padapter; } ;


 int VAR_0 ;
 int VAR_1 ;

 void* VAR_2 ;
 scalar_t__ VAR_3 ;

 int FUNC_0 (struct _adapter*,struct LED_871x*) ;
 int FUNC_1 (struct _adapter*,struct LED_871x*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct LED_871x *VAR_5)
{
 struct _adapter *VAR_6 = VAR_5->padapter;
 u8 VAR_7 = 0;


 if (VAR_5->BlinkingLedState == VAR_3)
  FUNC_1(VAR_6, VAR_5);
 else
  FUNC_0(VAR_6, VAR_5);
 switch (VAR_5->CurrLedState) {
 case 128:
  VAR_5->BlinkTimes--;
  if (VAR_5->BlinkTimes == 0)
   VAR_7 = 1;
  if (VAR_7) {
   VAR_5->CurrLedState = VAR_3;
   VAR_5->BlinkingLedState = VAR_3;
   if (!VAR_5->bLedOn)
    FUNC_1(VAR_6, VAR_5);
   VAR_5->bLedBlinkInProgress = 0;
  } else {
   if (VAR_5->bLedOn)
    VAR_5->BlinkingLedState = VAR_2;
   else
    VAR_5->BlinkingLedState = VAR_3;
   FUNC_2(&VAR_5->BlinkTimer, VAR_4 +
      FUNC_3(VAR_0));
  }
  break;
 case 129:
  if (VAR_5->bLedOn)
   VAR_5->BlinkingLedState = VAR_2;
  else
   VAR_5->BlinkingLedState = VAR_3;
  FUNC_2(&VAR_5->BlinkTimer, VAR_4 +
     FUNC_3(VAR_1));
  break;

 default:
  break;
 }
}
