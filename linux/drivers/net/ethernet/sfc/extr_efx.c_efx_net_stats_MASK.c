
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct efx_nic {int stats_lock; TYPE_1__* type; } ;
struct TYPE_2__ {int (* update_stats ) (struct efx_nic*,int *,struct rtnl_link_stats64*) ;} ;


 struct efx_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct efx_nic*,int *,struct rtnl_link_stats64*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
     struct rtnl_link_stats64 *VAR_1)
{
 struct efx_nic *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->stats_lock);
 VAR_2->type->update_stats(VAR_2, ((void*)0), VAR_1);
 FUNC_2(&VAR_2->stats_lock);
}
