
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int supported_cap; } ;



u32 FUNC_0(struct efx_nic *VAR_0)
{
 struct efx_mcdi_phy_data *VAR_1 = VAR_0->phy_data;

 return VAR_1->supported_cap;
}
