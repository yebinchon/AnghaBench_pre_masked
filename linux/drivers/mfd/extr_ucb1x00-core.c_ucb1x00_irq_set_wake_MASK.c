
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucb1x00_plat_data {int can_wakeup; } ;
struct ucb1x00 {int irq_base; unsigned int irq_wake; int irq_lock; TYPE_2__* mcp; } ;
struct irq_data {int irq; } ;
struct TYPE_3__ {struct ucb1x00_plat_data* platform_data; } ;
struct TYPE_4__ {TYPE_1__ attached_device; } ;


 int VAR_0 ;
 struct ucb1x00* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct ucb1x00 *VAR_3 = FUNC_0(VAR_1);
 struct ucb1x00_plat_data *VAR_4 = VAR_3->mcp->attached_device.platform_data;
 unsigned VAR_5 = 1 << (VAR_1->irq - VAR_3->irq_base);

 if (!VAR_4 || !VAR_4->can_wakeup)
  return -VAR_0;

 FUNC_1(&VAR_3->irq_lock);
 if (VAR_2)
  VAR_3->irq_wake |= VAR_5;
 else
  VAR_3->irq_wake &= ~VAR_5;
 FUNC_2(&VAR_3->irq_lock);

 return 0;
}
