
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sync_event_minor_shift; } ;
struct efx_ptp_data {TYPE_1__ nic_time; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;
struct efx_channel {int sync_timestamp_major; int sync_timestamp_minor; int sync_events_state; struct efx_nic* efx; } ;
typedef int efx_qword_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(struct efx_channel *VAR_4, efx_qword_t *VAR_5)
{
 struct efx_nic *VAR_6 = VAR_4->efx;
 struct efx_ptp_data *VAR_7 = VAR_6->ptp_data;







 VAR_4->sync_timestamp_major = FUNC_0(*VAR_5, VAR_0);
 VAR_4->sync_timestamp_minor =
  (FUNC_0(*VAR_5, VAR_1) & 0xFC)
   << VAR_7->nic_time.sync_event_minor_shift;




 (void) FUNC_1(&VAR_4->sync_events_state, VAR_2,
         VAR_3);
}
