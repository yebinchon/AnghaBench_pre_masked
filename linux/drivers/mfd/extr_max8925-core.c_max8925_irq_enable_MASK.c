
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max8925_chip {size_t irq_base; } ;
struct irq_data {size_t irq; } ;
struct TYPE_2__ {int offs; int enable; } ;


 struct max8925_chip* FUNC_0 (struct irq_data*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_1)
{
 struct max8925_chip *VAR_2 = FUNC_0(VAR_1);

 VAR_0[VAR_1->irq - VAR_2->irq_base].enable
  = VAR_0[VAR_1->irq - VAR_2->irq_base].offs;
}
