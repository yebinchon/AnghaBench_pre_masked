
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {int irq_base; unsigned int irq_mask; int irq_lock; } ;
struct irq_data {int irq; } ;


 struct ucb1x00* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ucb1x00*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct ucb1x00 *VAR_1 = FUNC_0(VAR_0);
 unsigned VAR_2 = 1 << (VAR_0->irq - VAR_1->irq_base);

 FUNC_1(&VAR_1->irq_lock);
 VAR_1->irq_mask |= VAR_2;
 FUNC_3(VAR_1, VAR_2);
 FUNC_2(&VAR_1->irq_lock);
}
