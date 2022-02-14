
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parport {TYPE_2__* ops; } ;
struct net_local {TYPE_1__* pardev; } ;
struct net_device {int irq; } ;
struct TYPE_4__ {int (* disable_irq ) (struct parport*) ;} ;
struct TYPE_3__ {struct parport* port; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct parport*) ;

__attribute__((used)) static inline void FUNC_2 (struct net_device *VAR_0)
{
 if (VAR_0->irq != -1)
 {
  struct parport *VAR_1 =
     ((struct net_local *)FUNC_0(VAR_0))->pardev->port;
  VAR_1->ops->disable_irq (VAR_1);
 }
}
