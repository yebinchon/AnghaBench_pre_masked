
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_vbus_mach_info {scalar_t__ gpio_vbus_inverted; int gpio_vbus; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct gpio_vbus_mach_info *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->gpio_vbus);
 if (VAR_0->gpio_vbus_inverted)
  VAR_1 = !VAR_1;

 return VAR_1;
}
