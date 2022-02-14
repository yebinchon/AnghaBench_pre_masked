
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_priv {int SwLed1; int SwLed0; } ;
struct _adapter {struct led_priv ledpriv; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct _adapter *VAR_0)
{
 struct led_priv *VAR_1 = &VAR_0->ledpriv;

 FUNC_0(&VAR_1->SwLed0);
 FUNC_0(&VAR_1->SwLed1);
}
