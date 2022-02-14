
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_pinctrl {int lock; int irq; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 struct msm_pinctrl* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_1(VAR_0);
 struct msm_pinctrl *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;

 FUNC_3(&VAR_3->lock, VAR_4);

 FUNC_2(VAR_3->irq, VAR_1);

 FUNC_4(&VAR_3->lock, VAR_4);

 return 0;
}
