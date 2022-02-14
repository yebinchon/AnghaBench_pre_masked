
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct atlas7_gpio_chip {int dummy; } ;
struct atlas7_gpio_bank {size_t gpio_offset; size_t ngpio; int* gpio_pins; } ;


 int VAR_0 ;
 struct atlas7_gpio_bank* FUNC_0 (struct atlas7_gpio_chip*,size_t) ;

__attribute__((used)) static int FUNC_1(struct atlas7_gpio_chip *VAR_1, u32 VAR_2)
{
 struct atlas7_gpio_bank *VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_4 = VAR_2 - VAR_3->gpio_offset;
 if (VAR_4 >= VAR_3->ngpio)
  return -VAR_0;

 return VAR_3->gpio_pins[VAR_4];
}
