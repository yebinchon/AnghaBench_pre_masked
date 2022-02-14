
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xgene_enet_pdata {int * extd_stats; } ;
struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_2__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct rtnl_link_stats64*) ;
 TYPE_1__* VAR_2 ;
 struct xgene_enet_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct xgene_enet_pdata*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3,
        struct ethtool_stats *VAR_4,
        u64 *VAR_5)
{
 struct xgene_enet_pdata *VAR_6 = FUNC_1(VAR_3);
 struct rtnl_link_stats64 VAR_7;
 int VAR_8;

 FUNC_0(VAR_3, &VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_5[VAR_8] = *(u64 *)((char *)&VAR_7 + VAR_2[VAR_8].offset);

 FUNC_2(VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_5[VAR_8 + VAR_1] = VAR_6->extd_stats[VAR_8];
}
