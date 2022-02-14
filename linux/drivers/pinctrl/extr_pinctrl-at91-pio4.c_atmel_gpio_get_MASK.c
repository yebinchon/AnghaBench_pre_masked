
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct atmel_pioctrl {struct atmel_pin** pins; } ;
struct atmel_pin {int line; int bank; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct atmel_pioctrl*,int ,int ) ;
 struct atmel_pioctrl* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct atmel_pioctrl *VAR_3 = FUNC_2(VAR_1);
 struct atmel_pin *VAR_4 = VAR_3->pins[VAR_2];
 unsigned VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4->bank, VAR_0);

 return !!(VAR_5 & FUNC_0(VAR_4->line));
}
