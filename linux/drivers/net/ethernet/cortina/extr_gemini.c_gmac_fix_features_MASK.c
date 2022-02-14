
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mtu; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static netdev_features_t FUNC_0(struct net_device *VAR_4,
        netdev_features_t VAR_5)
{
 if (VAR_4->mtu + VAR_0 + VAR_3 > VAR_2)
  VAR_5 &= ~VAR_1;

 return VAR_5;
}
