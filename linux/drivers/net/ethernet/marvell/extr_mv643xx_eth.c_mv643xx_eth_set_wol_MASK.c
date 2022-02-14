
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ethtool_wolinfo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (int ,struct ethtool_wolinfo*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 int VAR_3;

 if (!VAR_1->phydev)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1->phydev, VAR_2);



 if (VAR_3 == -VAR_0)
  FUNC_0(VAR_1, "The PHY does not support set_wol, was CONFIG_MARVELL_PHY enabled?\n");
 return VAR_3;
}
