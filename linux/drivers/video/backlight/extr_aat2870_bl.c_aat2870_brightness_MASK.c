
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct aat2870_bl_driver_data {int max_current; struct backlight_device* bd; } ;



__attribute__((used)) static inline int FUNC_0(struct aat2870_bl_driver_data *VAR_0,
         int VAR_1)
{
 struct backlight_device *VAR_2 = VAR_0->bd;
 int VAR_3;

 VAR_3 = VAR_1 * (VAR_0->max_current - 1);
 VAR_3 /= VAR_2->props.max_brightness;

 return VAR_3;
}
