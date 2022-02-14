
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct atmel_pioctrl {struct atmel_pin** pins; } ;
struct atmel_pin {int line; int bank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct atmel_pioctrl*,int ,int ,int ) ;
 struct atmel_pioctrl* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_2, unsigned VAR_3, int VAR_4)
{
 struct atmel_pioctrl *VAR_5 = FUNC_2(VAR_2);
 struct atmel_pin *VAR_6 = VAR_5->pins[VAR_3];

 FUNC_1(VAR_5, VAR_6->bank,
    VAR_4 ? VAR_1 : VAR_0,
    FUNC_0(VAR_6->line));
}
