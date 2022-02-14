
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifreq {int ifr_data; } ;
struct efx_nic {TYPE_1__* ptp_data; } ;
struct TYPE_2__ {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;

int FUNC_1(struct efx_nic *VAR_2, struct ifreq *VAR_3)
{
 if (!VAR_2->ptp_data)
  return -VAR_1;

 return FUNC_0(VAR_3->ifr_data, &VAR_2->ptp_data->config,
       sizeof(VAR_2->ptp_data->config)) ? -VAR_0 : 0;
}
