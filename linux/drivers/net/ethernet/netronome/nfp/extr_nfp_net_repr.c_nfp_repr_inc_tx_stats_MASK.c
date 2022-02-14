
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_repr_pcpu_stats {unsigned int tx_bytes; int syncp; int tx_packets; } ;
struct nfp_repr {TYPE_1__* stats; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_drops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfp_repr* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 struct nfp_repr_pcpu_stats* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_2, unsigned int VAR_3,
        int VAR_4)
{
 struct nfp_repr *VAR_5 = FUNC_0(VAR_2);
 struct nfp_repr_pcpu_stats *VAR_6;

 if (FUNC_5(VAR_4 != VAR_1 &&
       VAR_4 != VAR_0)) {
  FUNC_1(VAR_5->stats->tx_drops);
  return;
 }

 VAR_6 = FUNC_2(VAR_5->stats);
 FUNC_3(&VAR_6->syncp);
 VAR_6->tx_packets++;
 VAR_6->tx_bytes += VAR_3;
 FUNC_4(&VAR_6->syncp);
}
