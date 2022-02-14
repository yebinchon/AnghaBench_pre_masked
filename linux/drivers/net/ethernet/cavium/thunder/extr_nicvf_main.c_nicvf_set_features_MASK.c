
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int dummy; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct nicvf* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nicvf*,int) ;
 int FUNC_3 (struct nicvf*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
         netdev_features_t VAR_3)
{
 struct nicvf *VAR_4 = FUNC_0(VAR_2);
 netdev_features_t VAR_5 = VAR_3 ^ VAR_2->features;

 if (VAR_5 & VAR_0)
  FUNC_3(VAR_4, VAR_3);

 if ((VAR_5 & VAR_1) && FUNC_1(VAR_2))
  return FUNC_2(VAR_4, VAR_3);

 return 0;
}
