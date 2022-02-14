
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* ptp_data; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;


 int FUNC_0 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_1(struct efx_nic *VAR_0)
{
 if (VAR_0->ptp_data && VAR_0->ptp_data->enabled)
  return FUNC_0(VAR_0);
 return 0;
}
