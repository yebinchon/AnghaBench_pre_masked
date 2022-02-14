
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; } ;
struct efx_mcdi_iface {scalar_t__ mode; int resprc; int new_epoch; int iface_lock; int credits; scalar_t__ resp_data_len; scalar_t__ resp_hdr_len; } ;
struct TYPE_2__ {int (* mcdi_reboot_detected ) (struct efx_nic*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 scalar_t__ FUNC_1 (struct efx_mcdi_iface*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_mcdi_iface*) ;
 int FUNC_4 (struct efx_nic*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct efx_nic *VAR_4, int VAR_5)
{
 struct efx_mcdi_iface *VAR_6 = FUNC_0(VAR_4);
 FUNC_5(&VAR_6->iface_lock);
 FUNC_3(VAR_6);

 if (FUNC_1(VAR_6)) {
  if (VAR_6->mode == VAR_0) {
   VAR_6->resprc = VAR_5;
   VAR_6->resp_hdr_len = 0;
   VAR_6->resp_data_len = 0;
   ++VAR_6->credits;
  }
 } else {
  int VAR_7;


  for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
   VAR_5 = FUNC_2(VAR_4);
   if (VAR_5)
    break;
   FUNC_8(VAR_2);
  }







  if (!VAR_5 && VAR_4->type->mcdi_reboot_detected)
   VAR_4->type->mcdi_reboot_detected(VAR_4);

  VAR_6->new_epoch = 1;


  FUNC_4(VAR_4, VAR_3);
 }

 FUNC_6(&VAR_6->iface_lock);
}
