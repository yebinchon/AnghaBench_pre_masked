
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int loopback_supported; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct nicvf* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_1,
         netdev_features_t VAR_2)
{
 struct nicvf *VAR_3 = FUNC_0(VAR_1);

 if ((VAR_2 & VAR_0) &&
     FUNC_1(VAR_1) && !VAR_3->loopback_supported)
  VAR_2 &= ~VAR_0;

 return VAR_2;
}
