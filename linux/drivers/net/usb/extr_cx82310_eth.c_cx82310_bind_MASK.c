
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {int rx_urb_size; unsigned long partial_data; TYPE_2__* net; scalar_t__ hard_mtu; struct usb_device* udev; } ;
struct usb_interface {int dummy; } ;
struct TYPE_3__ {int iProduct; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;
typedef int link ;
typedef int buf ;
struct TYPE_4__ {int* dev_addr; scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct usbnet*,int ,int,char*,int,int*,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (struct usb_device*,int ,char*,int) ;
 int FUNC_8 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_9(struct usbnet *VAR_10, struct usb_interface *VAR_11)
{
 int VAR_12;
 char VAR_13[15];
 struct usb_device *VAR_14 = VAR_10->udev;
 u8 VAR_15[3];
 int VAR_16 = 50;


 if (FUNC_7(VAR_14, VAR_14->descriptor.iProduct, VAR_13, sizeof(VAR_13)) > 0
     && FUNC_6(VAR_13, "USB NET CARD")) {
  FUNC_2(&VAR_14->dev, "ignoring: probably an ADSL modem\n");
  return -VAR_5;
 }

 VAR_12 = FUNC_8(VAR_10, VAR_11);
 if (VAR_12)
  return VAR_12;





 VAR_10->net->hard_header_len = 0;

 VAR_10->hard_mtu = VAR_4 + 2;

 VAR_10->rx_urb_size = 4096;

 VAR_10->partial_data = (unsigned long) FUNC_4(VAR_10->hard_mtu, VAR_9);
 if (!VAR_10->partial_data)
  return -VAR_6;


 while (--VAR_16) {
  VAR_12 = FUNC_0(VAR_10, VAR_1, 1, ((void*)0), 0,
      VAR_15, sizeof(VAR_15));

  if (!VAR_12 && VAR_15[0] == 1 && VAR_15[2] == 1)
   break;
  FUNC_5(500);
 }
 if (!VAR_16) {
  FUNC_1(&VAR_14->dev, "firmware not ready in time\n");
  VAR_12 = -VAR_8;
  goto err;
 }


 VAR_12 = FUNC_0(VAR_10, VAR_0, 1, "\x01", 1, ((void*)0), 0);
 if (VAR_12) {
  FUNC_1(&VAR_14->dev, "unable to enable ethernet mode: %d\n",
   VAR_12);
  goto err;
 }


 VAR_12 = FUNC_0(VAR_10, VAR_2, 1, ((void*)0), 0,
     VAR_10->net->dev_addr, VAR_7);
 if (VAR_12) {
  FUNC_1(&VAR_14->dev, "unable to read MAC address: %d\n", VAR_12);
  goto err;
 }


 VAR_12 = FUNC_0(VAR_10, VAR_3, 0, ((void*)0), 0, ((void*)0), 0);
 if (VAR_12)
  goto err;

 return 0;
err:
 FUNC_3((void *)VAR_10->partial_data);
 return VAR_12;
}
