
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mtu; } ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
 netdev_features_t VAR_3)
{
 if (!(VAR_3 & VAR_1) && VAR_2->mtu > VAR_0) {
  FUNC_0(VAR_2, "Reducing MTU because no SG offload");
  VAR_2->mtu = VAR_0;
 }

 return 0;
}
