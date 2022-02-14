
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6586x_irq_data {size_t mask_reg; int mask_mask; } ;
struct tps6586x {int irq_en; int * mask_reg; } ;
struct irq_data {unsigned int hwirq; } ;


 struct tps6586x* FUNC_0 (struct irq_data*) ;
 struct tps6586x_irq_data* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_1)
{
 struct tps6586x *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3 = VAR_1->hwirq;
 const struct tps6586x_irq_data *VAR_4 = &VAR_0[VAR_3];

 VAR_2->mask_reg[VAR_4->mask_reg] &= ~VAR_4->mask_mask;
 VAR_2->irq_en |= (1 << VAR_3);
}
