
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_priv {int sw_led; } ;
struct adapter {struct led_priv ledpriv; } ;


 int FUNC_0 (struct adapter*,int *) ;

void FUNC_1(struct adapter *VAR_0)
{
 struct led_priv *VAR_1 = &VAR_0->ledpriv;

 FUNC_0(VAR_0, &VAR_1->sw_led);
}
