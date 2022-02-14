
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_channels {int tx_count; int rx_count; int max_tx; int max_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_4,
          struct ethtool_channels *VAR_5)
{
 VAR_5->max_rx = VAR_0;
 VAR_5->max_tx = VAR_1;
 VAR_5->rx_count = VAR_2;
 VAR_5->tx_count = VAR_3;
}
