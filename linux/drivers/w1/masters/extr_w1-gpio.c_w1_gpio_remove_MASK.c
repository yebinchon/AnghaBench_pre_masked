
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_gpio_platform_data {scalar_t__ pullup_gpiod; int (* enable_external_pullup ) (int ) ;} ;
struct w1_bus_master {int dummy; } ;
struct platform_device {int dev; } ;


 struct w1_gpio_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct w1_bus_master* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct w1_bus_master*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct w1_bus_master *VAR_1 = FUNC_2(VAR_0);
 struct w1_gpio_platform_data *VAR_2 = FUNC_0(&VAR_0->dev);

 if (VAR_2->enable_external_pullup)
  VAR_2->enable_external_pullup(0);

 if (VAR_2->pullup_gpiod)
  FUNC_1(VAR_2->pullup_gpiod, 0);

 FUNC_4(VAR_1);

 return 0;
}
