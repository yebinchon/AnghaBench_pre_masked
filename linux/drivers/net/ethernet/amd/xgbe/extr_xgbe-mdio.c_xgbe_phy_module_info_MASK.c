
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* module_info ) (struct xgbe_prv_data*,struct ethtool_modinfo*) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {TYPE_2__ phy_if; } ;
struct ethtool_modinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*,struct ethtool_modinfo*) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_1,
    struct ethtool_modinfo *VAR_2)
{
 if (!VAR_1->phy_if.phy_impl.module_info)
  return -VAR_0;

 return VAR_1->phy_if.phy_impl.module_info(VAR_1, VAR_2);
}
