
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc911x_local {scalar_t__ phy_type; int ctl_rfduplx; int lock; int mii; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ autoneg; scalar_t__ speed; scalar_t__ duplex; scalar_t__ port; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,struct ethtool_link_ksettings const*) ;
 struct smc911x_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_7,
       const struct ethtool_link_ksettings *VAR_8)
{
 struct smc911x_local *VAR_9 = FUNC_1(VAR_7);
 int VAR_10;
 unsigned long VAR_11;

 if (VAR_9->phy_type != 0) {
  FUNC_2(&VAR_9->lock, VAR_11);
  VAR_10 = FUNC_0(&VAR_9->mii, VAR_8);
  FUNC_3(&VAR_9->lock, VAR_11);
 } else {
  if (VAR_8->base.autoneg != VAR_0 ||
      VAR_8->base.speed != VAR_6 ||
      (VAR_8->base.duplex != VAR_2 &&
       VAR_8->base.duplex != VAR_1) ||
      (VAR_8->base.port != VAR_5 &&
       VAR_8->base.port != VAR_4))
   return -VAR_3;

  VAR_9->ctl_rfduplx = VAR_8->base.duplex == VAR_1;

  VAR_10 = 0;
 }

 return VAR_10;
}
