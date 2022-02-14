
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {struct adapter* ml_priv; } ;
struct ethtool_coalesce {int use_adaptive_rx_coalesce; int rate_sample_interval; int rx_coalesce_usecs; } ;
struct TYPE_4__ {int coalesce_enable; int sample_interval_usecs; int rx_coalesce_usecs; } ;
struct TYPE_3__ {TYPE_2__ sge; } ;
struct adapter {TYPE_1__ params; } ;



__attribute__((used)) static int FUNC_0(struct net_device *VAR_0, struct ethtool_coalesce *VAR_1)
{
 struct adapter *VAR_2 = VAR_0->ml_priv;

 VAR_1->rx_coalesce_usecs = VAR_2->params.sge.rx_coalesce_usecs;
 VAR_1->rate_sample_interval = VAR_2->params.sge.sample_interval_usecs;
 VAR_1->use_adaptive_rx_coalesce = VAR_2->params.sge.coalesce_enable;
 return 0;
}
