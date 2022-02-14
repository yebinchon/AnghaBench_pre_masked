
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igc_adapter {int rx_itr_setting; int flags; int tx_itr_setting; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int tx_coalesce_usecs; } ;


 int VAR_0 ;
 struct igc_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
       struct ethtool_coalesce *VAR_2)
{
 struct igc_adapter *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->rx_itr_setting <= 3)
  VAR_2->rx_coalesce_usecs = VAR_3->rx_itr_setting;
 else
  VAR_2->rx_coalesce_usecs = VAR_3->rx_itr_setting >> 2;

 if (!(VAR_3->flags & VAR_0)) {
  if (VAR_3->tx_itr_setting <= 3)
   VAR_2->tx_coalesce_usecs = VAR_3->tx_itr_setting;
  else
   VAR_2->tx_coalesce_usecs = VAR_3->tx_itr_setting >> 2;
 }

 return 0;
}
