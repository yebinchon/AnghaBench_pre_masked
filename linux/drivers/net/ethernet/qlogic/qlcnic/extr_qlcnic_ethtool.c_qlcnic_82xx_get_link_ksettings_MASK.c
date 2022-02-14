
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct qlcnic_hardware_context {scalar_t__ port_type; int board_type; int module_type; scalar_t__ has_link_events; void* link_autoneg; int physical_port; int link_duplex; scalar_t__ link_speed; scalar_t__ linkup; int pci_func; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; TYPE_1__* pdev; int netdev; } ;
struct TYPE_6__ {int advertising; int supported; } ;
struct TYPE_5__ {void* port; void* autoneg; int phy_address; int duplex; scalar_t__ speed; } ;
struct ethtool_link_ksettings {TYPE_3__ link_modes; TYPE_2__ base; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;







 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*,int ,int*) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct qlcnic_adapter *VAR_34,
       struct ethtool_link_ksettings *VAR_35)
{
 struct qlcnic_hardware_context *VAR_36 = VAR_34->ahw;
 u32 VAR_37, VAR_38;
 int VAR_39 = 0, VAR_40 = 0;
 u16 VAR_41 = VAR_36->pci_func;
 u32 VAR_42, VAR_43;


 if (VAR_34->ahw->port_type == VAR_18) {
  VAR_42 = (VAR_29 |
       VAR_28 |
       VAR_27 |
       VAR_26 |
       VAR_25 |
       VAR_24);

  VAR_43 = (VAR_4 |
         VAR_3 |
         VAR_2 |
         VAR_1);

  VAR_35->base.speed = VAR_34->ahw->link_speed;
  VAR_35->base.duplex = VAR_34->ahw->link_duplex;
  VAR_35->base.autoneg = VAR_34->ahw->link_autoneg;

 } else if (VAR_34->ahw->port_type == VAR_21) {
  u32 VAR_44 = 0;
  VAR_44 = FUNC_2(VAR_34, VAR_20, &VAR_40);

  if (VAR_44 == VAR_19) {
   VAR_42 = VAR_24;
   VAR_43 = VAR_1;
  } else {
   VAR_42 = VAR_23;
   VAR_43 = VAR_0;
  }

  if (FUNC_5(VAR_34->netdev) && VAR_36->has_link_events) {
   if (VAR_36->linkup) {
    VAR_38 = FUNC_2(VAR_34,
           FUNC_0(VAR_41), &VAR_40);
    VAR_37 = FUNC_1(VAR_41, VAR_38);
    VAR_36->link_speed = VAR_37 * VAR_13;
   }

   VAR_35->base.speed = VAR_36->link_speed;
   VAR_35->base.autoneg = VAR_36->link_autoneg;
   VAR_35->base.duplex = VAR_36->link_duplex;
   goto skip;
  }

  VAR_35->base.speed = VAR_22;
  VAR_35->base.duplex = VAR_11;
  VAR_35->base.autoneg = VAR_9;
 } else
  return -VAR_12;

skip:
 VAR_35->base.phy_address = VAR_34->ahw->physical_port;

 switch (VAR_34->ahw->board_type) {
 case 129:
 case 133:
 case 132:
  VAR_42 |= VAR_30;
  VAR_43 |= VAR_5;

 case 140:
 case 139:
 case 141:
  VAR_42 |= VAR_33;
  VAR_43 |= VAR_8;
  VAR_35->base.port = VAR_17;
  VAR_35->base.autoneg = VAR_34->ahw->link_autoneg;
  break;
 case 130:
 case 128:
 case 131:
  VAR_42 |= VAR_32;
  VAR_43 |= VAR_7;
  VAR_35->base.port = VAR_15;
  VAR_35->base.autoneg = VAR_9;
  break;
 case 137:
 case 138:
 case 136:
  VAR_43 |= VAR_8;
  VAR_42 |= VAR_33;
  VAR_39 = FUNC_5(VAR_34->netdev) &&
       VAR_36->has_link_events;

 case 134:
  VAR_42 |= VAR_31;
  VAR_43 |= VAR_6;
  VAR_35->base.port = VAR_14;
  VAR_35->base.autoneg = VAR_9;
  break;
 case 135:
  if (VAR_34->ahw->port_type == VAR_21) {
   VAR_35->base.autoneg = VAR_9;
   VAR_42 |= (VAR_31 | VAR_33);
   VAR_43 |=
    (VAR_6 | VAR_8);
   VAR_35->base.port = VAR_14;
   VAR_39 = FUNC_5(VAR_34->netdev) &&
        VAR_36->has_link_events;
  } else {
   VAR_35->base.autoneg = VAR_10;
   VAR_42 |= (VAR_33 | VAR_30);
   VAR_43 |=
    (VAR_8 | VAR_5);
   VAR_35->base.port = VAR_17;
  }
  break;
 default:
  FUNC_3(&VAR_34->pdev->dev, "Unsupported board model %d\n",
   VAR_34->ahw->board_type);
  return -VAR_12;
 }

 if (VAR_39) {
  switch (VAR_34->ahw->module_type) {
  case 145:
  case 146:
  case 148:
  case 147:
   VAR_35->base.port = VAR_14;
   break;
  case 143:
  case 142:
  case 144:
   VAR_35->base.port = VAR_17;
   break;
  default:
   VAR_35->base.port = VAR_16;
  }
 }

 FUNC_4(VAR_35->link_modes.supported,
      VAR_42);
 FUNC_4(VAR_35->link_modes.advertising,
      VAR_43);

 return 0;
}
