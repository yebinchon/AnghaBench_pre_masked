
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static netdev_features_t
FUNC_0(struct net_device *VAR_2, netdev_features_t VAR_3)
{
 if (VAR_2->mtu > 1900)
  VAR_3 &= ~(VAR_0 | VAR_1);
 return VAR_3;
}
