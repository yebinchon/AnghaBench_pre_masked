
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_if_info {int phy_id_mask; int reg_num_mask; int phy_id; int (* mdio_write ) (struct net_device*,int ,int ,int) ;int mdio_read; struct net_device* dev; } ;
struct usbnet {int rx_urb_size; struct mii_if_info mii; scalar_t__ hard_mtu; struct net_device* net; } ;
struct usb_interface {int dummy; } ;
struct net_device {int dev_addr; scalar_t__ hard_header_len; scalar_t__ mtu; int * ethtool_ops; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct mii_if_info*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct net_device*) ;
 int VAR_16 ;
 int FUNC_4 (struct net_device*,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct usbnet*,int ,int ,int ) ;
 int FUNC_6 (struct usbnet*,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_9(struct usbnet *VAR_17, struct usb_interface *VAR_18)
{
 struct net_device *VAR_19;
 struct mii_if_info *VAR_20;
 int VAR_21;

 VAR_21 = FUNC_8(VAR_17, VAR_18);
 if (VAR_21)
  goto out;

 VAR_19 = VAR_17->net;

 VAR_19->netdev_ops = &VAR_15;
 VAR_19->ethtool_ops = &VAR_14;
 VAR_19->hard_header_len += VAR_13;
 VAR_17->hard_mtu = VAR_19->mtu + VAR_19->hard_header_len;

 VAR_17->rx_urb_size = 3072;

 VAR_20 = &VAR_17->mii;
 VAR_20->dev = VAR_19;
 VAR_20->mdio_read = VAR_16;
 VAR_20->mdio_write = FUNC_4;
 VAR_20->phy_id_mask = 0x1f;
 VAR_20->reg_num_mask = 0x1f;

 FUNC_6(VAR_17, VAR_10, VAR_8);
 FUNC_7(20);






 if (FUNC_5(VAR_17, VAR_11, VAR_5, VAR_19->dev_addr) < 0) {
  FUNC_2(VAR_19, "Error reading MAC address\n");
  VAR_21 = -VAR_4;
  goto out;
 }


 FUNC_6(VAR_17, VAR_12, VAR_9);

 FUNC_1(20);
 FUNC_6(VAR_17, VAR_12, 0);

 FUNC_7(2 * 1000);


 FUNC_3(VAR_19);

 FUNC_4(VAR_19, VAR_20->phy_id, VAR_7, VAR_3);
 FUNC_4(VAR_19, VAR_20->phy_id, VAR_6, VAR_0 |
        VAR_1 | VAR_2);
 FUNC_0(VAR_20);

out:
 return VAR_21;
}
