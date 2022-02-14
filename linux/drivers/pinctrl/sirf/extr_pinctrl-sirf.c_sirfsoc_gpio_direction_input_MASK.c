
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_gpio_chip {int dummy; } ;
struct sirfsoc_gpio_bank {int lock; int id; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (int ,int) ;
 struct sirfsoc_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct sirfsoc_gpio_chip*,unsigned int) ;
 struct sirfsoc_gpio_bank* FUNC_3 (struct sirfsoc_gpio_chip*,unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct sirfsoc_gpio_chip *VAR_2 = FUNC_1(VAR_0);
 struct sirfsoc_gpio_bank *VAR_3 = FUNC_3(VAR_2, VAR_1);
 int VAR_4 = FUNC_4(VAR_1);
 unsigned long VAR_5;
 unsigned VAR_6;

 VAR_6 = FUNC_0(VAR_3->id, VAR_4);

 FUNC_5(&VAR_3->lock, VAR_5);

 FUNC_2(VAR_2, VAR_6);

 FUNC_6(&VAR_3->lock, VAR_5);

 return 0;
}
