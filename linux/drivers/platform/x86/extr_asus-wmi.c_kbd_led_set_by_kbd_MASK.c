
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct asus_wmi {int kbd_led_wk; struct led_classdev kbd_led; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int FUNC_0 (struct led_classdev*,int) ;
 int FUNC_1 (struct led_classdev*,int ) ;

__attribute__((used)) static void FUNC_2(struct asus_wmi *VAR_0, enum led_brightness VAR_1)
{
 struct led_classdev *VAR_2 = &VAR_0->kbd_led;

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_0->kbd_led_wk);
}
