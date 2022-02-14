
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {scalar_t__ base; } ;
struct atlas7_gpio_chip {int lock; } ;


 int FUNC_0 (struct atlas7_gpio_chip*,unsigned int) ;
 int FUNC_1 (struct atlas7_gpio_chip*,unsigned int) ;
 struct atlas7_gpio_chip* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct gpio_chip *VAR_0,
    unsigned int VAR_1)
{
 struct atlas7_gpio_chip *VAR_2 = FUNC_2(VAR_0);
 unsigned long VAR_3;

 FUNC_4(&VAR_2->lock, VAR_3);

 FUNC_0(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_1);

 FUNC_5(&VAR_2->lock, VAR_3);

 FUNC_3(VAR_0->base + VAR_1);
}
