
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; int mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct irq_data*) ;

__attribute__((used)) static unsigned int FUNC_2(struct irq_data *VAR_1)
{






 VAR_1->mask = FUNC_0(VAR_1->hwirq % VAR_0);

 FUNC_1(VAR_1);

 return 0;
}
