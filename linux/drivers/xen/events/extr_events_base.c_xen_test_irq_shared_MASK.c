
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct physdev_irq_status_query {int flags; int irq; } ;
struct TYPE_3__ {int pirq; } ;
struct TYPE_4__ {TYPE_1__ pirq; } ;
struct irq_info {TYPE_2__ u; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct physdev_irq_status_query*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 struct irq_info* FUNC_2 (int) ;

int FUNC_3(int VAR_3)
{
 struct irq_info *VAR_4 = FUNC_2(VAR_3);
 struct physdev_irq_status_query VAR_5;

 if (FUNC_1(!VAR_4))
  return -VAR_0;

 VAR_5.irq = VAR_4->u.pirq.pirq;

 if (FUNC_0(VAR_1, &VAR_5))
  return 0;
 return !(VAR_5.flags & VAR_2);
}
