
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8998_irq_data {int dummy; } ;
struct max8998_dev {int dummy; } ;
struct irq_data {size_t hwirq; } ;


 struct max8998_irq_data* VAR_0 ;

__attribute__((used)) static inline struct max8998_irq_data *
FUNC_0(struct max8998_dev *VAR_1, struct irq_data *VAR_2)
{
 return &VAR_0[VAR_2->hwirq];
}
