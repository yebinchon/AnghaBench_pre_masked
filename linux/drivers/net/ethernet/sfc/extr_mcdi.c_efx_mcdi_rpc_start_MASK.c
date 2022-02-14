
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ mc_bist_for_other_fn; } ;
struct efx_mcdi_iface {scalar_t__ mode; } ;
typedef int efx_dword_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct efx_mcdi_iface* FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_mcdi_iface*) ;
 int FUNC_2 (struct efx_nic*,unsigned int,size_t) ;
 int FUNC_3 (struct efx_nic*,unsigned int,int const*,size_t) ;

int FUNC_4(struct efx_nic *VAR_2, unsigned VAR_3,
         const efx_dword_t *VAR_4, size_t VAR_5)
{
 struct efx_mcdi_iface *VAR_6 = FUNC_0(VAR_2);
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_2->mc_bist_for_other_fn)
  return -VAR_0;

 if (VAR_6->mode == VAR_1)
  return -VAR_0;

 FUNC_1(VAR_6);
 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 return 0;
}
