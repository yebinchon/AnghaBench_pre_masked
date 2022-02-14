
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdevsim {TYPE_1__* nsim_dev_port; } ;
struct net_device {int dummy; } ;
struct devlink_port {int dummy; } ;
struct TYPE_2__ {struct devlink_port devlink_port; } ;


 struct netdevsim* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct devlink_port *FUNC_1(struct net_device *VAR_0)
{
 struct netdevsim *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->nsim_dev_port->devlink_port;
}
