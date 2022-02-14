
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct ab8500 {int transfer_ongoing; int irq_lock; } ;


 int FUNC_0 (int *) ;
 struct ab8500* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct ab8500 *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->irq_lock);
 FUNC_0(&VAR_1->transfer_ongoing);
}
