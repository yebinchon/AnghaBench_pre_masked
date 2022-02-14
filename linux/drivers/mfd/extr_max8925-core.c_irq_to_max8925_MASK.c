
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_irq_data {int dummy; } ;
struct max8925_chip {int irq_base; } ;


 struct max8925_irq_data* VAR_0 ;

__attribute__((used)) static inline struct max8925_irq_data *FUNC_0(struct max8925_chip *VAR_1,
            int VAR_2)
{
 return &VAR_0[VAR_2 - VAR_1->irq_base];
}
