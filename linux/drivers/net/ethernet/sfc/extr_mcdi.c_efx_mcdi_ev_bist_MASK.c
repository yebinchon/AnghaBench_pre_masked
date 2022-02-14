
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int mc_bist_for_other_fn; } ;
struct efx_mcdi_iface {scalar_t__ mode; int new_epoch; int iface_lock; int credits; scalar_t__ resp_data_len; scalar_t__ resp_hdr_len; int resprc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 scalar_t__ FUNC_1 (struct efx_mcdi_iface*) ;
 int FUNC_2 (struct efx_mcdi_iface*) ;
 int FUNC_3 (struct efx_nic*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct efx_nic *VAR_3)
{
 struct efx_mcdi_iface *VAR_4 = FUNC_0(VAR_3);

 FUNC_4(&VAR_4->iface_lock);
 VAR_3->mc_bist_for_other_fn = 1;
 FUNC_2(VAR_4);

 if (FUNC_1(VAR_4)) {
  if (VAR_4->mode == VAR_1) {
   VAR_4->resprc = -VAR_0;
   VAR_4->resp_hdr_len = 0;
   VAR_4->resp_data_len = 0;
   ++VAR_4->credits;
  }
 }
 VAR_4->new_epoch = 1;
 FUNC_3(VAR_3, VAR_2);
 FUNC_5(&VAR_4->iface_lock);
}
