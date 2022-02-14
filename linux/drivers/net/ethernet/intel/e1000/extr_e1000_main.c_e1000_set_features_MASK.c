
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct e1000_adapter {int rx_csum; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct net_device*,int) ;
 struct e1000_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
 netdev_features_t VAR_4)
{
 struct e1000_adapter *VAR_5 = FUNC_3(VAR_3);
 netdev_features_t VAR_6 = VAR_4 ^ VAR_3->features;

 if (VAR_6 & VAR_0)
  FUNC_2(VAR_3, VAR_4);

 if (!(VAR_6 & (VAR_2 | VAR_1)))
  return 0;

 VAR_3->features = VAR_4;
 VAR_5->rx_csum = !!(VAR_4 & VAR_2);

 if (FUNC_4(VAR_3))
  FUNC_0(VAR_5);
 else
  FUNC_1(VAR_5);

 return 1;
}
