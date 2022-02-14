
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _adapter {int dummy; } ;
struct LED_871x {int LedPin; int bLedOn; int bLedBlinkInProgress; int BlinkWorkItem; int BlinkTimer; int BlinkingLedState; scalar_t__ BlinkTimes; int CurrLedState; struct _adapter* padapter; } ;
typedef enum LED_PIN_871x { ____Placeholder_LED_PIN_871x } LED_PIN_871x ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct _adapter *VAR_4, struct LED_871x *VAR_5,
   enum LED_PIN_871x VAR_6)
{
 VAR_5->padapter = VAR_4;
 VAR_5->LedPin = VAR_6;
 VAR_5->CurrLedState = VAR_2;
 VAR_5->bLedOn = 0;
 VAR_5->bLedBlinkInProgress = 0;
 VAR_5->BlinkTimes = 0;
 VAR_5->BlinkingLedState = VAR_3;
 FUNC_1(&VAR_5->BlinkTimer, VAR_0, 0);
 FUNC_0(&VAR_5->BlinkWorkItem, VAR_1);
}
