
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeepc_laptop {struct backlight_device* backlight_device; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int FUNC_0 (struct backlight_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct eeepc_laptop *VAR_1)
{
 struct backlight_device *VAR_2 = VAR_1->backlight_device;
 int VAR_3 = VAR_2->props.brightness;

 FUNC_0(VAR_2, VAR_0);

 return VAR_3;
}
