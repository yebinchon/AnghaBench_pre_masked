
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_hardware_context {int port_config; } ;
struct qlcnic_adapter {int netdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {scalar_t__ duplex; int speed; scalar_t__ autoneg; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;

int FUNC_2(struct qlcnic_adapter *VAR_7,
       const struct ethtool_link_ksettings *VAR_8)
{
 struct qlcnic_hardware_context *VAR_9 = VAR_7->ahw;
 u32 VAR_10 = VAR_7->ahw->port_config;
 int VAR_11 = 0;


 if (VAR_8->base.duplex == VAR_0) {
  FUNC_0(VAR_7->netdev,
       "Half duplex mode not supported\n");
  return -VAR_1;
 }

 if (VAR_8->base.autoneg) {
  VAR_9->port_config |= VAR_6;
  VAR_9->port_config |= (VAR_2 |
         VAR_5 |
         VAR_3);
 } else {
  VAR_9->port_config &= ~VAR_6;
  switch (VAR_8->base.speed) {
  case 131:
   VAR_9->port_config &= ~(VAR_2 |
           VAR_5 |
           VAR_3);
   VAR_9->port_config |= VAR_4;
   break;
  case 130:
   VAR_9->port_config &= ~(VAR_4 |
           VAR_5 |
           VAR_3);
   VAR_9->port_config |= VAR_2;
   break;
  case 129:
   VAR_9->port_config &= ~(VAR_4 |
           VAR_2 |
           VAR_3);
   VAR_9->port_config |= VAR_5;
   break;
  case 128:
   VAR_9->port_config &= ~(VAR_4 |
           VAR_2 |
           VAR_5);
   VAR_9->port_config |= VAR_3;
   break;
  default:
   return -VAR_1;
  }
 }
 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11) {
  FUNC_0(VAR_7->netdev,
       "Failed to Set Link Speed and autoneg.\n");
  VAR_9->port_config = VAR_10;
 }

 return VAR_11;
}
