
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;
struct e1000_adapter {int itr_setting; } ;


 struct e1000_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
         struct ethtool_coalesce *VAR_1)
{
 struct e1000_adapter *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->itr_setting <= 4)
  VAR_1->rx_coalesce_usecs = VAR_2->itr_setting;
 else
  VAR_1->rx_coalesce_usecs = 1000000 / VAR_2->itr_setting;

 return 0;
}
