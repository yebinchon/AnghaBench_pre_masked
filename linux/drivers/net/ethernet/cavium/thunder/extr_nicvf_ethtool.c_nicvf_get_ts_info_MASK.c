
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int ptp_clock; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct ethtool_ts_info*) ;
 struct nicvf* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_10,
        struct ethtool_ts_info *VAR_11)
{
 struct nicvf *VAR_12 = FUNC_2(VAR_10);

 if (!VAR_12->ptp_clock)
  return FUNC_1(VAR_10, VAR_11);

 VAR_11->so_timestamping = VAR_9 |
    VAR_6 |
    VAR_7 |
    VAR_8 |
    VAR_5 |
    VAR_4;

 VAR_11->phc_index = FUNC_0(VAR_12->ptp_clock);

 VAR_11->tx_types = (1 << VAR_2) | (1 << VAR_3);

 VAR_11->rx_filters = (1 << VAR_1) |
      (1 << VAR_0);

 return 0;
}
