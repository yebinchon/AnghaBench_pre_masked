
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* module_eeprom ) (struct xgbe_prv_data*,struct ethtool_eeprom*,int *) ;} ;
struct xgbe_prv_data {TYPE_1__ phy_if; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int dummy; } ;


 struct xgbe_prv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct xgbe_prv_data*,struct ethtool_eeprom*,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
      struct ethtool_eeprom *VAR_1, u8 *VAR_2)
{
 struct xgbe_prv_data *VAR_3 = FUNC_0(VAR_0);

 return VAR_3->phy_if.module_eeprom(VAR_3, VAR_1, VAR_2);
}
