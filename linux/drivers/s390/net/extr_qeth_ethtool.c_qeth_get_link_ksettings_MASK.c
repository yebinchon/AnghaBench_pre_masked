
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link_type; } ;
struct qeth_card {TYPE_1__ info; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct TYPE_4__ {void* speed; void* duplex; void* port; void* eth_tp_mdix_ctrl; void* eth_tp_mdix; scalar_t__ mdio_support; scalar_t__ phy_address; int autoneg; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;
struct carrier_info {int card_type; int port_mode; int port_speed; } ;
typedef enum qeth_link_types { ____Placeholder_qeth_link_types } qeth_link_types ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 void* VAR_5 ;
 void* VAR_6 ;






 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_2 (struct net_device*,char*,int,int,int) ;
 int FUNC_3 (struct qeth_card*,struct carrier_info*) ;
 int FUNC_4 (struct ethtool_link_ksettings*,void*,void*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_12,
       struct ethtool_link_ksettings *VAR_13)
{
 struct qeth_card *VAR_14 = VAR_12->ml_priv;
 enum qeth_link_types VAR_15;
 struct carrier_info VAR_16;
 int VAR_17;

 if (FUNC_0(VAR_14) || FUNC_1(VAR_14))
  VAR_15 = 133;
 else
  VAR_15 = VAR_14->info.link_type;

 VAR_13->base.duplex = VAR_1;
 VAR_13->base.autoneg = VAR_0;
 VAR_13->base.phy_address = 0;
 VAR_13->base.mdio_support = 0;
 VAR_13->base.eth_tp_mdix = VAR_4;
 VAR_13->base.eth_tp_mdix_ctrl = VAR_4;

 switch (VAR_15) {
 case 131:
 case 129:
  VAR_13->base.speed = VAR_8;
  VAR_13->base.port = VAR_6;
  break;
 case 130:
 case 128:
  VAR_13->base.speed = VAR_9;
  VAR_13->base.port = VAR_5;
  break;
 case 133:
  VAR_13->base.speed = VAR_10;
  VAR_13->base.port = VAR_5;
  break;
 case 132:
  VAR_13->base.speed = VAR_11;
  VAR_13->base.port = VAR_5;
  break;
 default:
  VAR_13->base.speed = VAR_7;
  VAR_13->base.port = VAR_6;
 }
 FUNC_4(VAR_13, VAR_13->base.speed, VAR_13->base.port);




 VAR_17 = FUNC_3(VAR_14, &VAR_16);
 if (VAR_17 == -VAR_3)
  return 0;
 if (VAR_17)
  return VAR_17;


 FUNC_2(VAR_12,
 "card info: card_type=0x%02x, port_mode=0x%04x, port_speed=0x%08x\n",
   VAR_16.card_type,
   VAR_16.port_mode,
   VAR_16.port_speed);



 switch (VAR_16.card_type) {
 case 137:
 case 136:
  VAR_13->base.port = VAR_6;
  FUNC_4(VAR_13, VAR_9, VAR_13->base.port);
  break;
 case 135:
 case 134:
  VAR_13->base.port = VAR_5;
  FUNC_4(VAR_13, VAR_9, VAR_13->base.port);
  break;
 case 139:
 case 138:
  VAR_13->base.port = VAR_5;
  FUNC_4(VAR_13, VAR_10, VAR_13->base.port);
  break;
 }

 switch (VAR_16.port_mode) {
 case 146:
  VAR_13->base.duplex = VAR_1;
  break;
 case 145:
  VAR_13->base.duplex = VAR_2;
  break;
 }

 switch (VAR_16.port_speed) {
 case 142:
  VAR_13->base.speed = VAR_7;
  break;
 case 144:
  VAR_13->base.speed = VAR_8;
  break;
 case 141:
  VAR_13->base.speed = VAR_9;
  break;
 case 143:
  VAR_13->base.speed = VAR_10;
  break;
 case 140:
  VAR_13->base.speed = VAR_11;
  break;
 }

 return 0;
}
