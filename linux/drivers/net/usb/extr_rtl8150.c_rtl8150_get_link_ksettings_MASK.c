
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_7__ {int supported; } ;
struct TYPE_6__ {void* duplex; scalar_t__ speed; int autoneg; int phy_address; int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;
struct TYPE_8__ {int phy; } ;
typedef TYPE_3__ rtl8150_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 short VAR_9 ;
 short VAR_10 ;
 short VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,int ,int,short*) ;
 TYPE_3__* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_22,
          struct ethtool_link_ksettings *VAR_23)
{
 rtl8150_t *VAR_24 = FUNC_2(VAR_22);
 short VAR_25, VAR_26;
 u32 VAR_27;

 VAR_27 = (VAR_18 |
     VAR_17 |
     VAR_16 |
     VAR_15 |
     VAR_19 |
     VAR_21 | VAR_20);
 VAR_23->base.port = VAR_12;
 VAR_23->base.phy_address = VAR_24->phy;
 FUNC_1(VAR_24, VAR_3, 2, &VAR_26);
 FUNC_1(VAR_24, VAR_0, 2, &VAR_25);
 if (VAR_26 & VAR_4) {
  u32 VAR_28 = ((VAR_25 & (VAR_10 | VAR_9)) ?
        VAR_14 : VAR_13);
  VAR_23->base.speed = VAR_28;
  VAR_23->base.autoneg = VAR_2;
  if (VAR_28 == VAR_14)
   VAR_23->base.duplex = (VAR_25 & VAR_9) ?
       VAR_7 : VAR_8;
  else
   VAR_23->base.duplex = (VAR_25 & VAR_11) ?
       VAR_7 : VAR_8;
 } else {
  VAR_23->base.autoneg = VAR_1;
  VAR_23->base.speed = ((VAR_26 & VAR_6) ?
          VAR_14 : VAR_13);
  VAR_23->base.duplex = (VAR_26 & VAR_5) ?
      VAR_7 : VAR_8;
 }

 FUNC_0(VAR_23->link_modes.supported,
      VAR_27);

 return 0;
}
