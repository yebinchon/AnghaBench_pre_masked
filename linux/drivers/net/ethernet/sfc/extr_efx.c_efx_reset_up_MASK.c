
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {int port_initialized; int mac_lock; int filter_sem; int rss_lock; TYPE_2__* type; int net_dev; TYPE_1__* phy_op; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
struct TYPE_4__ {int (* init ) (struct efx_nic*) ;int (* vswitching_restore ) (struct efx_nic*) ;int (* udp_tnl_push_ports ) (struct efx_nic*) ;int (* sriov_reset ) (struct efx_nic*) ;int (* filter_table_restore ) (struct efx_nic*) ;int (* rx_restore_rss_contexts ) (struct efx_nic*) ;int (* finish_flr ) (struct efx_nic*) ;} ;
struct TYPE_3__ {int (* init ) (struct efx_nic*) ;int (* reconfigure ) (struct efx_nic*) ;} ;


 int FUNC_0 (struct efx_nic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,int) ;
 int VAR_5 ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;
 int FUNC_11 (struct efx_nic*) ;
 int FUNC_12 (struct efx_nic*) ;
 int FUNC_13 (struct efx_nic*) ;
 int FUNC_14 (struct efx_nic*) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct efx_nic *VAR_6, enum reset_type VAR_7, bool VAR_8)
{
 int VAR_9;

 FUNC_0(VAR_6);

 if (VAR_7 == VAR_3)
  VAR_6->type->finish_flr(VAR_6);


 VAR_9 = VAR_6->type->init(VAR_6);
 if (VAR_9) {
  FUNC_4(VAR_6, VAR_4, VAR_6->net_dev, "failed to initialise NIC\n");
  goto fail;
 }

 if (!VAR_8)
  goto fail;

 if (VAR_6->port_initialized && VAR_7 != VAR_2 &&
     VAR_7 != VAR_1) {
  VAR_9 = VAR_6->phy_op->init(VAR_6);
  if (VAR_9)
   goto fail;
  VAR_9 = VAR_6->phy_op->reconfigure(VAR_6);
  if (VAR_9 && VAR_9 != -VAR_0)
   FUNC_4(VAR_6, VAR_4, VAR_6->net_dev,
      "could not restore PHY settings\n");
 }

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9)
  goto fail;
 if (VAR_6->type->rx_restore_rss_contexts)
  VAR_6->type->rx_restore_rss_contexts(VAR_6);
 FUNC_3(&VAR_6->rss_lock);
 VAR_6->type->filter_table_restore(VAR_6);
 FUNC_15(&VAR_6->filter_sem);
 if (VAR_6->type->sriov_reset)
  VAR_6->type->sriov_reset(VAR_6);

 FUNC_3(&VAR_6->mac_lock);

 FUNC_2(VAR_6);

 if (VAR_6->type->udp_tnl_push_ports)
  VAR_6->type->udp_tnl_push_ports(VAR_6);

 return 0;

fail:
 VAR_6->port_initialized = 0;

 FUNC_3(&VAR_6->rss_lock);
 FUNC_15(&VAR_6->filter_sem);
 FUNC_3(&VAR_6->mac_lock);

 return VAR_9;
}
