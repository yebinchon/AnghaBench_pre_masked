
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct gem {int link_timer; int dev; } ;
struct TYPE_4__ {scalar_t__ speed; scalar_t__ autoneg; scalar_t__ duplex; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (struct gem*,struct ethtool_link_ksettings const*) ;
 struct gem* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8,
      const struct ethtool_link_ksettings *VAR_9)
{
 struct gem *VAR_10 = FUNC_3(VAR_8);
 u32 VAR_11 = VAR_9->base.speed;
 u32 VAR_12;

 FUNC_1(&VAR_12,
      VAR_9->link_modes.advertising);


 if (VAR_9->base.autoneg != VAR_1 &&
     VAR_9->base.autoneg != VAR_0)
  return -VAR_4;

 if (VAR_9->base.autoneg == VAR_1 &&
     VAR_12 == 0)
  return -VAR_4;

 if (VAR_9->base.autoneg == VAR_0 &&
     ((VAR_11 != VAR_7 &&
       VAR_11 != VAR_6 &&
       VAR_11 != VAR_5) ||
      (VAR_9->base.duplex != VAR_3 &&
       VAR_9->base.duplex != VAR_2)))
  return -VAR_4;


 if (FUNC_4(VAR_10->dev)) {
  FUNC_0(&VAR_10->link_timer);
  FUNC_2(VAR_10, VAR_9);
 }

 return 0;
}
