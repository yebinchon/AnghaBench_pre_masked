
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_ptp_data {int reset_required; scalar_t__ current_adjfreq; scalar_t__ evt_frag_idx; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_0)
{
 struct efx_ptp_data *VAR_1 = VAR_0->ptp_data;
 int VAR_2;

 VAR_1->reset_required = 0;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 != 0)
  goto fail;

 VAR_1->evt_frag_idx = 0;
 VAR_1->current_adjfreq = 0;

 return 0;

fail:
 FUNC_2(VAR_0);
 return VAR_2;
}
