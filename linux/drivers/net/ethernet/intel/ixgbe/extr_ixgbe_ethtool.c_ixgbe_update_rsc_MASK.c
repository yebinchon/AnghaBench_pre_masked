
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct ixgbe_adapter {int flags2; int rx_itr_setting; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_1(struct ixgbe_adapter *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->netdev;


 if (!(VAR_5->flags2 & VAR_0) ||
     !(VAR_6->features & VAR_3))
  return 0;


 if (VAR_5->rx_itr_setting == 1 ||
     VAR_5->rx_itr_setting > VAR_2) {
  if (!(VAR_5->flags2 & VAR_1)) {
   VAR_5->flags2 |= VAR_1;
   FUNC_0(VAR_4, "rx-usecs value high enough to re-enable RSC\n");
   return 1;
  }

 } else if (VAR_5->flags2 & VAR_1) {
  VAR_5->flags2 &= ~VAR_1;
  FUNC_0(VAR_4, "rx-usecs set too low, disabling RSC\n");
  return 1;
 }
 return 0;
}
