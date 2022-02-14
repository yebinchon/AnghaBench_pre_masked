
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_phys_item_id {int dummy; } ;
struct net_device {int dummy; } ;
struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* get_phys_port_id ) (struct efx_nic*,struct netdev_phys_item_id*) ;} ;


 int VAR_0 ;
 struct efx_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct efx_nic*,struct netdev_phys_item_id*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct netdev_phys_item_id *VAR_2)
{
 struct efx_nic *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->type->get_phys_port_id)
  return VAR_3->type->get_phys_port_id(VAR_3, VAR_2);
 else
  return -VAR_0;
}
