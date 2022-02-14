
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {unsigned int hwirq; } ;
struct iproc_gpio {scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 struct iproc_gpio* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_4(VAR_1);
 struct iproc_gpio *VAR_3 = FUNC_3(VAR_2);
 unsigned VAR_4 = VAR_1->hwirq;
 unsigned int VAR_5 = FUNC_1(VAR_4,
   VAR_0);
 unsigned int VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7 = FUNC_0(VAR_6);

 FUNC_5(VAR_7, VAR_3->base + VAR_5);
}
