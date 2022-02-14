
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
 netdev_features_t VAR_3)
{
 netdev_features_t VAR_4 = VAR_2->features ^ VAR_3;

 if (VAR_4 & VAR_0)
  FUNC_1(VAR_2, VAR_3);

 if (VAR_4 & VAR_1)
  FUNC_0(VAR_2, VAR_3);


 return 0;
}
