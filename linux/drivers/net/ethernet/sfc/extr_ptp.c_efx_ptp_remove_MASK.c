
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* ptp_data; } ;
struct TYPE_2__ {int start; int workwq; scalar_t__ phc_clock; int pps_workwq; int txq; int rxq; int pps_work; int work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct efx_nic*,int *) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct efx_nic *VAR_0)
{
 if (!VAR_0->ptp_data)
  return;

 (void)FUNC_3(VAR_0);

 FUNC_0(&VAR_0->ptp_data->work);
 FUNC_0(&VAR_0->ptp_data->pps_work);

 FUNC_6(&VAR_0->ptp_data->rxq);
 FUNC_6(&VAR_0->ptp_data->txq);

 if (VAR_0->ptp_data->phc_clock) {
  FUNC_1(VAR_0->ptp_data->pps_workwq);
  FUNC_5(VAR_0->ptp_data->phc_clock);
 }

 FUNC_1(VAR_0->ptp_data->workwq);

 FUNC_2(VAR_0, &VAR_0->ptp_data->start);
 FUNC_4(VAR_0->ptp_data);
 VAR_0->ptp_data = ((void*)0);
}
