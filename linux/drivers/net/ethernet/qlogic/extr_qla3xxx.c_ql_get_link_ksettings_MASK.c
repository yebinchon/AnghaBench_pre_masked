
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ql3_adapter {int PHYAddr; int flags; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int duplex; int speed; int autoneg; int phy_address; int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct ql3_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ql3_adapter*) ;
 int FUNC_3 (struct ql3_adapter*) ;
 int FUNC_4 (struct ql3_adapter*) ;
 int FUNC_5 (struct ql3_adapter*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3,
     struct ethtool_link_ksettings *VAR_4)
{
 struct ql3_adapter *VAR_5 = FUNC_1(VAR_3);
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_5(VAR_5);

 if (FUNC_6(VAR_2, &VAR_5->flags)) {
  VAR_4->base.port = VAR_0;
 } else {
  VAR_4->base.port = VAR_1;
  VAR_4->base.phy_address = VAR_5->PHYAddr;
 }
 VAR_7 = FUNC_5(VAR_5);
 VAR_4->base.autoneg = FUNC_2(VAR_5);
 VAR_4->base.speed = FUNC_4(VAR_5);
 VAR_4->base.duplex = FUNC_3(VAR_5);

 FUNC_0(VAR_4->link_modes.supported,
      VAR_6);
 FUNC_0(VAR_4->link_modes.advertising,
      VAR_7);

 return 0;
}
