
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ionic_lif {int nxqs; TYPE_1__* ionic; } ;
struct ethtool_channels {int combined_count; int max_combined; } ;
struct TYPE_2__ {int ntxqs_per_lif; } ;


 struct ionic_lif* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
          struct ethtool_channels *VAR_1)
{
 struct ionic_lif *VAR_2 = FUNC_0(VAR_0);


 VAR_1->max_combined = VAR_2->ionic->ntxqs_per_lif;


 VAR_1->combined_count = VAR_2->nxqs;
}
