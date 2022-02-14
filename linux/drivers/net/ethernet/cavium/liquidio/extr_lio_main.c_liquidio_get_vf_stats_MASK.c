
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_vfs_alloced; } ;
struct octeon_device {TYPE_1__ sriov_info; } ;
struct oct_vf_stats {int multicast; int broadcast; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct net_device {int dummy; } ;
struct lio {struct octeon_device* oct_dev; } ;
struct ifla_vf_stats {int multicast; int broadcast; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;


 int VAR_0 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct octeon_device*,int,struct oct_vf_stats*) ;
 int FUNC_2 (struct oct_vf_stats*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, int VAR_2,
     struct ifla_vf_stats *VAR_3)
{
 struct lio *VAR_4 = FUNC_0(VAR_1);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;
 struct oct_vf_stats VAR_6;
 int VAR_7;

 if (VAR_2 < 0 || VAR_2 >= VAR_5->sriov_info.num_vfs_alloced)
  return -VAR_0;

 FUNC_2(&VAR_6, 0, sizeof(struct oct_vf_stats));
 VAR_7 = FUNC_1(VAR_5, VAR_2, &VAR_6);
 if (!VAR_7) {
  VAR_3->rx_packets = VAR_6.rx_packets;
  VAR_3->tx_packets = VAR_6.tx_packets;
  VAR_3->rx_bytes = VAR_6.rx_bytes;
  VAR_3->tx_bytes = VAR_6.tx_bytes;
  VAR_3->broadcast = VAR_6.broadcast;
  VAR_3->multicast = VAR_6.multicast;
 }

 return VAR_7;
}
