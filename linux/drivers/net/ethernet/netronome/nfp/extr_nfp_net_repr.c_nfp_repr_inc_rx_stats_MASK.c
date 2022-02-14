
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr_pcpu_stats {unsigned int rx_bytes; int syncp; int rx_packets; } ;
struct nfp_repr {int stats; } ;
struct net_device {int dummy; } ;


 struct nfp_repr* FUNC_0 (struct net_device*) ;
 struct nfp_repr_pcpu_stats* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct net_device *VAR_0, unsigned int VAR_1)
{
 struct nfp_repr *VAR_2 = FUNC_0(VAR_0);
 struct nfp_repr_pcpu_stats *VAR_3;

 VAR_3 = FUNC_1(VAR_2->stats);
 FUNC_2(&VAR_3->syncp);
 VAR_3->rx_packets++;
 VAR_3->rx_bytes += VAR_1;
 FUNC_3(&VAR_3->syncp);
}
