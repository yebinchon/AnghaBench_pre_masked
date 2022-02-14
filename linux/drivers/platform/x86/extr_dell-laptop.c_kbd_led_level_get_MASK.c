
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct led_classdev {int dummy; } ;
struct kbd_state {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kbd_state*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct kbd_state*) ;
 scalar_t__ FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static enum led_brightness FUNC_7(struct led_classdev *VAR_1)
{
 int VAR_2;
 u16 VAR_3;
 struct kbd_state VAR_4;

 if (FUNC_3()) {
  VAR_2 = FUNC_4(&VAR_4);
  if (VAR_2)
   return 0;
  VAR_2 = FUNC_2(&VAR_4);
  if (VAR_2 < 0)
   return 0;
  return VAR_2;
 }

 if (FUNC_5()) {
  VAR_2 = FUNC_1();
  if (VAR_2 < 0)
   return 0;
  for (VAR_3 = VAR_0; VAR_3 != 0 && VAR_2 > 0; --VAR_2)
   VAR_3 &= VAR_3 - 1;
  if (VAR_3 == 0)
   return 0;
  return FUNC_0(VAR_3) - 1;
 }

 FUNC_6("Keyboard brightness level control not supported\n");
 return 0;
}
