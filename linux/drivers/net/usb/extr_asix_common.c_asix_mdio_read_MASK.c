
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; int phy_mutex; } ;
struct net_device {int dummy; } ;
typedef int __u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*,int ,int,int ,int,int*,int ) ;
 int FUNC_1 (struct usbnet*,int ) ;
 int FUNC_2 (struct usbnet*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int,int,int) ;
 struct usbnet* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int,int) ;

int FUNC_9(struct net_device *VAR_5, int VAR_6, int VAR_7)
{
 struct usbnet *VAR_8 = FUNC_7(VAR_5);
 __le16 VAR_9;
 u8 VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 FUNC_4(&VAR_8->phy_mutex);
 do {
  VAR_12 = FUNC_2(VAR_8, 0);
  if (VAR_12 == -VAR_3 || VAR_12 == -VAR_4)
   break;
  FUNC_8(1000, 1100);
  VAR_12 = FUNC_0(VAR_8, VAR_1,
        0, 0, 1, &VAR_10, 0);
 } while (!(VAR_10 & VAR_2) && (VAR_11++ < 30) && (VAR_12 != -VAR_3));
 if (VAR_12 == -VAR_3 || VAR_12 == -VAR_4) {
  FUNC_5(&VAR_8->phy_mutex);
  return VAR_12;
 }

 FUNC_0(VAR_8, VAR_0, VAR_6,
    (__u16)VAR_7, 2, &VAR_9, 0);
 FUNC_1(VAR_8, 0);
 FUNC_5(&VAR_8->phy_mutex);

 FUNC_6(VAR_8->net, "asix_mdio_read() phy_id=0x%02x, loc=0x%02x, returns=0x%04x\n",
   VAR_6, VAR_7, FUNC_3(VAR_9));

 return FUNC_3(VAR_9);
}
