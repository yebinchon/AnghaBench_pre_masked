
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct ixgb_adapter {int rx_csum; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgb_adapter*,int) ;
 int FUNC_1 (struct ixgb_adapter*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ixgb_adapter*) ;
 struct ixgb_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_2, netdev_features_t VAR_3)
{
 struct ixgb_adapter *VAR_4 = FUNC_4(VAR_2);
 netdev_features_t VAR_5 = VAR_3 ^ VAR_2->features;

 if (!(VAR_5 & (VAR_1|VAR_0)))
  return 0;

 VAR_4->rx_csum = !!(VAR_3 & VAR_1);

 if (FUNC_5(VAR_2)) {
  FUNC_0(VAR_4, 1);
  FUNC_3(VAR_4);
  FUNC_2(VAR_2);
 } else
  FUNC_1(VAR_4);

 return 0;
}
