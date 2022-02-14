
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {scalar_t__ irq_enabled; TYPE_1__* ops; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* irq_disable ) (struct net_device*) ;} ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct r8192_priv *VAR_1 = FUNC_0(VAR_0);

 VAR_1->ops->irq_disable(VAR_0);

 VAR_1->irq_enabled = 0;
}
