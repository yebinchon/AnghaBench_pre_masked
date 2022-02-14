
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ max_brightness; } ;
struct asus_wmi {scalar_t__ kbd_led_wk; int fnlock_locked; int inputdev; TYPE_3__* driver; scalar_t__ fan_boost_mode_available; TYPE_1__ kbd_led; } ;
struct TYPE_6__ {TYPE_2__* quirks; int (* key_filter ) (TYPE_3__*,int*,unsigned int*,int*) ;} ;
struct TYPE_5__ {scalar_t__ no_display_toggle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct asus_wmi*,int) ;
 int FUNC_2 (struct asus_wmi*) ;
 int FUNC_3 (struct asus_wmi*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct asus_wmi*,scalar_t__) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int,unsigned int,int) ;
 int FUNC_8 (TYPE_3__*,int*,unsigned int*,int*) ;

__attribute__((used)) static void FUNC_9(int VAR_13, struct asus_wmi *VAR_14)
{
 int VAR_15;
 unsigned int VAR_16 = 1;
 bool VAR_17 = 1;

 VAR_15 = VAR_13;

 if (VAR_14->driver->key_filter) {
  VAR_14->driver->key_filter(VAR_14->driver, &VAR_13, &VAR_16,
      &VAR_17);
  if (VAR_13 == VAR_2)
   return;
 }

 if (VAR_13 >= VAR_6 && VAR_13 <= VAR_5)
  VAR_13 = VAR_1;
 else if (VAR_13 >= VAR_4 && VAR_13 <= VAR_3)
  VAR_13 = VAR_0;

 if (VAR_13 == VAR_0 || VAR_13 == VAR_1) {
  if (FUNC_0() == VAR_12) {
   FUNC_1(VAR_14, VAR_15);
   return;
  }
 }

 if (VAR_13 == VAR_10) {
  FUNC_5(VAR_14, VAR_14->kbd_led_wk + 1);
  return;
 }
 if (VAR_13 == VAR_8) {
  FUNC_5(VAR_14, VAR_14->kbd_led_wk - 1);
  return;
 }
 if (VAR_13 == VAR_9) {
  if (VAR_14->kbd_led_wk == VAR_14->kbd_led.max_brightness)
   FUNC_5(VAR_14, 0);
  else
   FUNC_5(VAR_14, VAR_14->kbd_led_wk + 1);
  return;
 }

 if (VAR_13 == VAR_7) {
  VAR_14->fnlock_locked = !VAR_14->fnlock_locked;
  FUNC_2(VAR_14);
  return;
 }

 if (VAR_14->fan_boost_mode_available && VAR_13 == VAR_11) {
  FUNC_3(VAR_14);
  return;
 }

 if (FUNC_4(VAR_13) && VAR_14->driver->quirks->no_display_toggle)
  return;

 if (!FUNC_7(VAR_14->inputdev, VAR_13,
     VAR_16, VAR_17))
  FUNC_6("Unknown key %x pressed\n", VAR_13);
}
