
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct led_classdev {int dummy; } ;
struct kbd_state {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct kbd_state*) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct kbd_state*,int) ;
 int FUNC_5 (struct kbd_state*,struct kbd_state*) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct led_classdev *VAR_4,
        enum led_brightness VAR_5)
{
 enum led_brightness VAR_6 = VAR_5;
 struct kbd_state VAR_7;
 struct kbd_state VAR_8;
 u16 VAR_9;
 int VAR_10;

 FUNC_7(&VAR_2);

 if (FUNC_1()) {
  VAR_10 = FUNC_2(&VAR_7);
  if (VAR_10)
   goto out;
  VAR_8 = VAR_7;
  VAR_10 = FUNC_4(&VAR_8, VAR_5);
  if (VAR_10)
   goto out;
  VAR_10 = FUNC_5(&VAR_8, &VAR_7);
 } else if (FUNC_3()) {
  for (VAR_9 = VAR_3; VAR_9 != 0 && VAR_5 > 0; --VAR_5)
   VAR_9 &= VAR_9 - 1;
  if (VAR_9 == 0)
   VAR_10 = 0;
  else
   VAR_10 = FUNC_6(FUNC_0(VAR_9) - 1);
 } else {
  FUNC_9("Keyboard brightness level control not supported\n");
  VAR_10 = -VAR_0;
 }

out:
 if (VAR_10 == 0)
  VAR_1 = VAR_6;

 FUNC_8(&VAR_2);
 return VAR_10;
}
