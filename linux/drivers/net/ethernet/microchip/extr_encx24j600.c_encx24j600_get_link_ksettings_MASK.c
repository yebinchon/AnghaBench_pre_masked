
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int autoneg; int port; int duplex; int speed; } ;
struct TYPE_3__ {int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;
struct encx24j600_priv {scalar_t__ autoneg; scalar_t__ full_duplex; int speed; } ;


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
 int FUNC_0 (int ,int) ;
 struct encx24j600_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_11,
      struct ethtool_link_ksettings *VAR_12)
{
 struct encx24j600_priv *VAR_13 = FUNC_1(VAR_11);
 u32 VAR_14;

 VAR_14 = VAR_8 | VAR_7 |
    VAR_6 | VAR_5 |
    VAR_9 | VAR_10;

 FUNC_0(VAR_12->link_modes.supported,
      VAR_14);

 VAR_12->base.speed = VAR_13->speed;
 VAR_12->base.duplex = VAR_13->full_duplex ? VAR_2 : VAR_3;
 VAR_12->base.port = VAR_4;
 VAR_12->base.autoneg = VAR_13->autoneg ? VAR_1 : VAR_0;

 return 0;
}
