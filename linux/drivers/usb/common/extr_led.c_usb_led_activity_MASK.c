
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_trigger {int dummy; } ;
typedef enum usb_led_event { ____Placeholder_usb_led_event } usb_led_event ;




 int FUNC_0 (struct led_trigger*,int *,int *,int ) ;
 struct led_trigger* VAR_0 ;
 struct led_trigger* VAR_1 ;
 int VAR_2 ;

void FUNC_1(enum usb_led_event VAR_3)
{
 struct led_trigger *VAR_4 = ((void*)0);

 switch (VAR_3) {
 case 129:
  VAR_4 = VAR_0;
  break;
 case 128:
  VAR_4 = VAR_1;
  break;
 }

 FUNC_0(VAR_4, &VAR_2, &VAR_2, 0);
}
