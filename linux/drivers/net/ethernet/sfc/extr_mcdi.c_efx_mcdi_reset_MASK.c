
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ mcdi; int pci_dev; } ;
struct efx_mcdi_iface {int mode; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct efx_nic *VAR_4, enum reset_type VAR_5)
{
 int VAR_6;


 if (VAR_5 == VAR_2) {
  VAR_6 = FUNC_4(VAR_4->pci_dev);
  if (VAR_6)
   return VAR_6;

  if (VAR_4->mcdi) {
   struct efx_mcdi_iface *VAR_7 = FUNC_0(VAR_4);
   VAR_7->mode = VAR_0;
  }
  return 0;
 }


 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 == VAR_1)
  return 0;
 else if (VAR_5 == VAR_3)
  return FUNC_3(VAR_4);
 else
  return FUNC_2(VAR_4);
}
