
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ioc3_private {int ioc3_lock; int mii; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int FUNC_0 (int *,struct ethtool_link_ksettings*) ;
 struct ioc3_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
       struct ethtool_link_ksettings *VAR_1)
{
 struct ioc3_private *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2->ioc3_lock);
 FUNC_0(&VAR_2->mii, VAR_1);
 FUNC_3(&VAR_2->ioc3_lock);

 return 0;
}
