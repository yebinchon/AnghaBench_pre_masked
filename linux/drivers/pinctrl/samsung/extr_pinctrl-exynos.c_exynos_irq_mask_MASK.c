
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {unsigned long eint_offset; int slock; scalar_t__ eint_base; } ;
struct irq_data {int hwirq; } ;
struct irq_chip {int dummy; } ;
struct exynos_irq_chip {unsigned long eint_mask; } ;


 struct irq_chip* FUNC_0 (struct irq_data*) ;
 struct samsung_pin_bank* FUNC_1 (struct irq_data*) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct exynos_irq_chip* FUNC_5 (struct irq_chip*) ;
 int FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_0(VAR_0);
 struct exynos_irq_chip *VAR_2 = FUNC_5(VAR_1);
 struct samsung_pin_bank *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4 = VAR_2->eint_mask + VAR_3->eint_offset;
 unsigned long VAR_5;
 unsigned long VAR_6;

 FUNC_3(&VAR_3->slock, VAR_6);

 VAR_5 = FUNC_2(VAR_3->eint_base + VAR_4);
 VAR_5 |= 1 << VAR_0->hwirq;
 FUNC_6(VAR_5, VAR_3->eint_base + VAR_4);

 FUNC_4(&VAR_3->slock, VAR_6);
}
