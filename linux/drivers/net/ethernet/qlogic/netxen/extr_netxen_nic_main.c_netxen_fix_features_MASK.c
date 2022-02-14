
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct net_device *VAR_2,
 netdev_features_t VAR_3)
{
 if (!(VAR_3 & VAR_1)) {
  FUNC_0(VAR_2, "disabling LRO as RXCSUM is off\n");

  VAR_3 &= ~VAR_0;
 }

 return VAR_3;
}
