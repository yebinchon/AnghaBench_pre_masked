
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_dstats {int rx_bytes; int syncp; int rx_pkts; } ;
struct net_device {int dstats; } ;


 struct pcpu_dstats* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 struct pcpu_dstats *VAR_2 = FUNC_0(VAR_0->dstats);

 FUNC_1(&VAR_2->syncp);
 VAR_2->rx_pkts++;
 VAR_2->rx_bytes += VAR_1;
 FUNC_2(&VAR_2->syncp);
}
