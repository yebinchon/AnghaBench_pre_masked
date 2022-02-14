
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clock; } ;
struct ravb_private {TYPE_1__ ptp; } ;
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
 int VAR_10 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_11,
       struct ethtool_ts_info *VAR_12)
{
 struct ravb_private *VAR_13 = FUNC_0(VAR_11);

 VAR_12->so_timestamping =
  VAR_10 |
  VAR_7 |
  VAR_8 |
  VAR_9 |
  VAR_6 |
  VAR_5;
 VAR_12->tx_types = (1 << VAR_3) | (1 << VAR_4);
 VAR_12->rx_filters =
  (1 << VAR_1) |
  (1 << VAR_2) |
  (1 << VAR_0);
 VAR_12->phc_index = FUNC_1(VAR_13->ptp.clock);

 return 0;
}
