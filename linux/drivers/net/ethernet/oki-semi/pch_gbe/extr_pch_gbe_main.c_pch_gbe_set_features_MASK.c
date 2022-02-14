
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_adapter {int dummy; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pch_gbe_adapter*) ;
 int FUNC_3 (struct pch_gbe_adapter*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
 netdev_features_t VAR_2)
{
 struct pch_gbe_adapter *VAR_3 = FUNC_0(VAR_1);
 netdev_features_t VAR_4 = VAR_2 ^ VAR_1->features;

 if (!(VAR_4 & VAR_0))
  return 0;

 if (FUNC_1(VAR_1))
  FUNC_2(VAR_3);
 else
  FUNC_3(VAR_3);

 return 0;
}
