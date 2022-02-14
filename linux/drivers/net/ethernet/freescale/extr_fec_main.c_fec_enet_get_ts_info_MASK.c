
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fec_enet_private {scalar_t__ ptp_clock; scalar_t__ bufdesc_ex; } ;
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
 int FUNC_0 (struct net_device*,struct ethtool_ts_info*) ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_10,
    struct ethtool_ts_info *VAR_11)
{
 struct fec_enet_private *VAR_12 = FUNC_1(VAR_10);

 if (VAR_12->bufdesc_ex) {

  VAR_11->so_timestamping = VAR_9 |
     VAR_6 |
     VAR_7 |
     VAR_8 |
     VAR_5 |
     VAR_4;
  if (VAR_12->ptp_clock)
   VAR_11->phc_index = FUNC_2(VAR_12->ptp_clock);
  else
   VAR_11->phc_index = -1;

  VAR_11->tx_types = (1 << VAR_2) |
     (1 << VAR_3);

  VAR_11->rx_filters = (1 << VAR_1) |
       (1 << VAR_0);
  return 0;
 } else {
  return FUNC_0(VAR_10, VAR_11);
 }
}
