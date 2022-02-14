
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int autoneg; int phy_address; int port; int duplex; int speed; int cmd; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_3__ base; TYPE_1__ link_modes; } ;
struct TYPE_5__ {int line_speed; int link_report_flags; } ;
struct bnx2x {scalar_t__ state; TYPE_2__ vf_link_vars; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ) ;
 struct bnx2x* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_9,
           struct ethtool_link_ksettings *VAR_10)
{
 struct bnx2x *VAR_11 = FUNC_2(VAR_9);
 u32 VAR_12, VAR_13;

 FUNC_1(&VAR_12,
      VAR_10->link_modes.supported);
 FUNC_1(&VAR_13,
      VAR_10->link_modes.advertising);

 if (VAR_11->state == VAR_3) {
  if (FUNC_3(VAR_1,
        &VAR_11->vf_link_vars.link_report_flags))
   VAR_10->base.duplex = VAR_4;
  else
   VAR_10->base.duplex = VAR_5;

  VAR_10->base.speed = VAR_11->vf_link_vars.line_speed;
 } else {
  VAR_10->base.duplex = VAR_6;
  VAR_10->base.speed = VAR_8;
 }

 VAR_10->base.port = VAR_7;
 VAR_10->base.phy_address = 0;
 VAR_10->base.autoneg = VAR_0;

 FUNC_0(VAR_2, "ethtool_cmd: cmd %d\n"
    "  supported 0x%x  advertising 0x%x  speed %u\n"
    "  duplex %d  port %d  phy_address %d\n"
    "  autoneg %d\n",
    VAR_10->base.cmd, VAR_12, VAR_13,
    VAR_10->base.speed,
    VAR_10->base.duplex, VAR_10->base.port, VAR_10->base.phy_address,
    VAR_10->base.autoneg);

 return 0;
}
