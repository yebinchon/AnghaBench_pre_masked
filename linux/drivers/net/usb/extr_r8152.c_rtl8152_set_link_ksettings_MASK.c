
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct r8152 {int intf; int control; int advertising; int duplex; int speed; int autoneg; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int duplex; int speed; int autoneg; } ;
struct TYPE_3__ {int advertising; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct r8152* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct r8152*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_12,
          const struct ethtool_link_ksettings *VAR_13)
{
 struct r8152 *VAR_14 = FUNC_2(VAR_12);
 u32 VAR_15 = 0;
 int VAR_16;

 VAR_16 = FUNC_5(VAR_14->intf);
 if (VAR_16 < 0)
  goto out;

 if (FUNC_4(VAR_5,
       VAR_13->link_modes.advertising))
  VAR_15 |= VAR_11;

 if (FUNC_4(VAR_4,
       VAR_13->link_modes.advertising))
  VAR_15 |= VAR_10;

 if (FUNC_4(VAR_3,
       VAR_13->link_modes.advertising))
  VAR_15 |= VAR_9;

 if (FUNC_4(VAR_2,
       VAR_13->link_modes.advertising))
  VAR_15 |= VAR_8;

 if (FUNC_4(VAR_1,
       VAR_13->link_modes.advertising))
  VAR_15 |= VAR_7;

 if (FUNC_4(VAR_0,
       VAR_13->link_modes.advertising))
  VAR_15 |= VAR_6;

 FUNC_0(&VAR_14->control);

 VAR_16 = FUNC_3(VAR_14, VAR_13->base.autoneg, VAR_13->base.speed,
    VAR_13->base.duplex, VAR_15);
 if (!VAR_16) {
  VAR_14->autoneg = VAR_13->base.autoneg;
  VAR_14->speed = VAR_13->base.speed;
  VAR_14->duplex = VAR_13->base.duplex;
  VAR_14->advertising = VAR_15;
 }

 FUNC_1(&VAR_14->control);

 FUNC_6(VAR_14->intf);

out:
 return VAR_16;
}
