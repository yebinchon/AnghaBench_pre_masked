
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct net_device {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (struct usbnet*,int,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 struct usbnet* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 struct usbnet *VAR_3 = FUNC_3(VAR_0);

 __le16 VAR_4;

 if (VAR_1) {
  FUNC_2(VAR_3->net, "Only internal phy supported\n");
  return 0;
 }

 FUNC_0(VAR_3, 1, VAR_2, &VAR_4);

 FUNC_2(VAR_3->net,
     "dm9601_mdio_read() phy_id=0x%02x, loc=0x%02x, returns=0x%04x\n",
     VAR_1, VAR_2, FUNC_1(VAR_4));

 return FUNC_1(VAR_4);
}
