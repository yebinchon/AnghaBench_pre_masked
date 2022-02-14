
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct samsung_laptop {TYPE_1__* config; } ;
struct sabi_commands {int set_backlight; } ;
struct TYPE_4__ {scalar_t__ power; int brightness; } ;
struct backlight_device {TYPE_2__ props; } ;
struct TYPE_3__ {struct sabi_commands commands; } ;


 scalar_t__ VAR_0 ;
 struct samsung_laptop* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct samsung_laptop*,int ,int) ;
 int FUNC_2 (struct samsung_laptop*,int ) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_1)
{
 struct samsung_laptop *VAR_2 = FUNC_0(VAR_1);
 const struct sabi_commands *VAR_3 = &VAR_2->config->commands;

 FUNC_2(VAR_2, VAR_1->props.brightness);

 if (VAR_1->props.power == VAR_0)
  FUNC_1(VAR_2, VAR_3->set_backlight, 1);
 else
  FUNC_1(VAR_2, VAR_3->set_backlight, 0);

 return 0;
}
