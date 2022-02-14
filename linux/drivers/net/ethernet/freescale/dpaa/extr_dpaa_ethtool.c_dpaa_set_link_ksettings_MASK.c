
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 int FUNC_1 (int ,struct ethtool_link_ksettings const*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
       const struct ethtool_link_ksettings *VAR_2)
{
 int VAR_3;

 if (!VAR_1->phydev) {
  FUNC_0(VAR_1, "phy device not initialized\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_1(VAR_1->phydev, VAR_2);
 if (VAR_3 < 0)
  FUNC_0(VAR_1, "phy_ethtool_ksettings_set() = %d\n", VAR_3);

 return VAR_3;
}
