
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mii_rmii; } ;
union gmac_status {int bits32; TYPE_1__ bits; } ;
struct phy_device {int interface; } ;
struct net_device {struct phy_device* phydev; } ;
struct gemini_ethernet_port {scalar_t__ gmac_base; struct device* dev; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct gemini_ethernet_port* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct gemini_ethernet_port*) ;
 struct phy_device* FUNC_4 (struct net_device*,int ,int ) ;
 int FUNC_5 (struct phy_device*) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (struct phy_device*,int ) ;
 int FUNC_8 (struct phy_device*) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8)
{
 struct gemini_ethernet_port *VAR_9 = FUNC_2(VAR_8);
 union gmac_status VAR_10 = { .bits32 = 0 };
 struct device *VAR_11 = VAR_9->dev;
 struct phy_device *VAR_12;

 VAR_12 = FUNC_4(VAR_8,
         VAR_11->of_node,
         VAR_7);
 if (!VAR_12)
  return -VAR_1;
 VAR_8->phydev = VAR_12;

 FUNC_7(VAR_12, VAR_6);
 FUNC_8(VAR_12);


 switch (VAR_12->interface) {
 case 129:
  FUNC_0(VAR_8,
      "MII: set GMAC0 to GMII mode, GMAC1 disabled\n");
  VAR_10.bits.mii_rmii = VAR_3;
  break;
 case 130:
  FUNC_0(VAR_8,
      "GMII: set GMAC0 to GMII mode, GMAC1 disabled\n");
  VAR_10.bits.mii_rmii = VAR_2;
  break;
 case 128:
  FUNC_0(VAR_8,
      "RGMII: set GMAC0 and GMAC1 to MII/RGMII mode\n");
  VAR_10.bits.mii_rmii = VAR_4;
  break;
 default:
  FUNC_1(VAR_8, "Unsupported MII interface\n");
  FUNC_6(VAR_12);
  VAR_8->phydev = ((void*)0);
  return -VAR_0;
 }
 FUNC_9(VAR_10.bits32, VAR_9->gmac_base + VAR_5);

 if (FUNC_3(VAR_9))
  FUNC_5(VAR_12);

 return 0;
}
