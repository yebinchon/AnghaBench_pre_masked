
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct TYPE_2__ {int * addr; } ;
struct efx_ef10_nic_data {TYPE_1__ mcdi_buf; } ;
typedef int efx_dword_t ;


 int FUNC_0 (int *,int const*,size_t) ;

__attribute__((used)) static void
FUNC_1(struct efx_nic *VAR_0, efx_dword_t *VAR_1,
       size_t VAR_2, size_t VAR_3)
{
 struct efx_ef10_nic_data *VAR_4 = VAR_0->nic_data;
 const u8 *VAR_5 = VAR_4->mcdi_buf.addr;

 FUNC_0(VAR_1, VAR_5 + VAR_2, VAR_3);
}
