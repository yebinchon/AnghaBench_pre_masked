
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pin_bank_type {unsigned long* reg_offset; unsigned int* fld_width; } ;
struct samsung_pin_bank {unsigned long pctl_offset; int gpio_chip; int slock; scalar_t__ pctl_base; struct samsung_pin_bank_type* type; } ;
struct irq_data {unsigned int hwirq; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,unsigned int) ;
 struct samsung_pin_bank* FUNC_1 (struct irq_data*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2)
{
 struct samsung_pin_bank *VAR_3 = FUNC_1(VAR_2);
 const struct samsung_pin_bank_type *VAR_4 = VAR_3->type;
 unsigned long VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;

 VAR_5 = VAR_3->pctl_offset + VAR_4->reg_offset[VAR_1];
 VAR_7 = VAR_2->hwirq * VAR_4->fld_width[VAR_1];
 VAR_8 = (1 << VAR_4->fld_width[VAR_1]) - 1;

 FUNC_3(&VAR_3->slock, VAR_6);

 VAR_9 = FUNC_2(VAR_3->pctl_base + VAR_5);
 VAR_9 &= ~(VAR_8 << VAR_7);
 VAR_9 |= VAR_0 << VAR_7;
 FUNC_5(VAR_9, VAR_3->pctl_base + VAR_5);

 FUNC_4(&VAR_3->slock, VAR_6);

 FUNC_0(&VAR_3->gpio_chip, VAR_2->hwirq);
}
