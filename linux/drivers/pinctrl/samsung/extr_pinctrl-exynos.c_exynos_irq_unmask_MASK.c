
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank {unsigned long eint_offset; int slock; scalar_t__ eint_base; } ;
struct irq_data {int hwirq; } ;
struct irq_chip {int dummy; } ;
struct exynos_irq_chip {unsigned long eint_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*) ;
 struct irq_chip* FUNC_1 (struct irq_data*) ;
 struct samsung_pin_bank* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 unsigned long FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct exynos_irq_chip* FUNC_7 (struct irq_chip*) ;
 int FUNC_8 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_1)
{
 struct irq_chip *VAR_2 = FUNC_1(VAR_1);
 struct exynos_irq_chip *VAR_3 = FUNC_7(VAR_2);
 struct samsung_pin_bank *VAR_4 = FUNC_2(VAR_1);
 unsigned long VAR_5 = VAR_3->eint_mask + VAR_4->eint_offset;
 unsigned long VAR_6;
 unsigned long VAR_7;
 if (FUNC_3(VAR_1) & VAR_0)
  FUNC_0(VAR_1);

 FUNC_5(&VAR_4->slock, VAR_7);

 VAR_6 = FUNC_4(VAR_4->eint_base + VAR_5);
 VAR_6 &= ~(1 << VAR_1->hwirq);
 FUNC_8(VAR_6, VAR_4->eint_base + VAR_5);

 FUNC_6(&VAR_4->slock, VAR_7);
}
