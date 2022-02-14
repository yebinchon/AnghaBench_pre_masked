
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct efx_ef10_nic_data {TYPE_1__ mcdi_buf; } ;
typedef int efx_dword_t ;


 int FUNC_0 (int const,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct efx_nic *VAR_1)
{
 struct efx_ef10_nic_data *VAR_2 = VAR_1->nic_data;
 const efx_dword_t VAR_3 = *(const efx_dword_t *)VAR_2->mcdi_buf.addr;

 FUNC_1();
 return FUNC_0(VAR_3, VAR_0);
}
