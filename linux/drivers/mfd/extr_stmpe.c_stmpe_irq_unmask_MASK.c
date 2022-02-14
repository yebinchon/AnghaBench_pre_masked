
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe {int* ier; } ;
struct irq_data {int hwirq; } ;


 struct stmpe* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_0)
{
 struct stmpe *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = VAR_0->hwirq;
 int VAR_3 = VAR_2 / 8;
 int VAR_4 = 1 << (VAR_2 % 8);

 VAR_1->ier[VAR_3] |= VAR_4;
}
