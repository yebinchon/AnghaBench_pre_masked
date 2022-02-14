
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct atmel_pioctrl {struct atmel_pin** pins; } ;
struct atmel_pin {int bank; int line; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct atmel_pioctrl*,int ,int ) ;
 int FUNC_2 (struct atmel_pioctrl*,int ,int ,unsigned int) ;
 struct atmel_pioctrl* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct atmel_pioctrl *VAR_5 = FUNC_3(VAR_3);
 struct atmel_pin *VAR_6 = VAR_5->pins[VAR_4];
 unsigned VAR_7;

 FUNC_2(VAR_5, VAR_6->bank, VAR_2,
    FUNC_0(VAR_6->line));
 VAR_7 = FUNC_1(VAR_5, VAR_6->bank, VAR_0);
 VAR_7 &= ~VAR_1;
 FUNC_2(VAR_5, VAR_6->bank, VAR_0, VAR_7);

 return 0;
}
