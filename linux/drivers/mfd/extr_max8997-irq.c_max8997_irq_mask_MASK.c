
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_irq_data {size_t group; int mask; } ;
struct max8997_dev {int * irq_masks_cur; } ;
struct irq_data {int dummy; } ;


 struct max8997_dev* FUNC_0 (struct irq_data*) ;
 struct max8997_irq_data* FUNC_1 (struct max8997_dev*,struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct max8997_dev *VAR_1 = FUNC_0(VAR_0);
 const struct max8997_irq_data *VAR_2 = FUNC_1(VAR_1,
             VAR_0);

 VAR_1->irq_masks_cur[VAR_2->group] |= VAR_2->mask;
}
