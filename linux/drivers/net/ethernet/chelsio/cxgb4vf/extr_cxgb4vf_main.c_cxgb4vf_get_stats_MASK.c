
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4vf_port_stats {int rx_err_frames; int tx_drop_frames; scalar_t__ rx_mcast_frames; scalar_t__ rx_ucast_frames; scalar_t__ rx_bcast_frames; scalar_t__ rx_ucast_bytes; scalar_t__ rx_mcast_bytes; scalar_t__ rx_bcast_bytes; scalar_t__ tx_offload_frames; scalar_t__ tx_ucast_frames; scalar_t__ tx_mcast_frames; scalar_t__ tx_bcast_frames; scalar_t__ tx_offload_bytes; scalar_t__ tx_ucast_bytes; scalar_t__ tx_mcast_bytes; scalar_t__ tx_bcast_bytes; } ;
struct port_info {int pidx; struct adapter* adapter; } ;
struct net_device_stats {int rx_errors; int tx_errors; scalar_t__ multicast; scalar_t__ rx_packets; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ tx_bytes; } ;
struct net_device {struct net_device_stats stats; } ;
struct adapter {int stats_lock; } ;


 int FUNC_0 (struct net_device_stats*,int ,int) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct adapter*,int ,struct t4vf_port_stats*) ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_0)
{
 struct t4vf_port_stats VAR_1;
 struct port_info *VAR_2 = FUNC_1(VAR_0);
 struct adapter *VAR_3 = VAR_2->adapter;
 struct net_device_stats *VAR_4 = &VAR_0->stats;
 int VAR_5;

 FUNC_2(&VAR_3->stats_lock);
 VAR_5 = FUNC_4(VAR_3, VAR_2->pidx, &VAR_1);
 FUNC_3(&VAR_3->stats_lock);

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 if (VAR_5)
  return VAR_4;

 VAR_4->tx_bytes = (VAR_1.tx_bcast_bytes + VAR_1.tx_mcast_bytes +
   VAR_1.tx_ucast_bytes + VAR_1.tx_offload_bytes);
 VAR_4->tx_packets = (VAR_1.tx_bcast_frames + VAR_1.tx_mcast_frames +
     VAR_1.tx_ucast_frames + VAR_1.tx_offload_frames);
 VAR_4->rx_bytes = (VAR_1.rx_bcast_bytes + VAR_1.rx_mcast_bytes +
   VAR_1.rx_ucast_bytes);
 VAR_4->rx_packets = (VAR_1.rx_bcast_frames + VAR_1.rx_mcast_frames +
     VAR_1.rx_ucast_frames);
 VAR_4->multicast = VAR_1.rx_mcast_frames;
 VAR_4->tx_errors = VAR_1.tx_drop_frames;
 VAR_4->rx_errors = VAR_1.rx_err_frames;

 return VAR_4;
}
