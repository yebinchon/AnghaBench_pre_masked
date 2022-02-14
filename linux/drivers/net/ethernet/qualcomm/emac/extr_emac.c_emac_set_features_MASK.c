
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct emac_adapter {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct emac_adapter*) ;
 struct emac_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
        netdev_features_t VAR_3)
{
 netdev_features_t VAR_4 = VAR_3 ^ VAR_2->features;
 struct emac_adapter *VAR_5 = FUNC_1(VAR_2);




 if (!(VAR_4 & (VAR_1 | VAR_0)))
  return 0;

 if (!FUNC_2(VAR_2))
  return 0;




 VAR_2->features = VAR_3;

 return FUNC_0(VAR_5);
}
