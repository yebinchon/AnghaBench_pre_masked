
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nsim_bus_dev {int num_vfs; TYPE_1__* vfconfigs; } ;
struct netdevsim {struct nsim_bus_dev* nsim_bus_dev; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {int vlan; int qos; int vlan_proto; } ;


 int VAR_0 ;
 struct netdevsim* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, int VAR_2,
       u16 VAR_3, u8 VAR_4, __be16 VAR_5)
{
 struct netdevsim *VAR_6 = FUNC_0(VAR_1);
 struct nsim_bus_dev *VAR_7 = VAR_6->nsim_bus_dev;

 if (VAR_2 >= VAR_7->num_vfs || VAR_3 > 4095 || VAR_4 > 7)
  return -VAR_0;

 VAR_7->vfconfigs[VAR_2].vlan = VAR_3;
 VAR_7->vfconfigs[VAR_2].qos = VAR_4;
 VAR_7->vfconfigs[VAR_2].vlan_proto = VAR_5;

 return 0;
}
