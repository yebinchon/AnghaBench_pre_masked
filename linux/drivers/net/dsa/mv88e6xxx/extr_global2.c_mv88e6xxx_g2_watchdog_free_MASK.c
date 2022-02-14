
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mv88e6xxx_chip {int watchdog_irq; TYPE_3__* info; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* watchdog_ops; } ;
struct TYPE_4__ {int (* irq_free ) (struct mv88e6xxx_chip*) ;} ;


 int FUNC_0 (int ,struct mv88e6xxx_chip*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_5(struct mv88e6xxx_chip *VAR_0)
{
 FUNC_2(VAR_0);
 if (VAR_0->info->ops->watchdog_ops->irq_free)
  VAR_0->info->ops->watchdog_ops->irq_free(VAR_0);
 FUNC_3(VAR_0);

 FUNC_0(VAR_0->watchdog_irq, VAR_0);
 FUNC_1(VAR_0->watchdog_irq);
}
