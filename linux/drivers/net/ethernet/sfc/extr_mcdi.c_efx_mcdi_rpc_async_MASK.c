
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
typedef int efx_mcdi_async_completer ;
typedef int efx_dword_t ;


 int FUNC_0 (struct efx_nic*,unsigned int,int const*,size_t,size_t,int *,unsigned long,int) ;

int
FUNC_1(struct efx_nic *VAR_0, unsigned int VAR_1,
     const efx_dword_t *VAR_2, size_t VAR_3, size_t VAR_4,
     efx_mcdi_async_completer *VAR_5, unsigned long VAR_6)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
       VAR_6, 0);
}
