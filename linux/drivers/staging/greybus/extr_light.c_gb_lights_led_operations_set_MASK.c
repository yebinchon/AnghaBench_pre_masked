
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int blink_set; int brightness_set_blocking; int brightness_get; } ;
struct gb_channel {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct gb_channel *VAR_4,
      struct led_classdev *VAR_5)
{
 VAR_5->brightness_get = VAR_2;
 VAR_5->brightness_set_blocking = VAR_3;

 if (VAR_4->flags & VAR_0)
  VAR_5->blink_set = VAR_1;
}
