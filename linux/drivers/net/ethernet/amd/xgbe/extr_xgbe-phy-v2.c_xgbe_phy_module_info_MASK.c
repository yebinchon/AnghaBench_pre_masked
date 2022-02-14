
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ port_mode; int sfp_eeprom; scalar_t__ sfp_mod_absent; } ;
struct ethtool_modinfo {int eeprom_len; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct xgbe_prv_data *VAR_7,
    struct ethtool_modinfo *VAR_8)
{
 struct xgbe_phy_data *VAR_9 = VAR_7->phy_data;

 if (VAR_9->port_mode != VAR_6)
  return -VAR_1;

 if (!FUNC_1(VAR_7->netdev))
  return -VAR_0;

 if (VAR_9->sfp_mod_absent)
  return -VAR_0;

 if (FUNC_0(&VAR_9->sfp_eeprom)) {
  VAR_8->type = VAR_4;
  VAR_8->eeprom_len = VAR_5;
 } else {
  VAR_8->type = VAR_2;
  VAR_8->eeprom_len = VAR_3;
 }

 return 0;
}
