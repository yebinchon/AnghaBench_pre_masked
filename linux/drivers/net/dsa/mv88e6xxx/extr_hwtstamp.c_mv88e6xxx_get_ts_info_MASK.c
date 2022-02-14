
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6xxx_ptp_ops {int rx_filters; } ;
struct mv88e6xxx_chip {int ptp_clock; TYPE_1__* info; } ;
struct ethtool_ts_info {int so_timestamping; int tx_types; int rx_filters; int phc_index; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
struct TYPE_4__ {struct mv88e6xxx_ptp_ops* ptp_ops; } ;
struct TYPE_3__ {int ptp_support; TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct dsa_switch *VAR_6, int VAR_7,
     struct ethtool_ts_info *VAR_8)
{
 const struct mv88e6xxx_ptp_ops *VAR_9;
 struct mv88e6xxx_chip *VAR_10;

 VAR_10 = VAR_6->priv;
 VAR_9 = VAR_10->info->ops->ptp_ops;

 if (!VAR_10->info->ptp_support)
  return -VAR_0;

 VAR_8->so_timestamping =
  VAR_5 |
  VAR_4 |
  VAR_3;
 VAR_8->phc_index = FUNC_0(VAR_10->ptp_clock);
 VAR_8->tx_types =
  (1 << VAR_1) |
  (1 << VAR_2);
 VAR_8->rx_filters = VAR_9->rx_filters;

 return 0;
}
