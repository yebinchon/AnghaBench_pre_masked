
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct emac_instance {int estats; int stats; } ;


 int FUNC_0 (int *,int *,int) ;
 struct emac_instance* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
        struct ethtool_stats *VAR_1,
        u64 * VAR_2)
{
 struct emac_instance *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, &VAR_3->stats, sizeof(VAR_3->stats));
 VAR_2 += sizeof(VAR_3->stats) / sizeof(u64);
 FUNC_0(VAR_2, &VAR_3->estats, sizeof(VAR_3->estats));
}
