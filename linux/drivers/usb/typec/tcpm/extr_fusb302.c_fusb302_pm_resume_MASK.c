
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb302_chip {int irq_while_suspended; int irq_suspended; int irq_lock; int irq_work; } ;
struct device {struct fusb302_chip* driver_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct fusb302_chip *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->irq_lock, VAR_2);
 if (VAR_1->irq_while_suspended) {
  FUNC_0(&VAR_1->irq_work);
  VAR_1->irq_while_suspended = 0;
 }
 VAR_1->irq_suspended = 0;
 FUNC_2(&VAR_1->irq_lock, VAR_2);

 return 0;
}
