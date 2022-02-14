
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* module_info ) (struct xgbe_prv_data*,struct ethtool_modinfo*) ;} ;
struct xgbe_prv_data {TYPE_1__ phy_if; } ;
struct net_device {int dummy; } ;
struct ethtool_modinfo {int dummy; } ;


 struct xgbe_prv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xgbe_prv_data*,struct ethtool_modinfo*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
    struct ethtool_modinfo *VAR_1)
{
 struct xgbe_prv_data *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->phy_if.module_info(VAR_2, VAR_1);
}
