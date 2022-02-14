
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int phy_mutex; int net; } ;
struct net_device {int dummy; } ;
typedef int __u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int,int*,int) ;
 int FUNC_1 (struct usbnet*,int) ;
 int FUNC_2 (struct usbnet*,int) ;
 int FUNC_3 (struct usbnet*,int ,int,int ,int,int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int,int,int) ;
 struct usbnet* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int,int) ;

void
FUNC_10(struct net_device *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct usbnet *VAR_8 = FUNC_8(VAR_4);
 __le16 VAR_9 = FUNC_4(VAR_7);
 u8 VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 FUNC_7(VAR_8->net, "asix_mdio_write() phy_id=0x%02x, loc=0x%02x, val=0x%04x\n",
   VAR_5, VAR_6, VAR_7);

 FUNC_5(&VAR_8->phy_mutex);
 do {
  VAR_12 = FUNC_2(VAR_8, 1);
  if (VAR_12 == -VAR_3)
   break;
  FUNC_9(1000, 1100);
  VAR_12 = FUNC_0(VAR_8, VAR_0,
        0, 0, 1, &VAR_10, 1);
 } while (!(VAR_10 & VAR_2) && (VAR_11++ < 30) && (VAR_12 != -VAR_3));
 if (VAR_12 == -VAR_3) {
  FUNC_6(&VAR_8->phy_mutex);
  return;
 }

 FUNC_3(VAR_8, VAR_1, VAR_5,
         (__u16)VAR_6, 2, &VAR_9, 1);
 FUNC_1(VAR_8, 1);
 FUNC_6(&VAR_8->phy_mutex);
}
