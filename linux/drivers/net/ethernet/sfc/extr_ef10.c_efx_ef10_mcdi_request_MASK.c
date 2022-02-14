
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct efx_nic {struct efx_ef10_nic_data* nic_data; } ;
struct TYPE_2__ {scalar_t__ dma_addr; int * addr; } ;
struct efx_ef10_nic_data {TYPE_1__ mcdi_buf; } ;
typedef int efx_dword_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct efx_nic *VAR_2,
      const efx_dword_t *VAR_3, size_t VAR_4,
      const efx_dword_t *VAR_5, size_t VAR_6)
{
 struct efx_ef10_nic_data *VAR_7 = VAR_2->nic_data;
 u8 *VAR_8 = VAR_7->mcdi_buf.addr;

 FUNC_2(VAR_8, VAR_3, VAR_4);
 FUNC_2(VAR_8 + VAR_4, VAR_5, VAR_6);
 FUNC_3();







 FUNC_0(VAR_2, FUNC_1((u64)VAR_7->mcdi_buf.dma_addr >> 32),
      VAR_1);
 FUNC_0(VAR_2, FUNC_1((u32)VAR_7->mcdi_buf.dma_addr),
      VAR_0);
}
