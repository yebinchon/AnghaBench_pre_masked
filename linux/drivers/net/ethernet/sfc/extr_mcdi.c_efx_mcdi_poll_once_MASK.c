
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; } ;
struct efx_mcdi_iface {int iface_lock; } ;
struct TYPE_2__ {int (* mcdi_poll_response ) (struct efx_nic*) ;} ;


 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct efx_nic*) ;

__attribute__((used)) static bool FUNC_6(struct efx_nic *VAR_0)
{
 struct efx_mcdi_iface *VAR_1 = FUNC_0(VAR_0);

 FUNC_2();
 if (!VAR_0->type->mcdi_poll_response(VAR_0))
  return 0;

 FUNC_3(&VAR_1->iface_lock);
 FUNC_1(VAR_0);
 FUNC_4(&VAR_1->iface_lock);

 return 1;
}
