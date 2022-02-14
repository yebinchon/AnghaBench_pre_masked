
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int lock; int mii_if; } ;
struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int FUNC_0 (int *,struct ethtool_link_ksettings*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
         struct ethtool_link_ksettings *VAR_1)
{
 struct netdev_private *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2->lock);
 FUNC_0(&VAR_2->mii_if, VAR_1);
 FUNC_3(&VAR_2->lock);

 return 0;
}
