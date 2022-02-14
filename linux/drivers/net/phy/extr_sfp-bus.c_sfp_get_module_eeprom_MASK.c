
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sfp_bus {int sfp; TYPE_1__* socket_ops; } ;
struct ethtool_eeprom {int dummy; } ;
struct TYPE_2__ {int (* module_eeprom ) (int ,struct ethtool_eeprom*,int *) ;} ;


 int FUNC_0 (int ,struct ethtool_eeprom*,int *) ;

int FUNC_1(struct sfp_bus *VAR_0, struct ethtool_eeprom *VAR_1,
     u8 *VAR_2)
{
 return VAR_0->socket_ops->module_eeprom(VAR_0->sfp, VAR_1, VAR_2);
}
