
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int link_config; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
   struct ethtool_pauseparam *VAR_3)
{
 struct ql_adapter *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;

 if ((VAR_3->rx_pause) && (VAR_3->tx_pause))
  VAR_4->link_config |= VAR_0;
 else if (!VAR_3->rx_pause && !VAR_3->tx_pause)
  VAR_4->link_config &= ~VAR_0;
 else
  return -VAR_1;

 VAR_5 = FUNC_1(VAR_4);
 return VAR_5;
}
