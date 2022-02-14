
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ibmvnic_adapter {int duplex; int speed; } ;
struct TYPE_2__ {int autoneg; scalar_t__ phy_address; int port; int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ibmvnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ibmvnic_adapter*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
          struct ethtool_link_ksettings *VAR_5)
{
 struct ibmvnic_adapter *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7) {
  VAR_6->speed = VAR_3;
  VAR_6->duplex = VAR_1;
 }
 VAR_5->base.speed = VAR_6->speed;
 VAR_5->base.duplex = VAR_6->duplex;
 VAR_5->base.port = VAR_2;
 VAR_5->base.phy_address = 0;
 VAR_5->base.autoneg = VAR_0;

 return 0;
}
