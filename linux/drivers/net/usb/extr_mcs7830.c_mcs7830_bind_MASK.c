
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int phy_id_mask; int reg_num_mask; int phy_id; struct net_device* dev; int mdio_write; int mdio_read; } ;
struct usbnet {TYPE_2__ mii; scalar_t__ rx_urb_size; TYPE_1__* udev; struct net_device* net; } ;
struct usb_interface {int dummy; } ;
struct net_device {scalar_t__ dev_addr; int * netdev_ops; int * ethtool_ops; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_3 (struct usbnet*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usbnet *VAR_6, struct usb_interface *VAR_7)
{
 struct net_device *VAR_8 = VAR_6->net;
 int VAR_9;
 int VAR_10;


 VAR_9 = -VAR_0;
 for (VAR_10 = 0; VAR_10 < 5 && VAR_9; VAR_10++)
  VAR_9 = FUNC_3(VAR_6, VAR_8->dev_addr);
 if (VAR_9) {
  FUNC_0(&VAR_6->udev->dev, "Cannot read MAC address\n");
  goto out;
 }

 FUNC_2(VAR_8);

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9)
  goto out;

 VAR_8->ethtool_ops = &VAR_2;
 VAR_8->netdev_ops = &VAR_5;


 VAR_6->rx_urb_size = VAR_1 + 1;

 VAR_6->mii.mdio_read = VAR_3;
 VAR_6->mii.mdio_write = VAR_4;
 VAR_6->mii.dev = VAR_8;
 VAR_6->mii.phy_id_mask = 0x3f;
 VAR_6->mii.reg_num_mask = 0x1f;
 VAR_6->mii.phy_id = *((u8 *) VAR_8->dev_addr + 1);

 VAR_9 = FUNC_4(VAR_6, VAR_7);
out:
 return VAR_9;
}
