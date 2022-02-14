
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct mvpp2_port {int gather_stats_lock; int nrxqs; int ntxqs; int ethtool_stats; TYPE_1__ stats_work; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mvpp2_port* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0,
        struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct mvpp2_port *VAR_3 = FUNC_5(VAR_0);




 FUNC_4(&VAR_3->stats_work.work);

 FUNC_2(&VAR_3->gather_stats_lock);
 FUNC_1(VAR_2, VAR_3->ethtool_stats,
        sizeof(u64) * FUNC_0(VAR_3->ntxqs, VAR_3->nrxqs));
 FUNC_3(&VAR_3->gather_stats_lock);
}
