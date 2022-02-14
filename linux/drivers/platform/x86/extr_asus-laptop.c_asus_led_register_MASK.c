
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {char const* name; int max_brightness; int brightness_get; int brightness_set; } ;
struct asus_led {char const* method; int work; struct asus_laptop* asus; struct led_classdev led; } ;
struct asus_laptop {TYPE_1__* platform_device; int handle; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,char const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct led_classdev*) ;

__attribute__((used)) static int FUNC_3(struct asus_laptop *VAR_3,
        struct asus_led *VAR_4,
        const char *VAR_5, const char *VAR_6)
{
 struct led_classdev *VAR_7 = &VAR_4->led;

 if (!VAR_6 || FUNC_1(VAR_3->handle, VAR_6, ((void*)0)))
  return 0;

 VAR_4->asus = VAR_3;
 VAR_4->method = VAR_6;

 FUNC_0(&VAR_4->work, VAR_2);
 VAR_7->name = VAR_5;
 VAR_7->brightness_set = VAR_1;
 VAR_7->brightness_get = VAR_0;
 VAR_7->max_brightness = 1;
 return FUNC_2(&VAR_3->platform_device->dev, VAR_7);
}
