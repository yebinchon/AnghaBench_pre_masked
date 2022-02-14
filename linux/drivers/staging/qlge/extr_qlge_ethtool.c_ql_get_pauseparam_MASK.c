
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int link_config; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; } ;


 int VAR_0 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
   struct ethtool_pauseparam *VAR_2)
{
 struct ql_adapter *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3);
 if (VAR_3->link_config & VAR_0) {
  VAR_2->rx_pause = 1;
  VAR_2->tx_pause = 1;
 }
}
