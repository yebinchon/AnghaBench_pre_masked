
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int access_lock; int curr_stat; } ;
struct lan78xx_net {TYPE_1__ stats; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (struct lan78xx_net*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct lan78xx_net* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
         struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct lan78xx_net *VAR_3 = FUNC_4(VAR_0);

 FUNC_0(VAR_3);

 FUNC_2(&VAR_3->stats.access_lock);
 FUNC_1(VAR_2, &VAR_3->stats.curr_stat, sizeof(VAR_3->stats.curr_stat));
 FUNC_3(&VAR_3->stats.access_lock);
}
