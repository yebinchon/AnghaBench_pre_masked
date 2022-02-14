
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct netcp_intf {int dummy; } ;
struct net_device {int dummy; } ;
struct gbe_priv {int hw_stats_lock; } ;
struct gbe_intf {struct gbe_priv* gbe_dev; } ;
struct ethtool_stats {int dummy; } ;


 scalar_t__ FUNC_0 (struct gbe_priv*) ;
 int FUNC_1 (struct gbe_priv*,int *) ;
 int FUNC_2 (struct gbe_priv*,int *) ;
 struct gbe_intf* FUNC_3 (struct netcp_intf*) ;
 struct netcp_intf* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0,
           struct ethtool_stats *VAR_1,
           uint64_t *VAR_2)
{
 struct netcp_intf *VAR_3 = FUNC_4(VAR_0);
 struct gbe_intf *VAR_4;
 struct gbe_priv *VAR_5;

 VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4)
  return;

 VAR_5 = VAR_4->gbe_dev;
 FUNC_5(&VAR_5->hw_stats_lock);
 if (FUNC_0(VAR_5))
  FUNC_2(VAR_5, VAR_2);
 else
  FUNC_1(VAR_5, VAR_2);
 FUNC_6(&VAR_5->hw_stats_lock);
}
