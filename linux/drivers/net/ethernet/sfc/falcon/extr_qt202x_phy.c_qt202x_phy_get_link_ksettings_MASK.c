
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_link_ksettings {int dummy; } ;
struct ef4_nic {int mdio; } ;


 int FUNC_0 (int *,struct ethtool_link_ksettings*) ;

__attribute__((used)) static void FUNC_1(struct ef4_nic *VAR_0,
       struct ethtool_link_ksettings *VAR_1)
{
 FUNC_0(&VAR_0->mdio, VAR_1);
}
