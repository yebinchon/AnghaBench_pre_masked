
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; int mcdi; } ;
struct TYPE_2__ {int (* mcdi_poll_reboot ) (struct efx_nic*) ;} ;


 int FUNC_0 (struct efx_nic*) ;

int FUNC_1(struct efx_nic *VAR_0)
{
 if (!VAR_0->mcdi)
  return 0;

 return VAR_0->type->mcdi_poll_reboot(VAR_0);
}
