
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdevsim {int dummy; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct netdevsim* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct netdevsim*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, netdev_features_t VAR_2)
{
 struct netdevsim *VAR_3 = FUNC_0(VAR_1);

 if ((VAR_1->features & VAR_0) > (VAR_2 & VAR_0))
  return FUNC_1(VAR_3);

 return 0;
}
