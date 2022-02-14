
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct emac_adapter {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct emac_adapter*) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 struct emac_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
       struct ethtool_stats *VAR_2,
       u64 *VAR_3)
{
 struct emac_adapter *VAR_4 = FUNC_2(VAR_1);

 FUNC_3(&VAR_4->stats.lock);

 FUNC_0(VAR_4);
 FUNC_1(VAR_3, &VAR_4->stats, VAR_0 * sizeof(u64));

 FUNC_4(&VAR_4->stats.lock);
}
