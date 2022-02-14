
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int advertising; } ;
struct TYPE_3__ {int speed; scalar_t__ autoneg; scalar_t__ duplex; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;
struct efx_nic {int loopback_mode; int fec_config; struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int forced_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int ) ;
 int FUNC_3 (struct efx_nic*,int,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct efx_nic *VAR_13,
    const struct ethtool_link_ksettings *VAR_14)
{
 struct efx_mcdi_phy_data *VAR_15 = VAR_13->phy_data;
 u32 VAR_16;
 int VAR_17;

 if (VAR_14->base.autoneg) {
  VAR_16 = (FUNC_5(VAR_14->link_modes.advertising) |
   1 << VAR_12);
 } else if (VAR_14->base.duplex) {
  switch (VAR_14->base.speed) {
  case 10: VAR_16 = 1 << VAR_7; break;
  case 100: VAR_16 = 1 << VAR_5; break;
  case 1000: VAR_16 = 1 << VAR_3; break;
  case 10000: VAR_16 = 1 << VAR_2; break;
  case 40000: VAR_16 = 1 << VAR_10; break;
  case 100000: VAR_16 = 1 << VAR_1; break;
  case 25000: VAR_16 = 1 << VAR_9; break;
  case 50000: VAR_16 = 1 << VAR_11; break;
  default: return -VAR_0;
  }
 } else {
  switch (VAR_14->base.speed) {
  case 10: VAR_16 = 1 << VAR_8; break;
  case 100: VAR_16 = 1 << VAR_6; break;
  case 1000: VAR_16 = 1 << VAR_4; break;
  default: return -VAR_0;
  }
 }

 VAR_16 |= FUNC_4(VAR_13->fec_config);

 VAR_17 = FUNC_3(VAR_13, VAR_16, FUNC_0(VAR_13),
          VAR_13->loopback_mode, 0);
 if (VAR_17)
  return VAR_17;

 if (VAR_14->base.autoneg) {
  FUNC_2(VAR_13, VAR_14->link_modes.advertising);
  VAR_15->forced_cap = 0;
 } else {
  FUNC_1(VAR_13);
  VAR_15->forced_cap = VAR_16;
 }
 return 0;
}
