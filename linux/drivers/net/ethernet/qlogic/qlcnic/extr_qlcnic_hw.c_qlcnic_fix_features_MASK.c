
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int flags; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;

netdev_features_t FUNC_3(struct net_device *VAR_8,
 netdev_features_t VAR_9)
{
 struct qlcnic_adapter *VAR_10 = FUNC_0(VAR_8);
 netdev_features_t VAR_11;

 if (FUNC_1(VAR_10) &&
     (VAR_10->flags & VAR_7)) {
  if (VAR_10->flags & VAR_6) {
   VAR_9 = FUNC_2(VAR_10, VAR_9);
  } else {
   VAR_11 = VAR_9 ^ VAR_8->features;
   VAR_9 ^= VAR_11 & (VAR_3 |
            VAR_1 |
            VAR_0 |
            VAR_4 |
            VAR_5);
  }
 }

 if (!(VAR_9 & VAR_3))
  VAR_9 &= ~VAR_2;

 return VAR_9;
}
