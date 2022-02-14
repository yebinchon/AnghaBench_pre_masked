
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; int net_dev; } ;
struct TYPE_2__ {int (* ptp_set_ts_sync_events ) (struct efx_nic*,int,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_2 (struct efx_nic*,int,int) ;

void FUNC_3(struct efx_nic *VAR_1)
{
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1, VAR_0, VAR_1->net_dev, "Failed to restart PTP.\n");

 if (VAR_1->type->ptp_set_ts_sync_events)
  VAR_1->type->ptp_set_ts_sync_events(VAR_1, 1, 1);
}
