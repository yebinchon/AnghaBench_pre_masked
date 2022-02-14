
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; int wanted_features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
     netdev_features_t VAR_4)
{
 netdev_features_t VAR_5 = VAR_4 ^ VAR_3->features;
 netdev_features_t VAR_6 = VAR_3->wanted_features;
 int VAR_7 = 0;

 if (VAR_5 & (VAR_1 | VAR_0))
  VAR_7 = FUNC_1(VAR_3, VAR_6);
 if (VAR_5 & (VAR_2))
  VAR_7 = FUNC_0(VAR_3, VAR_6);

 return VAR_7;
}
