
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int pcs_speed; int pcs_duplex; int pcs_link; } ;
struct stmmac_priv {int phylink; int ioaddr; TYPE_2__ xstats; TYPE_1__* hw; } ;
struct rgmii_adv {int pause; int lp_pause; scalar_t__ lp_duplex; scalar_t__ duplex; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int lp_advertising; int advertising; int supported; } ;
struct TYPE_7__ {int autoneg; int port; int speed; int duplex; } ;
struct ethtool_link_ksettings {TYPE_4__ link_modes; TYPE_3__ base; } ;
struct TYPE_5__ {int pcs; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int*,int ) ;
 struct stmmac_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct ethtool_link_ksettings*) ;
 scalar_t__ FUNC_4 (struct stmmac_priv*,int ,struct rgmii_adv*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_24,
          struct ethtool_link_ksettings *VAR_25)
{
 struct stmmac_priv *VAR_26 = FUNC_2(VAR_24);

 if (VAR_26->hw->pcs & VAR_15 ||
     VAR_26->hw->pcs & VAR_16) {
  struct rgmii_adv VAR_27;
  u32 VAR_28, VAR_29, VAR_30;

  if (!VAR_26->xstats.pcs_link) {
   VAR_25->base.speed = VAR_12;
   VAR_25->base.duplex = VAR_9;
   return 0;
  }
  VAR_25->base.duplex = VAR_26->xstats.pcs_duplex;

  VAR_25->base.speed = VAR_26->xstats.pcs_speed;


  if (FUNC_4(VAR_26, VAR_26->ioaddr, &VAR_27))
   return -VAR_10;



  FUNC_1(
   &VAR_28, VAR_25->link_modes.supported);
  FUNC_1(
   &VAR_29, VAR_25->link_modes.advertising);
  FUNC_1(
   &VAR_30, VAR_25->link_modes.lp_advertising);

  if (VAR_27.pause & VAR_14)
   VAR_29 |= VAR_8;
  if (VAR_27.pause & VAR_13)
   VAR_29 |= VAR_6;
  if (VAR_27.lp_pause & VAR_14)
   VAR_30 |= VAR_8;
  if (VAR_27.lp_pause & VAR_13)
   VAR_30 |= VAR_6;


  VAR_25->base.autoneg = VAR_7;
  VAR_28 |= VAR_23;
  VAR_29 |= VAR_7;
  VAR_30 |= VAR_7;

  if (VAR_27.duplex) {
   VAR_28 |= (VAR_17 |
          VAR_19 |
          VAR_21);
   VAR_29 |= (VAR_0 |
     VAR_2 |
     VAR_4);
  } else {
   VAR_28 |= (VAR_18 |
          VAR_20 |
          VAR_22);
   VAR_29 |= (VAR_1 |
     VAR_3 |
     VAR_5);
  }
  if (VAR_27.lp_duplex)
   VAR_30 |= (VAR_0 |
        VAR_2 |
        VAR_4);
  else
   VAR_30 |= (VAR_1 |
        VAR_3 |
        VAR_5);
  VAR_25->base.port = VAR_11;

  FUNC_0(
   VAR_25->link_modes.supported, VAR_28);
  FUNC_0(
   VAR_25->link_modes.advertising, VAR_29);
  FUNC_0(
   VAR_25->link_modes.lp_advertising, VAR_30);

  return 0;
 }

 return FUNC_3(VAR_26->phylink, VAR_25);
}
