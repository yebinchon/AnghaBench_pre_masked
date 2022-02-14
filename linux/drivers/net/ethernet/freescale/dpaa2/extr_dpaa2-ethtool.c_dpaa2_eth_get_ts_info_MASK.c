
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ts_info {int so_timestamping; int tx_types; int rx_filters; int phc_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_8,
     struct ethtool_ts_info *VAR_9)
{
 VAR_9->so_timestamping = VAR_6 |
    VAR_5 |
    VAR_4;

 VAR_9->phc_index = VAR_7;

 VAR_9->tx_types = (1 << VAR_2) |
    (1 << VAR_3);

 VAR_9->rx_filters = (1 << VAR_1) |
      (1 << VAR_0);
 return 0;
}
