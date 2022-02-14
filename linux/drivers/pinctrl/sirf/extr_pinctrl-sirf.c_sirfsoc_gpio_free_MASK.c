
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_gpio_chip {int dummy; } ;
struct sirfsoc_gpio_bank {int lock; int id; } ;
struct gpio_chip {unsigned int base; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct sirfsoc_gpio_chip*,struct sirfsoc_gpio_bank*,unsigned int) ;
 struct sirfsoc_gpio_chip* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct sirfsoc_gpio_chip*,int ) ;
 struct sirfsoc_gpio_bank* FUNC_5 (struct sirfsoc_gpio_chip*,unsigned int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct sirfsoc_gpio_chip *VAR_2 = FUNC_2(VAR_0);
 struct sirfsoc_gpio_bank *VAR_3 = FUNC_5(VAR_2, VAR_1);
 unsigned long VAR_4;

 FUNC_6(&VAR_3->lock, VAR_4);

 FUNC_1(VAR_2, VAR_3, VAR_1);
 FUNC_4(VAR_2, FUNC_0(VAR_3->id, VAR_1));

 FUNC_7(&VAR_3->lock, VAR_4);

 FUNC_3(VAR_0->base + VAR_1);
}
