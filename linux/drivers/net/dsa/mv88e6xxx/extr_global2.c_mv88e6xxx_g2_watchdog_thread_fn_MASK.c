
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_3__* info; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* watchdog_ops; } ;
struct TYPE_4__ {int (* irq_action ) (struct mv88e6xxx_chip*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct mv88e6xxx_chip *VAR_3 = VAR_2;
 irqreturn_t VAR_4 = VAR_0;

 FUNC_0(VAR_3);
 if (VAR_3->info->ops->watchdog_ops->irq_action)
  VAR_4 = VAR_3->info->ops->watchdog_ops->irq_action(VAR_3, VAR_1);
 FUNC_1(VAR_3);

 return VAR_4;
}
