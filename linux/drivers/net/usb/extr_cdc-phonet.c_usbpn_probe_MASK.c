
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usbpn_dev {int active_setting; void* tx_pipe; void* rx_pipe; int rx_lock; int tx_lock; struct usb_interface* data_intf; struct usb_interface* intf; struct usb_device* usb; struct net_device* dev; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface const* altsetting; int dev; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
typedef struct usb_host_interface {int extralen; TYPE_3__* endpoint; TYPE_1__ desc; int * extra; } const usb_host_interface ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb_cdc_union_desc {int bSlaveInterface0; } ;
struct usb_cdc_parsed_header {int phonet_magic_present; struct usb_cdc_union_desc* usb_cdc_union_desc; } ;
struct net_device {int dev; } ;
struct TYPE_5__ {int bEndpointAddress; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int ,char const*,int ,int ) ;
 int FUNC_2 (struct usb_cdc_parsed_header*,struct usb_interface*,int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct net_device*) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 struct usbpn_dev* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct usbpn_dev*,int ,int ) ;
 int VAR_5 ;
 int FUNC_10 (int *,struct usb_interface*,struct usbpn_dev*) ;
 int FUNC_11 (int *,struct usb_interface*) ;
 struct usb_interface* FUNC_12 (struct usb_device*,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 void* FUNC_14 (struct usb_device*,int ) ;
 int FUNC_15 (struct usb_device*,int ,int) ;
 int FUNC_16 (struct usb_interface*,struct usbpn_dev*) ;
 void* FUNC_17 (struct usb_device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_18(struct usb_interface *VAR_8, const struct usb_device_id *VAR_9)
{
 static const char VAR_10[] = "usbpn%d";
 const struct usb_cdc_union_desc *VAR_11 = ((void*)0);
 const struct usb_host_interface *VAR_12;
 struct usb_interface *VAR_13;
 struct usb_device *VAR_14 = FUNC_5(VAR_8);
 struct net_device *VAR_15;
 struct usbpn_dev *VAR_16;
 u8 *VAR_17;
 int VAR_18 = 0;
 int VAR_19, VAR_20;
 struct usb_cdc_parsed_header VAR_21;

 VAR_17 = VAR_8->altsetting->extra;
 VAR_19 = VAR_8->altsetting->extralen;
 FUNC_2(&VAR_21, VAR_8, VAR_17, VAR_19);
 VAR_11 = VAR_21.usb_cdc_union_desc;
 VAR_18 = VAR_21.phonet_magic_present;

 if (!VAR_11 || !VAR_18)
  return -VAR_0;

 VAR_13 = FUNC_12(VAR_14, VAR_11->bSlaveInterface0);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 if (VAR_13->num_altsetting != 2)
  return -VAR_0;
 if (VAR_13->altsetting[0].desc.bNumEndpoints == 0 &&
     VAR_13->altsetting[1].desc.bNumEndpoints == 2)
  VAR_12 = VAR_13->altsetting + 1;
 else
 if (VAR_13->altsetting[0].desc.bNumEndpoints == 2 &&
     VAR_13->altsetting[1].desc.bNumEndpoints == 0)
  VAR_12 = VAR_13->altsetting;
 else
  return -VAR_0;

 VAR_15 = FUNC_1(FUNC_9(VAR_16, VAR_5, VAR_4), VAR_10,
      VAR_3, VAR_7);
 if (!VAR_15)
  return -VAR_2;

 VAR_16 = FUNC_6(VAR_15);
 FUNC_0(VAR_15, &VAR_8->dev);

 VAR_16->dev = VAR_15;
 VAR_16->usb = VAR_14;
 VAR_16->intf = VAR_8;
 VAR_16->data_intf = VAR_13;
 FUNC_8(&VAR_16->tx_lock);
 FUNC_8(&VAR_16->rx_lock);

 if (FUNC_13(VAR_12->endpoint[0].desc.bEndpointAddress)) {
  VAR_16->rx_pipe = FUNC_14(VAR_14,
   VAR_12->endpoint[0].desc.bEndpointAddress);
  VAR_16->tx_pipe = FUNC_17(VAR_14,
   VAR_12->endpoint[1].desc.bEndpointAddress);
 } else {
  VAR_16->rx_pipe = FUNC_14(VAR_14,
   VAR_12->endpoint[1].desc.bEndpointAddress);
  VAR_16->tx_pipe = FUNC_17(VAR_14,
   VAR_12->endpoint[0].desc.bEndpointAddress);
 }
 VAR_16->active_setting = VAR_12 - VAR_13->altsetting;

 VAR_20 = FUNC_10(&VAR_6, VAR_13, VAR_16);
 if (VAR_20)
  goto out;


 FUNC_15(VAR_14, VAR_11->bSlaveInterface0,
    !VAR_16->active_setting);
 FUNC_16(VAR_8, VAR_16);

 VAR_20 = FUNC_7(VAR_15);
 if (VAR_20) {
  FUNC_11(&VAR_6, VAR_13);
  goto out;
 }

 FUNC_3(&VAR_15->dev, "USB CDC Phonet device found\n");
 return 0;

out:
 FUNC_16(VAR_8, ((void*)0));
 FUNC_4(VAR_15);
 return VAR_20;
}
