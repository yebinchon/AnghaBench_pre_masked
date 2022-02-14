
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_tx_queue {int completed_timestamp_minor; int completed_timestamp_major; struct efx_nic* efx; } ;
struct TYPE_2__ {int general_tx; } ;
struct efx_ptp_data {TYPE_1__ ts_corrections; int (* nic_to_kernel_time ) (int ,int ,int ) ;} ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;
typedef int ktime_t ;


 int FUNC_0 (struct efx_nic*,struct efx_ptp_data*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (int ,int ,int ) ;

ktime_t FUNC_3(struct efx_tx_queue *VAR_0)
{
 struct efx_nic *VAR_1 = VAR_0->efx;
 struct efx_ptp_data *VAR_2 = VAR_1->ptp_data;
 ktime_t VAR_3;

 if (FUNC_1(VAR_1))
  VAR_3 = FUNC_0(VAR_1, VAR_2,
    VAR_0->completed_timestamp_major,
    VAR_0->completed_timestamp_minor,
    VAR_2->ts_corrections.general_tx);
 else
  VAR_3 = VAR_2->nic_to_kernel_time(
    VAR_0->completed_timestamp_major,
    VAR_0->completed_timestamp_minor,
    VAR_2->ts_corrections.general_tx);
 return VAR_3;
}
