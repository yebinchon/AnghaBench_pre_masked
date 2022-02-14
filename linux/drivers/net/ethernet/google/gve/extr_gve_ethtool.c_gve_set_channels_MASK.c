
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gve_queue_config {int num_queues; } ;
struct gve_priv {struct gve_queue_config rx_cfg; struct gve_queue_config tx_cfg; } ;
struct ethtool_channels {int tx_count; int rx_count; scalar_t__ combined_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct gve_priv*,struct gve_queue_config,struct gve_queue_config) ;
 int FUNC_1 (struct net_device*,struct ethtool_channels*) ;
 struct gve_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
       struct ethtool_channels *VAR_2)
{
 struct gve_priv *VAR_3 = FUNC_2(VAR_1);
 struct gve_queue_config VAR_4 = VAR_3->tx_cfg;
 struct gve_queue_config VAR_5 = VAR_3->rx_cfg;
 struct ethtool_channels VAR_6;
 int VAR_7 = VAR_2->tx_count;
 int VAR_8 = VAR_2->rx_count;

 FUNC_1(VAR_1, &VAR_6);


 if (VAR_2->combined_count != VAR_6.combined_count)
  return -VAR_0;

 if (!VAR_8 || !VAR_7)
  return -VAR_0;

 if (!FUNC_3(VAR_1)) {
  VAR_3->tx_cfg.num_queues = VAR_7;
  VAR_3->rx_cfg.num_queues = VAR_8;
  return 0;
 }

 VAR_4.num_queues = VAR_7;
 VAR_5.num_queues = VAR_8;

 return FUNC_0(VAR_3, VAR_5, VAR_4);
}
