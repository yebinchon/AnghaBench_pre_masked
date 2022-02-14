
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (int ,struct ethtool_link_ksettings*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
       struct ethtool_link_ksettings *VAR_1)
{
 if (!VAR_0->phydev) {
  FUNC_0(VAR_0, "phy device not initialized\n");
  return 0;
 }

 FUNC_1(VAR_0->phydev, VAR_1);

 return 0;
}
