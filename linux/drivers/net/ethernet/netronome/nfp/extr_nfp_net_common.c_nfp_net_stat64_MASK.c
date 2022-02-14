
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {int tx_errors; int tx_dropped; int rx_errors; int rx_dropped; int multicast; int tx_bytes; int tx_packets; int rx_bytes; int rx_packets; } ;
struct nfp_net_r_vector {scalar_t__ tx_errors; scalar_t__ tx_bytes; scalar_t__ tx_pkts; int tx_sync; scalar_t__ rx_drops; scalar_t__ rx_bytes; scalar_t__ rx_pkts; int rx_sync; } ;
struct nfp_net {int max_r_vecs; struct nfp_net_r_vector* r_vecs; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nfp_net* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct nfp_net*,int ) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5,
      struct rtnl_link_stats64 *VAR_6)
{
 struct nfp_net *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_7->max_r_vecs; VAR_8++) {
  struct nfp_net_r_vector *VAR_9 = &VAR_7->r_vecs[VAR_8];
  u64 VAR_10[3];
  unsigned int VAR_11;

  do {
   VAR_11 = FUNC_2(&VAR_9->rx_sync);
   VAR_10[0] = VAR_9->rx_pkts;
   VAR_10[1] = VAR_9->rx_bytes;
   VAR_10[2] = VAR_9->rx_drops;
  } while (FUNC_3(&VAR_9->rx_sync, VAR_11));
  VAR_6->rx_packets += VAR_10[0];
  VAR_6->rx_bytes += VAR_10[1];
  VAR_6->rx_dropped += VAR_10[2];

  do {
   VAR_11 = FUNC_2(&VAR_9->tx_sync);
   VAR_10[0] = VAR_9->tx_pkts;
   VAR_10[1] = VAR_9->tx_bytes;
   VAR_10[2] = VAR_9->tx_errors;
  } while (FUNC_3(&VAR_9->tx_sync, VAR_11));
  VAR_6->tx_packets += VAR_10[0];
  VAR_6->tx_bytes += VAR_10[1];
  VAR_6->tx_errors += VAR_10[2];
 }


 VAR_6->multicast += FUNC_1(VAR_7, VAR_2);
 VAR_6->rx_dropped += FUNC_1(VAR_7, VAR_0);
 VAR_6->rx_errors += FUNC_1(VAR_7, VAR_1);

 VAR_6->tx_dropped += FUNC_1(VAR_7, VAR_3);
 VAR_6->tx_errors += FUNC_1(VAR_7, VAR_4);
}
