
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;
struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {int itr; int itr_setting; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 struct e1000_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6,
         struct ethtool_coalesce *VAR_7)
{
 struct e1000_adapter *VAR_8 = FUNC_1(VAR_6);
 struct e1000_hw *VAR_9 = &VAR_8->hw;

 if (VAR_9->mac_type < VAR_5)
  return -VAR_3;

 if ((VAR_7->rx_coalesce_usecs > VAR_0) ||
     ((VAR_7->rx_coalesce_usecs > 4) &&
      (VAR_7->rx_coalesce_usecs < VAR_1)) ||
     (VAR_7->rx_coalesce_usecs == 2))
  return -VAR_2;

 if (VAR_7->rx_coalesce_usecs == 4) {
  VAR_8->itr = VAR_8->itr_setting = 4;
 } else if (VAR_7->rx_coalesce_usecs <= 3) {
  VAR_8->itr = 20000;
  VAR_8->itr_setting = VAR_7->rx_coalesce_usecs;
 } else {
  VAR_8->itr = (1000000 / VAR_7->rx_coalesce_usecs);
  VAR_8->itr_setting = VAR_8->itr & ~3;
 }

 if (VAR_8->itr_setting != 0)
  FUNC_0(VAR_4, 1000000000 / (VAR_8->itr * 256));
 else
  FUNC_0(VAR_4, 0);

 return 0;
}
