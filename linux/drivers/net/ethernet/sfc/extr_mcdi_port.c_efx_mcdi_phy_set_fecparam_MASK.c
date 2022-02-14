
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ethtool_fecparam {int fec; } ;
struct efx_nic {int fec_config; int loopback_mode; int link_advertising; struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int forced_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_2,
         const struct ethtool_fecparam *VAR_3)
{
 struct efx_mcdi_phy_data *VAR_4 = VAR_2->phy_data;
 u32 VAR_5;
 int VAR_6;




 if (FUNC_4(VAR_0, VAR_2->link_advertising))
  VAR_5 = (FUNC_3(VAR_2->link_advertising) |
   1 << VAR_1);
 else
  VAR_5 = VAR_4->forced_cap;

 VAR_5 |= FUNC_2(VAR_3->fec);
 VAR_6 = FUNC_1(VAR_2, VAR_5, FUNC_0(VAR_2),
          VAR_2->loopback_mode, 0);
 if (VAR_6)
  return VAR_6;


 VAR_2->fec_config = VAR_3->fec;
 return 0;
}
