
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct atmel_pioctrl {struct atmel_pin** pins; } ;
struct atmel_pin {int bank; int line; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct atmel_pioctrl*,int ,int ) ;
 int FUNC_2 (struct atmel_pioctrl*,int ,int ,unsigned int) ;
 struct atmel_pioctrl* FUNC_3 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_5, unsigned VAR_6,
           int VAR_7)
{
 struct atmel_pioctrl *VAR_8 = FUNC_3(VAR_5);
 struct atmel_pin *VAR_9 = VAR_8->pins[VAR_6];
 unsigned VAR_10;

 FUNC_2(VAR_8, VAR_9->bank,
    VAR_7 ? VAR_4 : VAR_1,
    FUNC_0(VAR_9->line));

 FUNC_2(VAR_8, VAR_9->bank, VAR_3,
    FUNC_0(VAR_9->line));
 VAR_10 = FUNC_1(VAR_8, VAR_9->bank, VAR_0);
 VAR_10 |= VAR_2;
 FUNC_2(VAR_8, VAR_9->bank, VAR_0, VAR_10);

 return 0;
}
