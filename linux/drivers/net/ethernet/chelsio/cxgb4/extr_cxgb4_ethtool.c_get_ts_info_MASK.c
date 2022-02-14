
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_ts_info {int so_timestamping; int tx_types; int rx_filters; int phc_index; } ;
struct adapter {scalar_t__ ptp_clock; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_14, struct ethtool_ts_info *VAR_15)
{
 struct port_info *VAR_16 = FUNC_0(VAR_14);
 struct adapter *VAR_17 = VAR_16->adapter;

 VAR_15->so_timestamping = VAR_13 |
       VAR_10 |
       VAR_11;

 VAR_15->so_timestamping |= VAR_9 |
        VAR_12 |
        VAR_8;

 VAR_15->tx_types = (1 << VAR_6) |
       (1 << VAR_7);

 VAR_15->rx_filters = (1 << VAR_0) |
         (1 << VAR_4) |
         (1 << VAR_2) |
         (1 << VAR_1) |
         (1 << VAR_5) |
         (1 << VAR_3);

 if (VAR_17->ptp_clock)
  VAR_15->phc_index = FUNC_1(VAR_17->ptp_clock);
 else
  VAR_15->phc_index = -1;

 return 0;
}
