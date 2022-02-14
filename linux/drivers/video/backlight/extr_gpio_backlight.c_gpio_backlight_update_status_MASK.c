
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_backlight {int gpiod; } ;
struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; int state; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct gpio_backlight* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_3)
{
 struct gpio_backlight *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = VAR_3->props.brightness;

 if (VAR_3->props.power != VAR_2 ||
     VAR_3->props.fb_blank != VAR_2 ||
     VAR_3->props.state & (VAR_1 | VAR_0))
  VAR_5 = 0;

 FUNC_1(VAR_4->gpiod, VAR_5);

 return 0;
}
