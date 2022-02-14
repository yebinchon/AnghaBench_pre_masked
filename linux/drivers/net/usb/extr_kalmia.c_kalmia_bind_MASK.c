
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {int hard_mtu; int rx_urb_size; TYPE_2__* net; int * status; int udev; int out; int in; } ;
struct usb_interface {TYPE_1__* cur_altsetting; } ;
struct TYPE_6__ {scalar_t__ bInterfaceClass; } ;
struct TYPE_5__ {int dev_addr; int hard_header_len; } ;
struct TYPE_4__ {TYPE_3__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usbnet*,int *) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct usbnet *VAR_5, struct usb_interface *VAR_6)
{
 int VAR_7;
 u8 VAR_8[VAR_1];


 if (VAR_6->cur_altsetting->desc.bInterfaceClass != VAR_3)
  return -VAR_0;

 VAR_5->in = FUNC_2(VAR_5->udev, 0x81 & VAR_4);
 VAR_5->out = FUNC_3(VAR_5->udev, 0x02 & VAR_4);
 VAR_5->status = ((void*)0);

 VAR_5->net->hard_header_len += VAR_2;
 VAR_5->hard_mtu = 1400;
 VAR_5->rx_urb_size = VAR_5->hard_mtu * 10;

 VAR_7 = FUNC_0(VAR_5, VAR_8);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_5->net->dev_addr, VAR_8, VAR_1);

 return VAR_7;
}
