
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int FUNC_0 () ;

__attribute__((used)) static enum led_brightness FUNC_1(struct led_classdev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 < 0)
  return 0;

 return VAR_1;
}
