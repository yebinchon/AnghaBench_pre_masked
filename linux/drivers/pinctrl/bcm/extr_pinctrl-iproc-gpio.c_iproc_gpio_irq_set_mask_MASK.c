
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int hwirq; } ;
struct iproc_gpio {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct iproc_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct iproc_gpio*,int ,unsigned int,int) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1, bool VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_2(VAR_1);
 struct iproc_gpio *VAR_4 = FUNC_0(VAR_3);
 unsigned VAR_5 = VAR_1->hwirq;

 FUNC_1(VAR_4, VAR_0, VAR_5, VAR_2);
}
