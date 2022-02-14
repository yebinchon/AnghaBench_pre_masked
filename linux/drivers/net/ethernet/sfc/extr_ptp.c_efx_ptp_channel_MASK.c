
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* ptp_data; } ;
struct efx_channel {int dummy; } ;
struct TYPE_2__ {struct efx_channel* channel; } ;



struct efx_channel *FUNC_0(struct efx_nic *VAR_0)
{
 return VAR_0->ptp_data ? VAR_0->ptp_data->channel : ((void*)0);
}
