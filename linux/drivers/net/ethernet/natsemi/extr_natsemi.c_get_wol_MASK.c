
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int lock; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int sopass; int wolopts; int supported; } ;


 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int *,int *) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0, struct ethtool_wolinfo *VAR_1)
{
 struct netdev_private *VAR_2 = FUNC_2(VAR_0);
 FUNC_3(&VAR_2->lock);
 FUNC_1(VAR_0, &VAR_1->supported, &VAR_1->wolopts);
 FUNC_0(VAR_0, VAR_1->sopass);
 FUNC_4(&VAR_2->lock);
}
