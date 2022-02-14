
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct denali_controller {int irq_lock; scalar_t__ irq_mask; scalar_t__ irq_status; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct denali_controller *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->irq_lock, VAR_1);
 VAR_0->irq_status = 0;
 VAR_0->irq_mask = 0;
 FUNC_1(&VAR_0->irq_lock, VAR_1);
}
