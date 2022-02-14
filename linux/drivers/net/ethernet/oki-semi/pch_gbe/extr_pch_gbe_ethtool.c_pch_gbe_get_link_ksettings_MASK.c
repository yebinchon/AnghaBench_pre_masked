
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pch_gbe_adapter {int netdev; int mii; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int speed; } ;
struct TYPE_3__ {int advertising; int supported; } ;
struct ethtool_link_ksettings {TYPE_2__ base; TYPE_1__ link_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int *,struct ethtool_link_ksettings*) ;
 struct pch_gbe_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
          struct ethtool_link_ksettings *VAR_6)
{
 struct pch_gbe_adapter *VAR_7 = FUNC_3(VAR_5);
 u32 VAR_8, VAR_9;

 FUNC_2(&VAR_7->mii, VAR_6);

 FUNC_1(&VAR_8,
      VAR_6->link_modes.supported);
 FUNC_1(&VAR_9,
      VAR_6->link_modes.advertising);

 VAR_8 &= ~(VAR_4 | VAR_3);
 VAR_9 &= ~(VAR_1 | VAR_0);

 FUNC_0(VAR_6->link_modes.supported,
      VAR_8);
 FUNC_0(VAR_6->link_modes.advertising,
      VAR_9);

 if (!FUNC_4(VAR_7->netdev))
  VAR_6->base.speed = VAR_2;

 return 0;
}
