
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LED_871x {int bLedBlinkInProgress; int BlinkTimer; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct LED_871x *VAR_0)
{
 FUNC_0(&VAR_0->BlinkTimer);



 VAR_0->bLedBlinkInProgress = 0;
}
