
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int tx_errors; int tx_packets; int tx_bytes; int rx_errors; int rx_packets; int rx_bytes; } ;
struct net_device {int dummy; } ;
struct hinic_txq_stats {int tx_dropped; int pkts; int bytes; } ;
struct hinic_rxq_stats {int errors; int pkts; int bytes; } ;
struct hinic_dev {int flags; int mgmt_lock; struct hinic_txq_stats tx_stats; struct hinic_rxq_stats rx_stats; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct hinic_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hinic_dev*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
         struct rtnl_link_stats64 *VAR_2)
{
 struct hinic_dev *VAR_3 = FUNC_1(VAR_1);
 struct hinic_rxq_stats *VAR_4;
 struct hinic_txq_stats *VAR_5;

 VAR_4 = &VAR_3->rx_stats;
 VAR_5 = &VAR_3->tx_stats;

 FUNC_0(&VAR_3->mgmt_lock);

 if (VAR_3->flags & VAR_0)
  FUNC_3(VAR_3);

 FUNC_2(&VAR_3->mgmt_lock);

 VAR_2->rx_bytes = VAR_4->bytes;
 VAR_2->rx_packets = VAR_4->pkts;
 VAR_2->rx_errors = VAR_4->errors;

 VAR_2->tx_bytes = VAR_5->bytes;
 VAR_2->tx_packets = VAR_5->pkts;
 VAR_2->tx_errors = VAR_5->tx_dropped;
}
