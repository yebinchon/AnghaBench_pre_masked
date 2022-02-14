
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct e1000_adapter {int flags2; int flags; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_11,
         netdev_features_t VAR_12)
{
 struct e1000_adapter *VAR_13 = FUNC_2(VAR_11);
 netdev_features_t VAR_14 = VAR_12 ^ VAR_11->features;

 if (VAR_14 & (VAR_9 | VAR_10))
  VAR_13->flags |= VAR_2;

 if (!(VAR_14 & (VAR_3 | VAR_4 |
    VAR_6 | VAR_8 | VAR_7 |
    VAR_5)))
  return 0;

 if (VAR_14 & VAR_7) {
  if (VAR_12 & VAR_7) {
   VAR_13->flags2 &= ~VAR_0;
  } else {



   if (VAR_13->flags2 & VAR_1)
    VAR_13->flags2 |= VAR_0;
   else
    VAR_13->flags2 &= ~VAR_0;
  }
 }

 VAR_11->features = VAR_12;

 if (FUNC_3(VAR_11))
  FUNC_0(VAR_13);
 else
  FUNC_1(VAR_13);

 return 1;
}
