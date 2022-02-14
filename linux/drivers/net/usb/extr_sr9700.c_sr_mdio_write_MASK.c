
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 struct usbnet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct usbnet*,int,int,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, int VAR_1, int VAR_2,
     int VAR_3)
{
 struct usbnet *VAR_4 = FUNC_2(VAR_0);
 __le16 VAR_5 = FUNC_0(VAR_3);

 if (VAR_1) {
  FUNC_1(VAR_0, "Only internal phy supported\n");
  return;
 }

 FUNC_1(VAR_0, "sr_mdio_write() phy_id=0x%02x, loc=0x%02x, val=0x%04x\n",
     VAR_1, VAR_2, VAR_3);

 FUNC_3(VAR_4, 1, VAR_2, VAR_5);
}
