
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmfx {int irq_src; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int) ;
 struct stmfx* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct stmfx *VAR_1 = FUNC_1(VAR_0);

 VAR_1->irq_src |= FUNC_0(VAR_0->hwirq % 8);
}
