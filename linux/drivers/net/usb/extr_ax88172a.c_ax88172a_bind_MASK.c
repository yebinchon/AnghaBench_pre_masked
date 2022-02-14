
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {int rx_urb_size; TYPE_1__* driver_info; TYPE_2__* net; struct ax88172a_private* driver_priv; } ;
struct usb_interface {int dummy; } ;
struct ax88172a_private {int use_embdphy; int phy_addr; } ;
struct TYPE_5__ {int * ethtool_ops; int * netdev_ops; int dev_addr; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ,int,int*,int ) ;
 int FUNC_1 (struct usbnet*,int) ;
 int VAR_8 ;
 int FUNC_2 (struct usbnet*) ;
 int VAR_9 ;
 int FUNC_3 (struct usbnet*,int) ;
 int FUNC_4 (struct ax88172a_private*) ;
 struct ax88172a_private* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (TYPE_2__*,char*,...) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 int FUNC_9 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_10(struct usbnet *VAR_10, struct usb_interface *VAR_11)
{
 int VAR_12;
 u8 VAR_13[VAR_5];
 struct ax88172a_private *VAR_14;

 FUNC_9(VAR_10, VAR_11);

 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_7);
 if (!VAR_14)
  return -VAR_3;

 VAR_10->driver_priv = VAR_14;


 VAR_12 = FUNC_0(VAR_10, VAR_0, 0, 0, VAR_5, VAR_13, 0);
 if (VAR_12 < 0) {
  FUNC_8(VAR_10->net, "Failed to read MAC address: %d\n", VAR_12);
  goto free;
 }
 FUNC_6(VAR_10->net->dev_addr, VAR_13, VAR_5);

 VAR_10->net->netdev_ops = &VAR_9;
 VAR_10->net->ethtool_ops = &VAR_8;


 VAR_12 = FUNC_0(VAR_10, VAR_1, 0, 0, 1, VAR_13, 0);
 if (VAR_12 < 0) {
  FUNC_8(VAR_10->net, "Failed to read software interface selection register: %d\n",
      VAR_12);
  goto free;
 }

 FUNC_7(VAR_10->net, "AX_CMD_SW_PHY_STATUS = 0x%02x\n", VAR_13[0]);
 switch (VAR_13[0] & VAR_2) {
 case 128:
  FUNC_7(VAR_10->net, "use internal phy\n");
  VAR_14->use_embdphy = 1;
  break;
 case 129:
  FUNC_7(VAR_10->net, "use external phy\n");
  VAR_14->use_embdphy = 0;
  break;
 default:
  FUNC_8(VAR_10->net, "Interface mode not supported by driver\n");
  VAR_12 = -VAR_4;
  goto free;
 }

 VAR_14->phy_addr = FUNC_1(VAR_10, VAR_14->use_embdphy);
 FUNC_3(VAR_10, VAR_14->use_embdphy);


 if (VAR_10->driver_info->flags & VAR_6) {


  VAR_10->rx_urb_size = 2048;
 }


 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12)
  goto free;

 return 0;

free:
 FUNC_4(VAR_14);
 return VAR_12;
}
