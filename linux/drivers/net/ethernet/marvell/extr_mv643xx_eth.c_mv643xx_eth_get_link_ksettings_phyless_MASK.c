
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv643xx_eth_private {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int speed; int autoneg; scalar_t__ phy_address; int port; int duplex; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ) ;

__attribute__((used)) static int
FUNC_2(struct mv643xx_eth_private *VAR_12,
           struct ethtool_link_ksettings *VAR_13)
{
 u32 VAR_14;
 u32 VAR_15, VAR_16;

 VAR_14 = FUNC_1(VAR_12, VAR_7);

 VAR_15 = VAR_11;
 VAR_16 = VAR_0;
 switch (VAR_14 & VAR_6) {
 case 130:
  VAR_13->base.speed = VAR_8;
  break;
 case 129:
  VAR_13->base.speed = VAR_9;
  break;
 case 128:
  VAR_13->base.speed = VAR_10;
  break;
 default:
  VAR_13->base.speed = -1;
  break;
 }
 VAR_13->base.duplex = (VAR_14 & VAR_4) ?
  VAR_2 : VAR_3;
 VAR_13->base.port = VAR_5;
 VAR_13->base.phy_address = 0;
 VAR_13->base.autoneg = VAR_1;

 FUNC_0(VAR_13->link_modes.supported,
      VAR_15);
 FUNC_0(VAR_13->link_modes.advertising,
      VAR_16);

 return 0;
}
