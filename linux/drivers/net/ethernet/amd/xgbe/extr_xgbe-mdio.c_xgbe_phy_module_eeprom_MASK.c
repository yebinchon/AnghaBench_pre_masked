
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int (* module_eeprom ) (struct xgbe_prv_data*,struct ethtool_eeprom*,int *) ;} ;
struct TYPE_4__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {TYPE_2__ phy_if; } ;
struct ethtool_eeprom {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*,struct ethtool_eeprom*,int *) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_1,
      struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 if (!VAR_1->phy_if.phy_impl.module_eeprom)
  return -VAR_0;

 return VAR_1->phy_if.phy_impl.module_eeprom(VAR_1, VAR_2, VAR_3);
}
