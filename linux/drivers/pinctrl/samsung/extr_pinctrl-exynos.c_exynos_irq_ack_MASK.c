
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {unsigned long eint_offset; scalar_t__ eint_base; } ;
struct irq_data {int hwirq; } ;
struct irq_chip {int dummy; } ;
struct exynos_irq_chip {unsigned long eint_pend; } ;


 struct irq_chip* FUNC_0 (struct irq_data*) ;
 struct samsung_pin_bank* FUNC_1 (struct irq_data*) ;
 struct exynos_irq_chip* FUNC_2 (struct irq_chip*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_0(VAR_0);
 struct exynos_irq_chip *VAR_2 = FUNC_2(VAR_1);
 struct samsung_pin_bank *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4 = VAR_2->eint_pend + VAR_3->eint_offset;

 FUNC_3(1 << VAR_0->hwirq, VAR_3->eint_base + VAR_4);
}
