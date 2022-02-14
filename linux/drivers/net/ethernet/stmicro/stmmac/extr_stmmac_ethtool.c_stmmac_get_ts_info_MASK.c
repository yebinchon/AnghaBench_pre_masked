
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ atime_stamp; scalar_t__ time_stamp; } ;
struct stmmac_priv {scalar_t__ ptp_clock; TYPE_1__ dma_cap; } ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct net_device*,struct ethtool_ts_info*) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_19,
         struct ethtool_ts_info *VAR_20)
{
 struct stmmac_priv *VAR_21 = FUNC_1(VAR_19);

 if ((VAR_21->dma_cap.time_stamp || VAR_21->dma_cap.atime_stamp)) {

  VAR_20->so_timestamping = VAR_18 |
     VAR_17 |
     VAR_15 |
     VAR_14 |
     VAR_16 |
     VAR_13;

  if (VAR_21->ptp_clock)
   VAR_20->phc_index = FUNC_2(VAR_21->ptp_clock);

  VAR_20->tx_types = (1 << VAR_11) | (1 << VAR_12);

  VAR_20->rx_filters = ((1 << VAR_1) |
        (1 << VAR_3) |
        (1 << VAR_4) |
        (1 << VAR_2) |
        (1 << VAR_8) |
        (1 << VAR_9) |
        (1 << VAR_7) |
        (1 << VAR_6) |
        (1 << VAR_10) |
        (1 << VAR_5) |
        (1 << VAR_0));
  return 0;
 } else
  return FUNC_0(VAR_19, VAR_20);
}
