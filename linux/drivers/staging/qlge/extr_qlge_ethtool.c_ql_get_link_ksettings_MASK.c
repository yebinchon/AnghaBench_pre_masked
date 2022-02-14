
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ql_adapter {int link_status; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int duplex; int speed; int port; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int) ;
 struct ql_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_15,
     struct ethtool_link_ksettings *VAR_16)
{
 struct ql_adapter *VAR_17 = FUNC_1(VAR_15);
 u32 VAR_18, VAR_19;

 VAR_18 = VAR_11;
 VAR_19 = VAR_0;

 if ((VAR_17->link_status & VAR_10) ==
    VAR_9) {
  VAR_18 |= (VAR_14 | VAR_12);
  VAR_19 |= (VAR_3 | VAR_1);
  VAR_16->base.port = VAR_7;
  VAR_16->base.autoneg = VAR_4;
 } else {
  VAR_18 |= VAR_13;
  VAR_19 |= VAR_2;
  VAR_16->base.port = VAR_6;
 }

 VAR_16->base.speed = VAR_8;
 VAR_16->base.duplex = VAR_5;

 FUNC_0(VAR_16->link_modes.supported,
      VAR_18);
 FUNC_0(VAR_16->link_modes.advertising,
      VAR_19);

 return 0;
}
