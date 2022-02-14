
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, netdev_features_t VAR_2)
{
 int VAR_3 = 0;

 if (!((VAR_1->features ^ VAR_2) & VAR_0))
  return 0;

 if (!(VAR_2 & VAR_0))
  FUNC_0(VAR_1);

 return VAR_3;
}
