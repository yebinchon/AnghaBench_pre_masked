
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int autoneg; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct ef4_nic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ef4_nic*,struct ethtool_link_ksettings const*) ;

__attribute__((used)) static int
FUNC_1(struct ef4_nic *VAR_1,
        const struct ethtool_link_ksettings *VAR_2)
{
 if (!VAR_2->base.autoneg)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2);
}
