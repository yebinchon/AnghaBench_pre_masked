
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct usb_interface_descriptor {scalar_t__ bInterfaceClass; int bInterfaceSubClass; int bInterfaceProtocol; size_t bNumEndpoints; int bInterfaceNumber; } ;
struct usb_interface {TYPE_3__* altsetting; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int idProduct; int idVendor; } ;
struct TYPE_4__ {int bNumConfigurations; scalar_t__ bDeviceClass; } ;
struct usb_device {scalar_t__ speed; TYPE_1__ descriptor; int dev; } ;
struct brcmf_usbdev_info {scalar_t__ rx_pipe; scalar_t__ tx_pipe; int dev_init_done; int ifnum; int * dev; struct usb_device* usbdev; } ;
struct TYPE_6__ {TYPE_2__* endpoint; struct usb_interface_descriptor desc; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct brcmf_usbdev_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct brcmf_usbdev_info*) ;
 struct brcmf_usbdev_info* FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (struct usb_endpoint_descriptor*) ;
 size_t FUNC_9 (struct usb_endpoint_descriptor*) ;
 int FUNC_10 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_11 (struct usb_device*,size_t) ;
 int FUNC_12 (struct usb_interface*,struct brcmf_usbdev_info*) ;
 scalar_t__ FUNC_13 (struct usb_device*,size_t) ;

__attribute__((used)) static int
FUNC_14(struct usb_interface *VAR_10, const struct usb_device_id *VAR_11)
{
 struct usb_device *VAR_12 = FUNC_5(VAR_10);
 struct brcmf_usbdev_info *VAR_13;
 struct usb_interface_descriptor *VAR_14;
 struct usb_endpoint_descriptor *VAR_15;
 int VAR_16 = 0;
 u32 VAR_17;
 u8 VAR_18, VAR_19;

 FUNC_0(VAR_3, "Enter 0x%04x:0x%04x\n", VAR_11->idVendor, VAR_11->idProduct);

 VAR_13 = FUNC_7(sizeof(*VAR_13), VAR_2);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 VAR_13->usbdev = VAR_12;
 VAR_13->dev = &VAR_12->dev;



 FUNC_4(&VAR_13->dev_init_done);

 FUNC_12(VAR_10, VAR_13);


 if (VAR_12->descriptor.bNumConfigurations != 1) {
  FUNC_1("Number of configurations: %d not supported\n",
     VAR_12->descriptor.bNumConfigurations);
  VAR_16 = -VAR_0;
  goto fail;
 }

 if ((VAR_12->descriptor.bDeviceClass != VAR_5) &&
     (VAR_12->descriptor.bDeviceClass != VAR_4) &&
     (VAR_12->descriptor.bDeviceClass != VAR_6)) {
  FUNC_1("Device class: 0x%x not supported\n",
     VAR_12->descriptor.bDeviceClass);
  VAR_16 = -VAR_0;
  goto fail;
 }

 VAR_14 = &VAR_10->altsetting[0].desc;
 if ((VAR_14->bInterfaceClass != VAR_5) ||
     (VAR_14->bInterfaceSubClass != 2) ||
     (VAR_14->bInterfaceProtocol != 0xff)) {
  FUNC_1("non WLAN interface %d: 0x%x:0x%x:0x%x\n",
     VAR_14->bInterfaceNumber, VAR_14->bInterfaceClass,
     VAR_14->bInterfaceSubClass, VAR_14->bInterfaceProtocol);
  VAR_16 = -VAR_0;
  goto fail;
 }

 VAR_17 = VAR_14->bNumEndpoints;
 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  VAR_15 = &VAR_10->altsetting[0].endpoint[VAR_19].desc;
  VAR_18 = FUNC_9(VAR_15);
  if (!FUNC_10(VAR_15))
   continue;
  if (FUNC_8(VAR_15)) {
   if (!VAR_13->rx_pipe)
    VAR_13->rx_pipe =
     FUNC_11(VAR_12, VAR_18);
  } else {
   if (!VAR_13->tx_pipe)
    VAR_13->tx_pipe =
     FUNC_13(VAR_12, VAR_18);
  }
 }
 if (VAR_13->rx_pipe == 0) {
  FUNC_1("No RX (in) Bulk EP found\n");
  VAR_16 = -VAR_0;
  goto fail;
 }
 if (VAR_13->tx_pipe == 0) {
  FUNC_1("No TX (out) Bulk EP found\n");
  VAR_16 = -VAR_0;
  goto fail;
 }

 VAR_13->ifnum = VAR_14->bInterfaceNumber;

 if (VAR_12->speed == VAR_9)
  FUNC_0(VAR_3, "Broadcom super speed plus USB WLAN interface detected\n");
 else if (VAR_12->speed == VAR_8)
  FUNC_0(VAR_3, "Broadcom super speed USB WLAN interface detected\n");
 else if (VAR_12->speed == VAR_7)
  FUNC_0(VAR_3, "Broadcom high speed USB WLAN interface detected\n");
 else
  FUNC_0(VAR_3, "Broadcom full speed USB WLAN interface detected\n");

 VAR_16 = FUNC_2(VAR_13);
 if (VAR_16)
  goto fail;


 return 0;

fail:
 FUNC_3(&VAR_13->dev_init_done);
 FUNC_6(VAR_13);
 FUNC_12(VAR_10, ((void*)0));
 return VAR_16;
}
