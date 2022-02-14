
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bus; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct net_device {struct phy_device* phydev; } ;
struct TYPE_4__ {void* eth_tp_mdix; void* eth_tp_mdix_ctrl; } ;
struct ethtool_link_ksettings {TYPE_2__ base; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct phy_device*,int ) ;
 int FUNC_3 (struct phy_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_13,
         struct ethtool_link_ksettings *VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18;
 struct phy_device *VAR_19 = VAR_13->phydev;

 if (!VAR_19 || !VAR_19->mdio.bus) {
  VAR_14->base.eth_tp_mdix_ctrl = VAR_2;
  VAR_14->base.eth_tp_mdix = VAR_2;
  return;
 }

 FUNC_3(VAR_19, VAR_8, VAR_7);

 VAR_17 = FUNC_2(VAR_19, VAR_4);
 VAR_15 = FUNC_1(VAR_17, VAR_9, VAR_10);

 VAR_17 = FUNC_2(VAR_19, VAR_5);
 VAR_16 = FUNC_0(VAR_17, VAR_11);
 VAR_18 = FUNC_0(VAR_17, VAR_12);

 FUNC_3(VAR_19, VAR_8, VAR_6);

 switch (VAR_15) {
 case 0x0:
  VAR_14->base.eth_tp_mdix_ctrl = VAR_0;
  break;
 case 0x1:
  VAR_14->base.eth_tp_mdix_ctrl = VAR_3;
  break;
 case 0x3:
  VAR_14->base.eth_tp_mdix_ctrl = VAR_1;
  break;
 default:
  VAR_14->base.eth_tp_mdix_ctrl = VAR_2;
  break;
 }

 if (!VAR_18)
  VAR_14->base.eth_tp_mdix = VAR_2;
 else if (VAR_16)
  VAR_14->base.eth_tp_mdix = VAR_3;
 else
  VAR_14->base.eth_tp_mdix = VAR_0;
}
