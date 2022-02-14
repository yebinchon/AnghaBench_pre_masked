
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; int tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;
struct axienet_local {scalar_t__ rx_bd_num; int tx_bd_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct axienet_local* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
       struct ethtool_ringparam *VAR_5)
{
 struct axienet_local *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5->rx_pending > VAR_2 ||
     VAR_5->rx_mini_pending ||
     VAR_5->rx_jumbo_pending ||
     VAR_5->rx_pending > VAR_3)
  return -VAR_1;

 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_6->rx_bd_num = VAR_5->rx_pending;
 VAR_6->tx_bd_num = VAR_5->tx_pending;
 return 0;
}
