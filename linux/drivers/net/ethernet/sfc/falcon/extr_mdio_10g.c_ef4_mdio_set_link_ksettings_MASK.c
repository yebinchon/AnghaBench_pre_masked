
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ speed; scalar_t__ duplex; scalar_t__ port; scalar_t__ autoneg; int cmd; } ;
struct TYPE_5__ {int supported; int advertising; } ;
struct ethtool_link_ksettings {TYPE_3__ base; TYPE_2__ link_modes; } ;
struct ef4_nic {TYPE_1__* phy_op; } ;
struct TYPE_4__ {int (* get_link_ksettings ) (struct ef4_nic*,struct ethtool_link_ksettings*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ef4_nic*,int) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (struct ef4_nic*,struct ethtool_link_ksettings*) ;

int FUNC_4(struct ef4_nic *VAR_5,
    const struct ethtool_link_ksettings *VAR_6)
{
 struct ethtool_link_ksettings VAR_7 = {
  .base.cmd = VAR_2
 };
 u32 VAR_8, VAR_9;
 u32 VAR_10;

 VAR_5->phy_op->get_link_ksettings(VAR_5, &VAR_7);

 FUNC_2(&VAR_9,
      VAR_6->link_modes.advertising);
 FUNC_2(&VAR_8,
      VAR_7.link_modes.advertising);
 FUNC_2(&VAR_10,
      VAR_7.link_modes.supported);

 if (VAR_9 == VAR_8 &&
     VAR_6->base.speed == VAR_7.base.speed &&
     VAR_6->base.duplex == VAR_7.base.duplex &&
     VAR_6->base.port == VAR_7.base.port &&
     VAR_6->base.autoneg == VAR_7.base.autoneg)
  return 0;


 if (VAR_7.base.port != VAR_3 || VAR_6->base.port != VAR_3)
  return -VAR_1;


 if (!VAR_6->base.autoneg ||
     (VAR_9 | VAR_4) & ~VAR_10)
  return -VAR_1;

 FUNC_0(VAR_5, VAR_9 | VAR_0);
 FUNC_1(VAR_5);
 return 0;
}
