
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int masked; } ;
struct mv88e6xxx_chip {TYPE_1__ g2_irq; } ;
struct irq_data {unsigned int hwirq; } ;


 struct mv88e6xxx_chip* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_0)
{
 struct mv88e6xxx_chip *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = VAR_0->hwirq;

 VAR_1->g2_irq.masked |= (1 << VAR_2);
}
