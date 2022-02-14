
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long max_brightness; unsigned long brightness; } ;
struct backlight_device {int ops_lock; TYPE_1__ props; scalar_t__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct backlight_device*,int ) ;
 int FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,unsigned long) ;

int FUNC_5(struct backlight_device *VAR_3,
        unsigned long VAR_4)
{
 int VAR_5 = -VAR_2;

 FUNC_2(&VAR_3->ops_lock);
 if (VAR_3->ops) {
  if (VAR_4 > VAR_3->props.max_brightness)
   VAR_5 = -VAR_1;
  else {
   FUNC_4("set brightness to %lu\n", VAR_4);
   VAR_3->props.brightness = VAR_4;
   VAR_5 = FUNC_1(VAR_3);
  }
 }
 FUNC_3(&VAR_3->ops_lock);

 FUNC_0(VAR_3, VAR_0);

 return VAR_5;
}
