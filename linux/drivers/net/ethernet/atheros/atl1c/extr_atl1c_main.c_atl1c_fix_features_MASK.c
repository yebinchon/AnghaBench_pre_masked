
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mtu; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static netdev_features_t FUNC_0(struct net_device *VAR_5,
 netdev_features_t VAR_6)
{




 if (VAR_6 & VAR_1)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;

 if (VAR_5->mtu > VAR_0)
  VAR_6 &= ~(VAR_3 | VAR_4);

 return VAR_6;
}
