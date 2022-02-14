
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {int phy_mode; struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int flags; } ;
typedef enum efx_phy_mode { ____Placeholder_efx_phy_mode } efx_phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static u32 FUNC_0(struct efx_nic *VAR_9)
{
 struct efx_mcdi_phy_data *VAR_10 = VAR_9->phy_data;
 enum efx_phy_mode VAR_11, VAR_12;
 u32 VAR_13;


 VAR_12 = 0;
 if (VAR_10->flags & (1 << VAR_2))
  VAR_12 |= VAR_8;
 if (VAR_10->flags & (1 << VAR_0))
  VAR_12 |= VAR_6;
 if (VAR_10->flags & (1 << VAR_1))
  VAR_12 |= VAR_7;

 VAR_11 = VAR_9->phy_mode & VAR_12;

 VAR_13 = 0;
 if (VAR_11 & VAR_8)
  VAR_13 |= (1 << VAR_5);
 if (VAR_11 & VAR_6)
  VAR_13 |= (1 << VAR_3);
 if (VAR_11 & VAR_7)
  VAR_13 |= (1 << VAR_4);

 return VAR_13;
}
