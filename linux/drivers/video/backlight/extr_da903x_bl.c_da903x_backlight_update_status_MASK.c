
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; int state; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct backlight_device*,int) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_2)
{
 int VAR_3 = VAR_2->props.brightness;

 if (VAR_2->props.power != VAR_1)
  VAR_3 = 0;

 if (VAR_2->props.fb_blank != VAR_1)
  VAR_3 = 0;

 if (VAR_2->props.state & VAR_0)
  VAR_3 = 0;

 return FUNC_0(VAR_2, VAR_3);
}
