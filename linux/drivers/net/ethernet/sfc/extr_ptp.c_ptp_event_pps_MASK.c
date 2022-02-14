
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_ptp_data {int pps_work; int pps_workwq; scalar_t__ nic_ts_enabled; } ;
struct efx_nic {int dummy; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_0, struct efx_ptp_data *VAR_1)
{
 if (VAR_1->nic_ts_enabled)
  FUNC_0(VAR_1->pps_workwq, &VAR_1->pps_work);
}
