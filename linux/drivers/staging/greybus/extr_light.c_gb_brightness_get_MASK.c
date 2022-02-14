
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {int dummy; } ;
struct gb_channel {TYPE_1__* led; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int brightness; } ;


 struct gb_channel* FUNC_0 (struct led_classdev*) ;

__attribute__((used)) static enum led_brightness FUNC_1(struct led_classdev *VAR_0)

{
 struct gb_channel *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->led->brightness;
}
