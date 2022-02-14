
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct usbnet {int can_dma_sg; TYPE_3__* net; int udev; int rx_urb_size; struct aqc111_data* driver_priv; } ;
struct usb_interface {int dummy; } ;
struct usb_device {int speed; TYPE_2__* actconfig; } ;
struct aqc111_data {int advertised_speed; int autoneg; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_7__ {int needed_headroom; int needed_tailroom; int max_mtu; int vlan_features; int features; int hw_features; int * ethtool_ops; int * netdev_ops; int perm_addr; int dev_addr; } ;
struct TYPE_5__ {int bConfigurationValue; } ;
struct TYPE_6__ {TYPE_1__ desc; } ;


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
 int FUNC_0 (struct usbnet*,struct aqc111_data*) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (int ,int ) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct aqc111_data*) ;
 struct aqc111_data* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct usb_device*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_12(struct usbnet *VAR_13, struct usb_interface *VAR_14)
{
 struct usb_device *VAR_15 = FUNC_3(VAR_14);
 enum usb_device_speed VAR_16 = VAR_15->speed;
 struct aqc111_data *VAR_17;
 int VAR_18;


 if (VAR_15->actconfig->desc.bConfigurationValue != 1) {
  FUNC_9(VAR_15, 1);
  return -VAR_4;
 }

 FUNC_10(VAR_13->udev);

 VAR_18 = FUNC_11(VAR_13, VAR_14);
 if (VAR_18 < 0) {
  FUNC_6(VAR_13->net, "usbnet_get_endpoints failed");
  return VAR_18;
 }

 VAR_17 = FUNC_5(sizeof(*VAR_17), VAR_6);
 if (!VAR_17)
  return -VAR_5;


 VAR_13->driver_priv = VAR_17;


 VAR_18 = FUNC_1(VAR_13);
 if (VAR_18)
  goto out;

 FUNC_2(VAR_13->net->dev_addr, VAR_13->net->perm_addr);


 VAR_13->rx_urb_size = VAR_9;


 VAR_13->net->needed_headroom += sizeof(u64);
 VAR_13->net->needed_tailroom += sizeof(u64);

 VAR_13->net->max_mtu = 16334;

 VAR_13->net->netdev_ops = &VAR_12;
 VAR_13->net->ethtool_ops = &VAR_11;

 if (FUNC_8(VAR_13->udev))
  VAR_13->can_dma_sg = 1;

 VAR_13->net->hw_features |= VAR_1;
 VAR_13->net->features |= VAR_0;
 VAR_13->net->vlan_features |= VAR_2;

 FUNC_7(VAR_13->net, 65535);

 FUNC_0(VAR_13, VAR_17);
 VAR_17->autoneg = VAR_3;
 VAR_17->advertised_speed = (VAR_16 == VAR_10) ?
      VAR_8 : VAR_7;

 return 0;

out:
 FUNC_4(VAR_17);
 return VAR_18;
}
