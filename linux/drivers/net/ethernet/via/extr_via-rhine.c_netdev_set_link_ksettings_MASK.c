
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhine_private {int task_lock; int mii_if; } ;
struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int FUNC_0 (int *,struct ethtool_link_ksettings const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct rhine_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0,
         const struct ethtool_link_ksettings *VAR_1)
{
 struct rhine_private *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->task_lock);
 VAR_3 = FUNC_0(&VAR_2->mii_if, VAR_1);
 FUNC_4(&VAR_2->mii_if);
 FUNC_2(&VAR_2->task_lock);

 return VAR_3;
}
