
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gpio; scalar_t__ active_low; } ;
struct brcms_info {TYPE_1__ radio_led; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct brcms_info *VAR_0, bool VAR_1)
{
 if (VAR_0->radio_led.gpio == -1)
  return;

 if (VAR_0->radio_led.active_low)
  VAR_1 = !VAR_1;

 if (VAR_1)
  FUNC_0(VAR_0->radio_led.gpio, 1);
 else
  FUNC_0(VAR_0->radio_led.gpio, 0);
}
