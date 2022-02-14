
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsim_bus_dev {int num_vfs; TYPE_1__* vfconfigs; } ;
struct netdevsim {struct nsim_bus_dev* nsim_bus_dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int trusted; } ;


 int VAR_0 ;
 struct netdevsim* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, int VAR_2, bool VAR_3)
{
 struct netdevsim *VAR_4 = FUNC_0(VAR_1);
 struct nsim_bus_dev *VAR_5 = VAR_4->nsim_bus_dev;

 if (VAR_2 >= VAR_5->num_vfs)
  return -VAR_0;
 VAR_5->vfconfigs[VAR_2].trusted = VAR_3;

 return 0;
}
