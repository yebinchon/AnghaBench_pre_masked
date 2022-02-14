
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct efx_nic {TYPE_1__* type; } ;
typedef int __be16 ;
struct TYPE_2__ {int (* vlan_rx_add_vid ) (struct efx_nic*,int ,int ) ;} ;


 int VAR_0 ;
 struct efx_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct efx_nic*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, __be16 VAR_2, u16 VAR_3)
{
 struct efx_nic *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->type->vlan_rx_add_vid)
  return VAR_4->type->vlan_rx_add_vid(VAR_4, VAR_2, VAR_3);
 else
  return -VAR_0;
}
