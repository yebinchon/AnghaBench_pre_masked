
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port; int duplex; int speed; int autoneg; int phy_address; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct TYPE_3__ {int duplex; int speed; int autoneg; int address; struct ethtool_link_ksettings lks; } ;
struct xgbe_prv_data {TYPE_1__ phy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ethtool_link_ksettings*,int ,struct ethtool_link_ksettings*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct xgbe_prv_data* FUNC_1 (struct net_device*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
       struct ethtool_link_ksettings *VAR_5)
{
 struct xgbe_prv_data *VAR_6 = FUNC_1(VAR_4);
 struct ethtool_link_ksettings *VAR_7 = &VAR_6->phy.lks;

 VAR_5->base.phy_address = VAR_6->phy.address;

 VAR_5->base.autoneg = VAR_6->phy.autoneg;
 VAR_5->base.speed = VAR_6->phy.speed;
 VAR_5->base.duplex = VAR_6->phy.duplex;

 VAR_5->base.port = VAR_0;

 FUNC_0(VAR_5, VAR_3, VAR_7, VAR_3);
 FUNC_0(VAR_5, VAR_1, VAR_7, VAR_1);
 FUNC_0(VAR_5, VAR_2, VAR_7, VAR_2);

 return 0;
}
