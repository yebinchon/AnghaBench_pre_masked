
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct iproc_gpio {int lock; } ;
struct gpio_chip {int dummy; } ;


 struct iproc_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct irq_data*,int) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct iproc_gpio *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3;

 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_1(VAR_0, 1);
 FUNC_4(&VAR_2->lock, VAR_3);
}
