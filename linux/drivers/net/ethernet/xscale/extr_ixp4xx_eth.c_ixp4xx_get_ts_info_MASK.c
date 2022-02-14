
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ts_info {int so_timestamping; int phc_index; int tx_types; int rx_filters; } ;


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
 int FUNC_0 () ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_12,
         struct ethtool_ts_info *VAR_13)
{
 if (!FUNC_0()) {
  VAR_13->so_timestamping =
   VAR_10 |
   VAR_7 |
   VAR_8;
  VAR_13->phc_index = -1;
  return 0;
 }
 VAR_13->so_timestamping =
  VAR_9 |
  VAR_6 |
  VAR_5;
 VAR_13->phc_index = VAR_11;
 VAR_13->tx_types =
  (1 << VAR_3) |
  (1 << VAR_4);
 VAR_13->rx_filters =
  (1 << VAR_0) |
  (1 << VAR_2) |
  (1 << VAR_1);
 return 0;
}
