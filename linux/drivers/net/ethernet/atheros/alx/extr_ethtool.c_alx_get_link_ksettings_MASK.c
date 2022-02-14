
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int duplex; int speed; int autoneg; scalar_t__ phy_address; int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;
struct alx_hw {int adv_cfg; int flowctrl; int duplex; int link_speed; } ;
struct alx_priv {struct alx_hw hw; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct alx_hw*) ;
 scalar_t__ FUNC_1 (struct alx_hw*) ;
 int FUNC_2 (int ,int) ;
 struct alx_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_15,
      struct ethtool_link_ksettings *VAR_16)
{
 struct alx_priv *VAR_17 = FUNC_3(VAR_15);
 struct alx_hw *VAR_18 = &VAR_17->hw;
 u32 VAR_19, VAR_20;

 VAR_19 = VAR_12 |
     VAR_14 |
     VAR_13 |
     VAR_11;
 if (FUNC_1(VAR_18))
  VAR_19 |= VAR_10;
 VAR_19 |= FUNC_0(VAR_18);

 VAR_20 = VAR_3;
 if (VAR_18->adv_cfg & VAR_1)
  VAR_20 |= VAR_18->adv_cfg;

 VAR_16->base.port = VAR_9;
 VAR_16->base.phy_address = 0;

 if (VAR_18->adv_cfg & VAR_1)
  VAR_16->base.autoneg = VAR_8;
 else
  VAR_16->base.autoneg = VAR_7;

 if (VAR_18->flowctrl & VAR_4 && VAR_18->adv_cfg & VAR_1) {
  if (VAR_18->flowctrl & VAR_5) {
   VAR_20 |= VAR_2;

   if (!(VAR_18->flowctrl & VAR_6))
    VAR_20 |= VAR_0;
  } else if (VAR_18->flowctrl & VAR_6) {
   VAR_20 |= VAR_0;
  }
 }

 VAR_16->base.speed = VAR_18->link_speed;
 VAR_16->base.duplex = VAR_18->duplex;

 FUNC_2(VAR_16->link_modes.supported,
      VAR_19);
 FUNC_2(VAR_16->link_modes.advertising,
      VAR_20);

 return 0;
}
