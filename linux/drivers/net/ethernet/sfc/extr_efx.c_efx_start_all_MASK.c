
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {scalar_t__ state; int stats_lock; TYPE_2__* type; int mac_lock; TYPE_1__* phy_op; int monitor_work; int workqueue; scalar_t__ reset_pending; int net_dev; scalar_t__ port_enabled; } ;
struct TYPE_4__ {int (* update_stats ) (struct efx_nic*,int *,int *) ;int (* pull_stats ) (struct efx_nic*) ;int (* start_stats ) (struct efx_nic*) ;int * monitor; } ;
struct TYPE_3__ {scalar_t__ (* poll ) (struct efx_nic*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_nic*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct efx_nic*) ;
 int VAR_1 ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct efx_nic*) ;
 int FUNC_12 (struct efx_nic*) ;
 int FUNC_13 (struct efx_nic*) ;
 int FUNC_14 (struct efx_nic*,int *,int *) ;

__attribute__((used)) static void FUNC_15(struct efx_nic *VAR_2)
{
 FUNC_1(VAR_2);
 FUNC_0(VAR_2->state == VAR_0);



 if (VAR_2->port_enabled || !FUNC_7(VAR_2->net_dev) ||
     VAR_2->reset_pending)
  return;

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);


 if (VAR_2->type->monitor != ((void*)0))
  FUNC_8(VAR_2->workqueue, &VAR_2->monitor_work,
       VAR_1);




 FUNC_5(&VAR_2->mac_lock);
 if (VAR_2->phy_op->poll(VAR_2))
  FUNC_2(VAR_2);
 FUNC_6(&VAR_2->mac_lock);

 VAR_2->type->start_stats(VAR_2);
 VAR_2->type->pull_stats(VAR_2);
 FUNC_9(&VAR_2->stats_lock);
 VAR_2->type->update_stats(VAR_2, ((void*)0), ((void*)0));
 FUNC_10(&VAR_2->stats_lock);
}
