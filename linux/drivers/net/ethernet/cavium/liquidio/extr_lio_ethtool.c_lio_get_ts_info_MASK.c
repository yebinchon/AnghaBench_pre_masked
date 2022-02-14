
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lio {scalar_t__ ptp_clock; } ;
struct ethtool_ts_info {int so_timestamping; int phc_index; int tx_types; int rx_filters; } ;


 struct lio* FUNC_0 (struct net_device*) ;
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
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_12,
      struct ethtool_ts_info *VAR_13)
{
 struct lio *VAR_14 = FUNC_0(VAR_12);

 VAR_13->so_timestamping =






  VAR_8 |
  VAR_9;

 if (VAR_14->ptp_clock)
  VAR_13->phc_index = FUNC_1(VAR_14->ptp_clock);
 else
  VAR_13->phc_index = -1;
 return 0;
}
