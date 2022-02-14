
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* ptp_set_ts_sync_events ) (struct efx_nic*,int,int) ;} ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int,int) ;

void FUNC_2(struct efx_nic *VAR_0)
{

 if (VAR_0->type->ptp_set_ts_sync_events)
  VAR_0->type->ptp_set_ts_sync_events(VAR_0, 0, 1);
 FUNC_0(VAR_0);
}
