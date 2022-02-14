
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lb_stats {unsigned int tx_bytes; } ;
struct lb_priv {int pcpu_stats; } ;
struct lb_port_priv {int pcpu_stats; } ;
struct lb_pcpu_stats {int syncp; struct lb_stats* hash_stats; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_0, struct lb_priv *VAR_1,
          struct lb_port_priv *VAR_2,
          unsigned char VAR_3)
{
 struct lb_pcpu_stats *VAR_4;
 struct lb_stats *VAR_5;
 struct lb_stats *VAR_6;

 VAR_4 = FUNC_0(VAR_1->pcpu_stats);
 VAR_5 = FUNC_0(VAR_2->pcpu_stats);
 VAR_6 = &VAR_4->hash_stats[VAR_3];
 FUNC_1(&VAR_4->syncp);
 VAR_5->tx_bytes += VAR_0;
 VAR_6->tx_bytes += VAR_0;
 FUNC_2(&VAR_4->syncp);
}
