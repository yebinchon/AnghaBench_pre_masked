
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_14__ {int autoneg; int phy_address; int port; int duplex; int speed; int cmd; } ;
struct TYPE_13__ {int lp_advertising; int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_7__ base; TYPE_6__ link_modes; } ;
struct TYPE_12__ {int link_status; int line_speed; int duplex; scalar_t__ link_up; } ;
struct TYPE_11__ {scalar_t__* req_line_speed; TYPE_2__* phy; } ;
struct TYPE_10__ {int prtad; } ;
struct TYPE_8__ {scalar_t__* supported; scalar_t__* advertising; } ;
struct bnx2x {scalar_t__ state; int flags; TYPE_5__ link_vars; TYPE_4__ link_params; TYPE_3__ mdio; TYPE_1__ port; } ;
struct TYPE_9__ {scalar_t__ media_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,scalar_t__,int ,int ,int ,int ,int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 size_t FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (scalar_t__*,int ) ;
 struct bnx2x* FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_39,
        struct ethtool_link_ksettings *VAR_40)
{
 struct bnx2x *VAR_41 = FUNC_9(VAR_39);
 int VAR_42 = FUNC_4(VAR_41);
 u32 VAR_43;
 u32 VAR_44, VAR_45, VAR_46;

 FUNC_8(&VAR_46,
      VAR_40->link_modes.lp_advertising);


 VAR_44 = VAR_41->port.supported[VAR_42] |
  (VAR_41->port.supported[VAR_42 ^ 1] &
   (VAR_38 | VAR_37));
 VAR_45 = VAR_41->port.advertising[VAR_42];
 VAR_43 = VAR_41->link_params.phy[FUNC_3(VAR_41)].media_type;
 if (VAR_43 == VAR_20) {
  VAR_44 &= ~(VAR_36);
  VAR_45 &= ~(VAR_1);
 }

 if ((VAR_41->state == VAR_17) && VAR_41->link_vars.link_up &&
     !(VAR_41->flags & VAR_33)) {
  VAR_40->base.duplex = VAR_41->link_vars.duplex;

  if (FUNC_2(VAR_41) && !FUNC_0(VAR_41))
   VAR_40->base.speed = FUNC_5(VAR_41);
  else
   VAR_40->base.speed = VAR_41->link_vars.line_speed;
 } else {
  VAR_40->base.duplex = VAR_18;
  VAR_40->base.speed = VAR_35;
 }

 VAR_40->base.port = FUNC_6(VAR_41);

 VAR_40->base.phy_address = VAR_41->mdio.prtad;

 if (VAR_41->link_params.req_line_speed[VAR_42] == VAR_34)
  VAR_40->base.autoneg = VAR_15;
 else
  VAR_40->base.autoneg = VAR_14;


 if (VAR_41->link_vars.link_status & VAR_21) {
  u32 VAR_47 = VAR_41->link_vars.link_status;

  VAR_46 |= VAR_12;
  if (VAR_47 & VAR_32)
   VAR_46 |= VAR_13;
  if (VAR_47 & VAR_31)
   VAR_46 |= VAR_11;

  if (VAR_47 & VAR_28)
   VAR_46 |= VAR_8;
  if (VAR_47 & VAR_27)
   VAR_46 |= VAR_7;
  if (VAR_47 & VAR_25)
   VAR_46 |= VAR_6;
  if (VAR_47 & VAR_24)
   VAR_46 |= VAR_5;
  if (VAR_47 & VAR_23)
   VAR_46 |= VAR_4;
  if (VAR_47 & VAR_22) {
   if (VAR_43 == VAR_19) {
    VAR_46 |=
     VAR_2;
   } else {
    VAR_46 |=
     VAR_3;
   }
  }
  if (VAR_47 & VAR_30)
   VAR_46 |= VAR_10;
  if (VAR_47 & VAR_26) {
   if (VAR_43 == VAR_19) {
    VAR_46 |=
     VAR_0;
   } else {
    VAR_46 |=
     VAR_1;
   }
  }
  if (VAR_47 & VAR_29)
   VAR_46 |= VAR_9;
 }

 FUNC_7(VAR_40->link_modes.supported,
      VAR_44);
 FUNC_7(VAR_40->link_modes.advertising,
      VAR_45);
 FUNC_7(VAR_40->link_modes.lp_advertising,
      VAR_46);

 FUNC_1(VAR_16, "ethtool_cmd: cmd %d\n"
    "  supported 0x%x  advertising 0x%x  speed %u\n"
    "  duplex %d  port %d  phy_address %d\n"
    "  autoneg %d\n",
    VAR_40->base.cmd, VAR_44, VAR_45,
    VAR_40->base.speed,
    VAR_40->base.duplex, VAR_40->base.port, VAR_40->base.phy_address,
    VAR_40->base.autoneg);

 return 0;
}
