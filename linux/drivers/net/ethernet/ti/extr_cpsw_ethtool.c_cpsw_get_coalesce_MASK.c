
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;
struct cpsw_common {int coal_intvl; } ;


 struct cpsw_common* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_0, struct ethtool_coalesce *VAR_1)
{
 struct cpsw_common *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_coalesce_usecs = VAR_2->coal_intvl;
 return 0;
}
