
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int phydev; } ;
struct mv643xx_eth_private {struct net_device* dev; } ;
struct TYPE_2__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct ethtool_link_ksettings*) ;

__attribute__((used)) static int
FUNC_2(struct mv643xx_eth_private *VAR_1,
       struct ethtool_link_ksettings *VAR_2)
{
 struct net_device *VAR_3 = VAR_1->dev;

 FUNC_1(VAR_3->phydev, VAR_2);




 FUNC_0(VAR_0,
      VAR_2->link_modes.supported);
 FUNC_0(VAR_0,
      VAR_2->link_modes.advertising);

 return 0;
}
