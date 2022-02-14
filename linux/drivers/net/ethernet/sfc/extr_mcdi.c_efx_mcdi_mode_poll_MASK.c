
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int mcdi; } ;
struct efx_mcdi_iface {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_mcdi_iface*) ;

void FUNC_2(struct efx_nic *VAR_2)
{
 struct efx_mcdi_iface *VAR_3;

 if (!VAR_2->mcdi)
  return;

 VAR_3 = FUNC_0(VAR_2);




 if (VAR_3->mode == VAR_1 || VAR_3->mode == VAR_0)
  return;
 VAR_3->mode = VAR_1;

 FUNC_1(VAR_3);
}
