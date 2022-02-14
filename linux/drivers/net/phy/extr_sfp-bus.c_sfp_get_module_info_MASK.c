
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfp_bus {int sfp; TYPE_1__* socket_ops; } ;
struct ethtool_modinfo {int dummy; } ;
struct TYPE_2__ {int (* module_info ) (int ,struct ethtool_modinfo*) ;} ;


 int FUNC_0 (int ,struct ethtool_modinfo*) ;

int FUNC_1(struct sfp_bus *VAR_0, struct ethtool_modinfo *VAR_1)
{
 return VAR_0->socket_ops->module_info(VAR_0->sfp, VAR_1);
}
