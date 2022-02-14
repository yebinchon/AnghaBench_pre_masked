
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {TYPE_2__* type; TYPE_1__* phy_op; scalar_t__ port_initialized; int rss_lock; int filter_sem; int mac_lock; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;
struct TYPE_4__ {int (* fini ) (struct efx_nic*) ;int (* prepare_flr ) (struct efx_nic*) ;} ;
struct TYPE_3__ {int (* fini ) (struct efx_nic*) ;} ;


 int FUNC_0 (struct efx_nic*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*) ;

void FUNC_8(struct efx_nic *VAR_3, enum reset_type VAR_4)
{
 FUNC_0(VAR_3);

 if (VAR_4 == VAR_2)
  VAR_3->type->prepare_flr(VAR_3);

 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 FUNC_4(&VAR_3->mac_lock);
 FUNC_1(&VAR_3->filter_sem);
 FUNC_4(&VAR_3->rss_lock);
 if (VAR_3->port_initialized && VAR_4 != VAR_1 &&
     VAR_4 != VAR_0)
  VAR_3->phy_op->fini(VAR_3);
 VAR_3->type->fini(VAR_3);
}
