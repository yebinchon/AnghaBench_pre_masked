
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_hardware_context {int link_speed; int port_config; int supported_type; int physical_port; int link_autoneg; int link_duplex; scalar_t__ has_link_events; int board_type; int module_type; } ;
struct qlcnic_adapter {int netdev; int state; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int speed; int port; int phy_address; int autoneg; int duplex; } ;
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
 int FUNC_0 (int) ;




 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct qlcnic_adapter *VAR_22,
       struct ethtool_link_ksettings *VAR_23)
{
 struct qlcnic_hardware_context *VAR_24 = VAR_22->ahw;
 u32 VAR_25 = 0;
 int VAR_26 = 0;
 u32 VAR_27, VAR_28;

 if (!FUNC_6(VAR_21, &VAR_22->state)) {

  VAR_26 = FUNC_4(VAR_22);

  VAR_25 = FUNC_5(VAR_22);
  VAR_24->module_type = FUNC_0(VAR_25);
 }


 VAR_24->board_type = VAR_7;

 if (FUNC_3(VAR_22->netdev) && VAR_24->has_link_events) {
  VAR_23->base.speed = VAR_24->link_speed;
  VAR_23->base.duplex = VAR_24->link_duplex;
  VAR_23->base.autoneg = VAR_24->link_autoneg;
 } else {
  VAR_23->base.speed = VAR_13;
  VAR_23->base.duplex = VAR_5;
  VAR_23->base.autoneg = VAR_3;
 }

 VAR_27 = (VAR_17 |
      VAR_16 |
      VAR_15 |
      VAR_14 |
      VAR_18);

 FUNC_2(&VAR_28,
      VAR_23->link_modes.advertising);

 if (VAR_23->base.autoneg == VAR_4) {
  if (VAR_24->port_config & VAR_10)
   VAR_28 |= VAR_17;
  if (VAR_24->port_config & VAR_8)
   VAR_28 |= VAR_16;
  if (VAR_24->port_config & VAR_11)
   VAR_28 |= VAR_15;
  if (VAR_24->port_config & VAR_9)
   VAR_28 |= VAR_14;
  if (VAR_24->port_config & VAR_12)
   VAR_28 |= VAR_0;
 } else {
  switch (VAR_24->link_speed) {
  case 131:
   VAR_28 = VAR_17;
   break;
  case 130:
   VAR_28 = VAR_16;
   break;
  case 129:
   VAR_28 = VAR_15;
   break;
  case 128:
   VAR_28 = VAR_14;
   break;
  default:
   break;
  }

 }

 switch (VAR_24->supported_type) {
 case 133:
  VAR_27 |= VAR_19;
  VAR_28 |= VAR_1;
  VAR_23->base.port = 133;
  break;
 case 132:
  VAR_27 |= VAR_20;
  VAR_28 |= VAR_2;
  VAR_23->base.port = 132;
  break;
 case 134:
  VAR_27 |= VAR_19;
  VAR_28 |= VAR_1;
  VAR_23->base.port = 134;
  break;
 default:
  VAR_27 |= VAR_19;
  VAR_28 |= VAR_1;
  VAR_23->base.port = VAR_6;
  break;
 }
 VAR_23->base.phy_address = VAR_24->physical_port;

 FUNC_1(VAR_23->link_modes.supported,
      VAR_27);
 FUNC_1(VAR_23->link_modes.advertising,
      VAR_28);

 return VAR_26;
}
