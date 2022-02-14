
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct typhoon {int xcvr_select; int capabilities; int duplex; int speed; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int autoneg; scalar_t__ phy_address; int duplex; int speed; int port; } ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;





 int FUNC_0 (int ,int) ;
 struct typhoon* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct typhoon*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_19,
      struct ethtool_link_ksettings *VAR_20)
{
 struct typhoon *VAR_21 = FUNC_1(VAR_19);
 u32 VAR_22, VAR_23 = 0;

 VAR_22 = VAR_12 | VAR_11 |
    VAR_15;

 switch (VAR_21->xcvr_select) {
 case 129:
  VAR_23 = VAR_3;
  break;
 case 130:
  VAR_23 = VAR_2;
  break;
 case 131:
  VAR_23 = VAR_1;
  break;
 case 132:
  VAR_23 = VAR_0;
  break;
 case 128:
  VAR_23 = VAR_3 |
         VAR_2 |
         VAR_1 |
         VAR_0 |
         VAR_4;
  break;
 }

 if(VAR_21->capabilities & VAR_18) {
  VAR_22 |= VAR_16;
  VAR_23 |= VAR_5;
  VAR_20->base.port = VAR_9;
 } else {
  VAR_22 |= VAR_14 |
         VAR_13 |
     VAR_17;
  VAR_23 |= VAR_6;
  VAR_20->base.port = VAR_10;
 }


 FUNC_2(VAR_21);
 VAR_20->base.speed = VAR_21->speed;
 VAR_20->base.duplex = VAR_21->duplex;
 VAR_20->base.phy_address = 0;
 if(VAR_21->xcvr_select == 128)
  VAR_20->base.autoneg = VAR_8;
 else
  VAR_20->base.autoneg = VAR_7;

 FUNC_0(VAR_20->link_modes.supported,
      VAR_22);
 FUNC_0(VAR_20->link_modes.advertising,
      VAR_23);

 return 0;
}
