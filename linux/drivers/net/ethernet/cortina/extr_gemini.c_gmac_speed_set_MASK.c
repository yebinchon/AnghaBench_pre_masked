
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ duplex; void* mii_rmii; int speed; int link; } ;
union gmac_status {scalar_t__ bits32; TYPE_1__ bits; } ;
typedef int u8 ;
typedef int u16 ;
struct phy_device {scalar_t__ duplex; int speed; scalar_t__ asym_pause; scalar_t__ pause; int interface; int link; } ;
struct net_device {struct phy_device* phydev; } ;
struct gemini_ethernet_port {scalar_t__ gmac_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct net_device*,char*,int ) ;
 int FUNC_5 (struct net_device*,char*,char*) ;
 struct gemini_ethernet_port* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,char*,int,int ) ;
 scalar_t__ FUNC_8 (struct gemini_ethernet_port*) ;
 int FUNC_9 (struct phy_device*) ;
 int FUNC_10 (struct phy_device*,int ) ;
 int FUNC_11 (struct phy_device*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_12)
{
 struct gemini_ethernet_port *VAR_13 = FUNC_6(VAR_12);
 struct phy_device *VAR_14 = VAR_12->phydev;
 union gmac_status VAR_15, VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;

 VAR_15.bits32 = FUNC_12(VAR_13->gmac_base + VAR_8);
 VAR_16.bits32 = VAR_15.bits32;
 VAR_15.bits.link = VAR_14->link;
 VAR_15.bits.duplex = VAR_14->duplex;

 switch (VAR_14->speed) {
 case 1000:
  VAR_15.bits.speed = VAR_7;
  if (VAR_14->interface == VAR_11)
   VAR_15.bits.mii_rmii = VAR_3;
  FUNC_4(VAR_12, "connect %s to RGMII @ 1Gbit\n",
      FUNC_11(VAR_14));
  break;
 case 100:
  VAR_15.bits.speed = VAR_6;
  if (VAR_14->interface == VAR_11)
   VAR_15.bits.mii_rmii = VAR_4;
  FUNC_4(VAR_12, "connect %s to RGMII @ 100 Mbit\n",
      FUNC_11(VAR_14));
  break;
 case 10:
  VAR_15.bits.speed = VAR_5;
  if (VAR_14->interface == VAR_11)
   VAR_15.bits.mii_rmii = VAR_4;
  FUNC_4(VAR_12, "connect %s to RGMII @ 10 Mbit\n",
      FUNC_11(VAR_14));
  break;
 default:
  FUNC_7(VAR_12, "Unsupported PHY speed (%d) on %s\n",
       VAR_14->speed, FUNC_11(VAR_14));
 }

 if (VAR_14->duplex == VAR_0) {
  u16 VAR_19 = FUNC_10(VAR_14, VAR_9);
  u16 VAR_20 = FUNC_10(VAR_14, VAR_10);
  u8 VAR_21 = FUNC_3(VAR_19, VAR_20);

  if (VAR_21 & VAR_1)
   VAR_18 = 1;
  if (VAR_21 & VAR_2)
   VAR_17 = 1;
 }

 FUNC_2(VAR_12, VAR_17, VAR_18);

 if (VAR_16.bits32 == VAR_15.bits32)
  return;

 if (FUNC_8(VAR_13)) {
  FUNC_9(VAR_14);
  FUNC_5(VAR_12, "link flow control: %s\n",
       VAR_14->pause
       ? (VAR_14->asym_pause ? "tx" : "both")
       : (VAR_14->asym_pause ? "rx" : "none")
  );
 }

 FUNC_0(VAR_12);
 FUNC_13(VAR_15.bits32, VAR_13->gmac_base + VAR_8);
 FUNC_1(VAR_12);
}
