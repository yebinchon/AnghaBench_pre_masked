
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_fecparam {int dummy; } ;
struct efx_nic {int mac_lock; TYPE_1__* phy_op; } ;
struct TYPE_2__ {int (* set_fecparam ) (struct efx_nic*,struct ethtool_fecparam*) ;int get_fecparam; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct efx_nic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct efx_nic*,struct ethtool_fecparam*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
        struct ethtool_fecparam *VAR_2)
{
 struct efx_nic *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 if (!VAR_3->phy_op || !VAR_3->phy_op->get_fecparam)
  return -VAR_0;
 FUNC_0(&VAR_3->mac_lock);
 VAR_4 = VAR_3->phy_op->set_fecparam(VAR_3, VAR_2);
 FUNC_1(&VAR_3->mac_lock);

 return VAR_4;
}
