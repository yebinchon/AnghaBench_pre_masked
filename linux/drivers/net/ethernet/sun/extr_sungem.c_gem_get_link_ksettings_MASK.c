
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int advertising; int duplex; int speed; TYPE_1__* def; } ;
struct gem {scalar_t__ phy_type; int want_autoneg; scalar_t__ lstate; TYPE_2__ phy_mii; } ;
struct TYPE_8__ {int advertising; int supported; } ;
struct TYPE_7__ {int autoneg; int duplex; int speed; scalar_t__ port; scalar_t__ phy_address; } ;
struct ethtool_link_ksettings {TYPE_4__ link_modes; TYPE_3__ base; } ;
struct TYPE_5__ {int features; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_14 ;
 struct gem* FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_18,
      struct ethtool_link_ksettings *VAR_19)
{
 struct gem *VAR_20 = FUNC_1(VAR_18);
 u32 VAR_21, VAR_22;

 if (VAR_20->phy_type == VAR_15 ||
     VAR_20->phy_type == VAR_16) {
  if (VAR_20->phy_mii.def)
   VAR_21 = VAR_20->phy_mii.def->features;
  else
   VAR_21 = (VAR_9 |
       VAR_8);


  VAR_19->base.port = VAR_2;
  VAR_19->base.phy_address = 0;


  VAR_19->base.autoneg = VAR_20->want_autoneg;
  VAR_19->base.speed = VAR_20->phy_mii.speed;
  VAR_19->base.duplex = VAR_20->phy_mii.duplex;
  VAR_22 = VAR_20->phy_mii.advertising;





  if (VAR_22 == 0)
   VAR_22 = VAR_21;
 } else {
  VAR_21 =
   (VAR_9 | VAR_8 |
    VAR_7 | VAR_6 |
    VAR_11);
  VAR_22 = VAR_21;
  VAR_19->base.speed = 0;
  VAR_19->base.duplex = 0;
  VAR_19->base.port = 0;
  VAR_19->base.phy_address = 0;
  VAR_19->base.autoneg = 0;


  if (VAR_20->phy_type == VAR_17) {
   VAR_19->base.port = VAR_1;
   VAR_21 = (VAR_5 |
    VAR_4 |
    VAR_12 | VAR_11 |
    VAR_13 | VAR_10);
   VAR_22 = VAR_21;
   if (VAR_20->lstate == VAR_14)
    VAR_19->base.speed = VAR_3;
   VAR_19->base.duplex = VAR_0;
   VAR_19->base.autoneg = 1;
  }
 }

 FUNC_0(VAR_19->link_modes.supported,
      VAR_21);
 FUNC_0(VAR_19->link_modes.advertising,
      VAR_22);

 return 0;
}
