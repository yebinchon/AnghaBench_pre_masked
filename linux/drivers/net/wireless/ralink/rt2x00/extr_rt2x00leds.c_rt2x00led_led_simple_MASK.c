
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int brightness; int (* brightness_set ) (TYPE_1__*,unsigned int) ;} ;
struct rt2x00_led {int flags; TYPE_1__ led_dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct rt2x00_led *VAR_3, bool VAR_4)
{
 unsigned int VAR_5 = VAR_4 ? VAR_0 : VAR_1;

 if (!(VAR_3->flags & VAR_2))
  return;

 VAR_3->led_dev.brightness_set(&VAR_3->led_dev, VAR_5);
 VAR_3->led_dev.brightness = VAR_5;
}
