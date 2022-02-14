
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {struct dp83640_private* priv; } ;
struct ethtool_ts_info {int so_timestamping; int tx_types; int rx_filters; int phc_index; } ;
struct dp83640_private {TYPE_1__* clock; } ;
struct TYPE_2__ {int ptp_clock; } ;


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
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_11, struct ethtool_ts_info *VAR_12)
{
 struct dp83640_private *VAR_13 = VAR_11->priv;

 VAR_12->so_timestamping =
  VAR_10 |
  VAR_9 |
  VAR_8;
 VAR_12->phc_index = FUNC_0(VAR_13->clock->ptp_clock);
 VAR_12->tx_types =
  (1 << VAR_5) |
  (1 << VAR_6) |
  (1 << VAR_7);
 VAR_12->rx_filters =
  (1 << VAR_0) |
  (1 << VAR_1) |
  (1 << VAR_4) |
  (1 << VAR_3) |
  (1 << VAR_2);
 return 0;
}
