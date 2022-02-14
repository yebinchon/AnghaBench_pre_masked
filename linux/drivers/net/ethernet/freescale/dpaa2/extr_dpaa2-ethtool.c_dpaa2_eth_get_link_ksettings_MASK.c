
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int speed; int duplex; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct TYPE_4__ {int options; int rate; } ;
struct dpaa2_eth_priv {TYPE_2__ link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dpaa2_eth_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_3,
        struct ethtool_link_ksettings *VAR_4)
{
 struct dpaa2_eth_priv *VAR_5 = FUNC_0(VAR_3);

 VAR_4->base.autoneg = VAR_0;
 if (!(VAR_5->link_state.options & VAR_1))
  VAR_4->base.duplex = VAR_2;
 VAR_4->base.speed = VAR_5->link_state.rate;

 return 0;
}
