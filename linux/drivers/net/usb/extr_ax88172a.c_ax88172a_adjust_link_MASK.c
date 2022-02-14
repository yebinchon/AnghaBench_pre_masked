
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {struct ax88172a_private* driver_priv; } ;
struct phy_device {scalar_t__ duplex; scalar_t__ speed; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;
struct ax88172a_private {int oldmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct usbnet*,int ,int ) ;
 int FUNC_1 (struct net_device*,char*,scalar_t__,scalar_t__,int ) ;
 struct usbnet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5)
{
 struct phy_device *VAR_6 = VAR_5->phydev;
 struct usbnet *VAR_7 = FUNC_2(VAR_5);
 struct ax88172a_private *VAR_8 = VAR_7->driver_priv;
 u16 VAR_9 = 0;

 if (VAR_6->link) {
  VAR_9 = VAR_0;

  if (VAR_6->duplex == VAR_3)
   VAR_9 &= ~VAR_1;

  if (VAR_6->speed != VAR_4)
   VAR_9 &= ~VAR_2;
 }

 if (VAR_9 != VAR_8->oldmode) {
  FUNC_0(VAR_7, VAR_9, 0);
  VAR_8->oldmode = VAR_9;
  FUNC_1(VAR_5, "speed %u duplex %d, setting mode to 0x%04x\n",
      VAR_6->speed, VAR_6->duplex, VAR_9);
  FUNC_3(VAR_6);
 }
}
