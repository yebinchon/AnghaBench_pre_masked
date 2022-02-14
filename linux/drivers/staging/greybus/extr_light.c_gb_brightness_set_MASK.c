
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {int dummy; } ;
struct gb_channel {TYPE_1__* led; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int brightness; } ;


 int FUNC_0 (struct gb_channel*) ;
 struct gb_channel* FUNC_1 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_2(struct led_classdev *VAR_0,
        enum led_brightness VAR_1)
{
 struct gb_channel *VAR_2 = FUNC_1(VAR_0);

 VAR_2->led->brightness = VAR_1;

 return FUNC_0(VAR_2);
}
