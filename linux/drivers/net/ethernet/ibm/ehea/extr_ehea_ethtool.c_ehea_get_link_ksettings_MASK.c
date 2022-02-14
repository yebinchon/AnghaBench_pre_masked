
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int speed; int autoneg; int port; int duplex; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;
struct ehea_port {int port_speed; int full_duplex; int autoneg; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct ehea_port*) ;
 int FUNC_1 (int ,int) ;
 struct ehea_port* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_26,
       struct ethtool_link_ksettings *VAR_27)
{
 struct ehea_port *VAR_28 = FUNC_2(VAR_26);
 u32 VAR_29, VAR_30;
 u32 VAR_31;
 int VAR_32;

 VAR_32 = FUNC_0(VAR_28);

 if (VAR_32)
  return VAR_32;

 if (FUNC_3(VAR_26)) {
  switch (VAR_28->port_speed) {
  case 129:
   VAR_31 = VAR_12;
   break;
  case 131:
   VAR_31 = VAR_13;
   break;
  case 128:
   VAR_31 = VAR_14;
   break;
  case 130:
   VAR_31 = VAR_15;
   break;
  default:
   VAR_31 = -1;
   break;
  }
  VAR_27->base.duplex = VAR_28->full_duplex == 1 ?
           VAR_7 : VAR_8;
 } else {
  VAR_31 = VAR_16;
  VAR_27->base.duplex = VAR_9;
 }
 VAR_27->base.speed = VAR_31;

 if (VAR_27->base.speed == VAR_15) {
  VAR_29 = (VAR_17 | VAR_24);
  VAR_30 = (VAR_0 | VAR_3);
  VAR_27->base.port = VAR_10;
 } else {
  VAR_29 = (VAR_18 | VAR_19
          | VAR_20 | VAR_21
          | VAR_22 | VAR_23
          | VAR_25);
  VAR_30 = (VAR_1 | VAR_2
     | VAR_4);
  VAR_27->base.port = VAR_11;
 }

 VAR_27->base.autoneg = VAR_28->autoneg == 1 ?
  VAR_6 : VAR_5;

 FUNC_1(VAR_27->link_modes.supported,
      VAR_29);
 FUNC_1(VAR_27->link_modes.advertising,
      VAR_30);

 return 0;
}
