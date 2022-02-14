
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w1_gpio_platform_data {int gpiod; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u8 FUNC_1(void *VAR_0)
{
 struct w1_gpio_platform_data *VAR_1 = VAR_0;

 return FUNC_0(VAR_1->gpiod) ? 1 : 0;
}
