
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {int eint_offset; } ;
struct irq_data {int hwirq; int irq; } ;
struct irq_chip {int dummy; } ;
struct exynos_irq_chip {unsigned long eint_wake_mask_value; } ;


 struct irq_chip* FUNC_0 (struct irq_data*) ;
 struct samsung_pin_bank* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (char*,char*,int ) ;
 struct exynos_irq_chip* FUNC_3 (struct irq_chip*) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct irq_chip *VAR_2 = FUNC_0(VAR_0);
 struct exynos_irq_chip *VAR_3 = FUNC_3(VAR_2);
 struct samsung_pin_bank *VAR_4 = FUNC_1(VAR_0);
 unsigned long VAR_5 = 1UL << (2 * VAR_4->eint_offset + VAR_0->hwirq);

 FUNC_2("wake %s for irq %d\n", VAR_1 ? "enabled" : "disabled", VAR_0->irq);

 if (!VAR_1)
  VAR_3->eint_wake_mask_value |= VAR_5;
 else
  VAR_3->eint_wake_mask_value &= ~VAR_5;

 return 0;
}
