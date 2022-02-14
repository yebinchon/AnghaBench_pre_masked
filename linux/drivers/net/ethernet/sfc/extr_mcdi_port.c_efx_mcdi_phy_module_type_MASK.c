
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct efx_nic {struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {scalar_t__ media; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct efx_nic*,int ,int ) ;

__attribute__((used)) static u32 FUNC_1(struct efx_nic *VAR_2)
{
 struct efx_mcdi_phy_data *VAR_3 = VAR_2->phy_data;

 if (VAR_3->media != VAR_0)
  return VAR_3->media;




 switch (FUNC_0(VAR_2, 0, 0)) {
 case 0x3:
  return VAR_1;
 case 0xc:
 case 0xd:
  return VAR_0;
 default:
  return 0;
 }
}
