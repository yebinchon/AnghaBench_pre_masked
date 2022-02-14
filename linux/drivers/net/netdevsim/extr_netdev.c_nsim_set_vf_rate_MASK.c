
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsim_bus_dev {int num_vfs; TYPE_1__* vfconfigs; } ;
struct netdevsim {struct nsim_bus_dev* nsim_bus_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int min_tx_rate; int max_tx_rate; } ;


 int VAR_0 ;
 struct netdevsim* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 struct netdevsim *VAR_5 = FUNC_0(VAR_1);
 struct nsim_bus_dev *VAR_6 = VAR_5->nsim_bus_dev;

 if (VAR_2 >= VAR_6->num_vfs)
  return -VAR_0;

 VAR_6->vfconfigs[VAR_2].min_tx_rate = VAR_3;
 VAR_6->vfconfigs[VAR_2].max_tx_rate = VAR_4;

 return 0;
}
