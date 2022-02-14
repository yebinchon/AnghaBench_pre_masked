
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hamachi_private {int lock; int mii_if; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int FUNC_0 (int *,struct ethtool_link_ksettings const*) ;
 struct hamachi_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
          const struct ethtool_link_ksettings *VAR_1)
{
 struct hamachi_private *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;
 FUNC_2(&VAR_2->lock);
 VAR_3 = FUNC_0(&VAR_2->mii_if, VAR_1);
 FUNC_3(&VAR_2->lock);
 return VAR_3;
}
