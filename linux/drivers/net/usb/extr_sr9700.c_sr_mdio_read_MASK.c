
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 struct usbnet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct usbnet*,int ,int*) ;
 int FUNC_4 (struct usbnet*,int,int,int*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, int VAR_5, int VAR_6)
{
 struct usbnet *VAR_7 = FUNC_2(VAR_4);
 __le16 VAR_8;
 int VAR_9 = 0;

 if (VAR_5) {
  FUNC_1(VAR_4, "Only internal phy supported\n");
  return 0;
 }


 if (VAR_6 == VAR_1) {
  u8 VAR_10;

  FUNC_3(VAR_7, VAR_3, &VAR_10);
  if (VAR_10 & VAR_2)
   VAR_9 = 1;
 }
 FUNC_4(VAR_7, 1, VAR_6, &VAR_8);
 if (VAR_9 == 1)
  VAR_8 = FUNC_0(VAR_8) | VAR_0;
 else
  VAR_8 = FUNC_0(VAR_8) & ~VAR_0;

 FUNC_1(VAR_4, "sr_mdio_read() phy_id=0x%02x, loc=0x%02x, returns=0x%04x\n",
     VAR_5, VAR_6, VAR_8);

 return VAR_8;
}
