
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc5t583_irq_data {size_t grp_index; int master_bit; size_t mask_reg_index; int int_en_bit; } ;
struct rc5t583 {unsigned int irq_base; int* group_irq_en; int intc_inten_reg; int* irq_en_reg; } ;
struct irq_data {unsigned int irq; } ;


 struct rc5t583* FUNC_0 (struct irq_data*) ;
 struct rc5t583_irq_data* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_1)
{
 struct rc5t583 *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3 = VAR_1->irq - VAR_2->irq_base;
 const struct rc5t583_irq_data *VAR_4 = &VAR_0[VAR_3];

 VAR_2->group_irq_en[VAR_4->grp_index] |= 1 << VAR_4->grp_index;
 VAR_2->intc_inten_reg |= 1 << VAR_4->master_bit;
 VAR_2->irq_en_reg[VAR_4->mask_reg_index] |= 1 << VAR_4->int_en_bit;
}
