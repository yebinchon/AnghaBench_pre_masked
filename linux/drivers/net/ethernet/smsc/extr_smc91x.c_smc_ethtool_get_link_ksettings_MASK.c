
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct smc_local {scalar_t__ phy_type; int ctl_rspeed; int tcr_cur_mode; int lock; int mii; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int supported; } ;
struct TYPE_3__ {int duplex; scalar_t__ port; int autoneg; int speed; } ;
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
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,struct ethtool_link_ksettings*) ;
 struct smc_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_10,
          struct ethtool_link_ksettings *VAR_11)
{
 struct smc_local *VAR_12 = FUNC_2(VAR_10);

 if (VAR_12->phy_type != 0) {
  FUNC_3(&VAR_12->lock);
  FUNC_1(&VAR_12->mii, VAR_11);
  FUNC_4(&VAR_12->lock);
 } else {
  u32 VAR_13 = VAR_6 |
     VAR_5 |
     VAR_8 | VAR_7;

  if (VAR_12->ctl_rspeed == 10)
   VAR_11->base.speed = VAR_3;
  else if (VAR_12->ctl_rspeed == 100)
   VAR_11->base.speed = VAR_4;

  VAR_11->base.autoneg = VAR_0;
  VAR_11->base.port = 0;
  VAR_11->base.duplex = VAR_12->tcr_cur_mode & VAR_9 ?
   VAR_1 : VAR_2;

  FUNC_0(
   VAR_11->link_modes.supported, VAR_13);
 }

 return 0;
}
