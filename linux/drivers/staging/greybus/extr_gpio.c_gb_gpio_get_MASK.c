
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct gpio_chip {int dummy; } ;
struct gb_gpio_controller {TYPE_1__* lines; } ;
struct TYPE_2__ {int value; } ;


 int FUNC_0 (struct gb_gpio_controller*,size_t) ;
 struct gb_gpio_controller* FUNC_1 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct gb_gpio_controller *VAR_2 = FUNC_1(VAR_0);
 u8 VAR_3;
 int VAR_4;

 VAR_3 = (u8)VAR_1;
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 return VAR_2->lines[VAR_3].value;
}
