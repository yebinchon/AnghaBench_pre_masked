
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct usb_interface {struct device dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_3__ {int bcdDevice; scalar_t__ bDescriptorType; scalar_t__ bLength; int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; int devnum; } ;
struct net_device {int mtu; int name; int * ethtool_ops; int watchdog_timeo; int * netdev_ops; int dev_addr; int broadcast; } ;
struct TYPE_4__ {int statistics_mask; int max_multicast_filters; int hw_addr; int segment_size; } ;
struct kaweth_device {void* tx_urb; void* rx_urb; void* irq_urb; int intbufferhandle; void* intbuffer; struct usb_device* dev; int rxbufferhandle; void* rx_buf; struct net_device* net; int lowmem_work; TYPE_2__ configuration; int * firmware_buf; int term_wait; int device_lock; struct usb_interface* intf; } ;
typedef int eth_addr_t ;
typedef int bcast_addr ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct net_device*,struct device*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int *) ;
 struct usb_device* FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (struct kaweth_device*,char*,int,int) ;
 int VAR_10 ;
 int FUNC_12 (struct kaweth_device*) ;
 int FUNC_13 (struct kaweth_device*) ;
 int VAR_11 ;
 int FUNC_14 (struct kaweth_device*,int) ;
 scalar_t__ FUNC_15 (struct kaweth_device*,int ) ;
 scalar_t__ FUNC_16 (struct kaweth_device*,int ) ;
 int FUNC_17 (struct kaweth_device*,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int*,int const*,int) ;
 int FUNC_20 (int ,int const*,int) ;
 struct kaweth_device* FUNC_21 (struct net_device*) ;
 int VAR_12 ;
 scalar_t__ FUNC_22 (struct net_device*) ;
 int FUNC_23 (int *) ;
 void* FUNC_24 (struct usb_device*,int ,int ,int *) ;
 void* FUNC_25 (int ,int ) ;
 int FUNC_26 (struct usb_device*,int ,void*,int ) ;
 int FUNC_27 (void*) ;
 int FUNC_28 (struct usb_interface*,struct kaweth_device*) ;

__attribute__((used)) static int FUNC_29(
  struct usb_interface *VAR_13,
  const struct usb_device_id *VAR_14
 )
{
 struct device *VAR_15 = &VAR_13->dev;
 struct usb_device *VAR_16 = FUNC_10(VAR_13);
 struct kaweth_device *VAR_17;
 struct net_device *VAR_18;
 const eth_addr_t VAR_19 = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
 int VAR_20 = 0;
 int VAR_21 = -VAR_0;

 FUNC_4(VAR_15,
  "Kawasaki Device Probe (Device number:%d): 0x%4.4x:0x%4.4x:0x%4.4x\n",
  VAR_16->devnum, FUNC_18(VAR_16->descriptor.idVendor),
  FUNC_18(VAR_16->descriptor.idProduct),
  FUNC_18(VAR_16->descriptor.bcdDevice));

 FUNC_4(VAR_15, "Device at %p\n", VAR_16);

 FUNC_4(VAR_15, "Descriptor length: %x type: %x\n",
  (int)VAR_16->descriptor.bLength,
  (int)VAR_16->descriptor.bDescriptorType);

 VAR_18 = FUNC_3(sizeof(*VAR_17));
 if (!VAR_18)
  return -VAR_1;

 VAR_17 = FUNC_21(VAR_18);
 VAR_17->dev = VAR_16;
 VAR_17->net = VAR_18;
 VAR_17->intf = VAR_13;

 FUNC_23(&VAR_17->device_lock);
 FUNC_9(&VAR_17->term_wait);

 FUNC_4(VAR_15, "Resetting.\n");

 FUNC_13(VAR_17);






 if (FUNC_18(VAR_16->descriptor.bcdDevice) >> 8) {
  FUNC_6(VAR_15, "Firmware present in device.\n");
 } else {

  FUNC_6(VAR_15, "Downloading firmware...\n");
  VAR_17->firmware_buf = (__u8 *)FUNC_2(VAR_2);
  if (!VAR_17->firmware_buf) {
   VAR_21 = -VAR_1;
   goto err_free_netdev;
  }
  if ((VAR_20 = FUNC_11(VAR_17,
            "kaweth/new_code.bin",
            100,
            2)) < 0) {
   FUNC_5(VAR_15, "Error downloading firmware (%d)\n",
    VAR_20);
   goto err_fw;
  }

  if ((VAR_20 = FUNC_11(VAR_17,
            "kaweth/new_code_fix.bin",
            100,
            3)) < 0) {
   FUNC_5(VAR_15, "Error downloading firmware fix (%d)\n",
    VAR_20);
   goto err_fw;
  }

  if ((VAR_20 = FUNC_11(VAR_17,
            "kaweth/trigger_code.bin",
            126,
            2)) < 0) {
   FUNC_5(VAR_15, "Error downloading trigger code (%d)\n",
    VAR_20);
   goto err_fw;

  }

  if ((VAR_20 = FUNC_11(VAR_17,
            "kaweth/trigger_code_fix.bin",
            126,
            3)) < 0) {
   FUNC_5(VAR_15, "Error downloading trigger code fix (%d)\n", VAR_20);
   goto err_fw;
  }


  if ((VAR_20 = FUNC_17(VAR_17, 126)) < 0) {
   FUNC_5(VAR_15, "Error triggering firmware (%d)\n", VAR_20);
   goto err_fw;
  }


  FUNC_6(VAR_15, "Firmware loaded.  I'll be back...\n");
err_fw:
  FUNC_8((unsigned long)VAR_17->firmware_buf);
  FUNC_7(VAR_18);
  return -VAR_0;
 }

 VAR_20 = FUNC_12(VAR_17);

 if(VAR_20 < 0) {
  FUNC_5(VAR_15, "Error reading configuration (%d), no net device created\n", VAR_20);
  goto err_free_netdev;
 }

 FUNC_6(VAR_15, "Statistics collection: %x\n", VAR_17->configuration.statistics_mask);
 FUNC_6(VAR_15, "Multicast filter limit: %x\n", VAR_17->configuration.max_multicast_filters & ((1 << 15) - 1));
 FUNC_6(VAR_15, "MTU: %d\n", FUNC_18(VAR_17->configuration.segment_size));
 FUNC_6(VAR_15, "Read MAC address %pM\n", VAR_17->configuration.hw_addr);

 if(!FUNC_19(&VAR_17->configuration.hw_addr,
                   &VAR_19,
     sizeof(VAR_19))) {
  FUNC_5(VAR_15, "Firmware not functioning properly, no net device created\n");
  goto err_free_netdev;
 }

 if(FUNC_16(VAR_17, VAR_4) < 0) {
  FUNC_4(VAR_15, "Error setting URB size\n");
  goto err_free_netdev;
 }

 if(FUNC_15(VAR_17, VAR_8) < 0) {
  FUNC_5(VAR_15, "Error setting SOFS wait\n");
  goto err_free_netdev;
 }

 VAR_20 = FUNC_14(VAR_17,
                                           VAR_6 |
                                           VAR_5 |
                                           VAR_7);

 if(VAR_20 < 0) {
  FUNC_5(VAR_15, "Error setting receive filter\n");
  goto err_free_netdev;
 }

 FUNC_4(VAR_15, "Initializing net device.\n");

 VAR_17->tx_urb = FUNC_25(0, VAR_2);
 if (!VAR_17->tx_urb)
  goto err_free_netdev;
 VAR_17->rx_urb = FUNC_25(0, VAR_2);
 if (!VAR_17->rx_urb)
  goto err_only_tx;
 VAR_17->irq_urb = FUNC_25(0, VAR_2);
 if (!VAR_17->irq_urb)
  goto err_tx_and_rx;

 VAR_17->intbuffer = FUNC_24( VAR_17->dev,
      VAR_3,
      VAR_2,
      &VAR_17->intbufferhandle);
 if (!VAR_17->intbuffer)
  goto err_tx_and_rx_and_irq;
 VAR_17->rx_buf = FUNC_24( VAR_17->dev,
      VAR_4,
      VAR_2,
      &VAR_17->rxbufferhandle);
 if (!VAR_17->rx_buf)
  goto err_all_but_rxbuf;

 FUNC_20(VAR_18->broadcast, &VAR_19, sizeof(VAR_19));
 FUNC_20(VAR_18->dev_addr, &VAR_17->configuration.hw_addr,
               sizeof(VAR_17->configuration.hw_addr));

 VAR_18->netdev_ops = &VAR_10;
 VAR_18->watchdog_timeo = VAR_9;
 VAR_18->mtu = FUNC_18(VAR_17->configuration.segment_size);
 VAR_18->ethtool_ops = &VAR_12;


 FUNC_0(&VAR_17->lowmem_work, VAR_11);
 FUNC_28(VAR_13, VAR_17);

 FUNC_1(VAR_18, VAR_15);
 if (FUNC_22(VAR_18) != 0) {
  FUNC_5(VAR_15, "Error registering netdev.\n");
  goto err_intfdata;
 }

 FUNC_6(VAR_15, "kaweth interface created at %s\n",
   VAR_17->net->name);

 return 0;

err_intfdata:
 FUNC_28(VAR_13, ((void*)0));
 FUNC_26(VAR_17->dev, VAR_4, (void *)VAR_17->rx_buf, VAR_17->rxbufferhandle);
err_all_but_rxbuf:
 FUNC_26(VAR_17->dev, VAR_3, (void *)VAR_17->intbuffer, VAR_17->intbufferhandle);
err_tx_and_rx_and_irq:
 FUNC_27(VAR_17->irq_urb);
err_tx_and_rx:
 FUNC_27(VAR_17->rx_urb);
err_only_tx:
 FUNC_27(VAR_17->tx_urb);
err_free_netdev:
 FUNC_7(VAR_18);

 return VAR_21;
}
