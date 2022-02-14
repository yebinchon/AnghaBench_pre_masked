
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_priv {int SwLed1; int SwLed0; int LedControlHandler; } ;
struct _adapter {struct led_priv ledpriv; } ;


 int FUNC_0 (struct _adapter*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct _adapter *VAR_3)
{
 struct led_priv *VAR_4 = &VAR_3->ledpriv;

 VAR_4->LedControlHandler = VAR_2;
 FUNC_0(VAR_3, &VAR_4->SwLed0, VAR_0);
 FUNC_0(VAR_3, &VAR_4->SwLed1, VAR_1);
}
