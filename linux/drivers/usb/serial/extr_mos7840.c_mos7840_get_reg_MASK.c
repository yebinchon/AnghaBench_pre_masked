
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct usb_ctrlrequest {void* wLength; void* wIndex; void* wValue; int bRequest; int bRequestType; } ;
struct moschip_port {unsigned char* ctrl_buf; int flags; TYPE_3__* control_urb; struct usb_ctrlrequest* dr; TYPE_2__* port; } ;
typedef int __u16 ;
struct TYPE_7__ {int transfer_buffer_length; } ;
struct TYPE_6__ {TYPE_1__* serial; } ;
struct TYPE_5__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 void* FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__*,struct usb_device*,int ,unsigned char*,unsigned char*,int,int ,struct moschip_port*) ;
 int FUNC_4 (struct usb_device*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_6(struct moschip_port *VAR_6, __u16 VAR_7, __u16 VAR_8,
      __u16 *VAR_9)
{
 struct usb_device *VAR_10 = VAR_6->port->serial->dev;
 struct usb_ctrlrequest *VAR_11 = VAR_6->dr;
 unsigned char *VAR_12 = VAR_6->ctrl_buf;
 int VAR_13;

 if (FUNC_2(VAR_4, &VAR_6->flags))
  return -VAR_0;

 VAR_11->bRequestType = VAR_3;
 VAR_11->bRequest = VAR_2;
 VAR_11->wValue = FUNC_1(VAR_7);
 VAR_11->wIndex = FUNC_1(VAR_8);
 VAR_11->wLength = FUNC_1(2);

 FUNC_3(VAR_6->control_urb, VAR_10, FUNC_4(VAR_10, 0),
        (unsigned char *)VAR_11, VAR_12, 2,
        VAR_5, VAR_6);
 VAR_6->control_urb->transfer_buffer_length = 2;
 VAR_13 = FUNC_5(VAR_6->control_urb, VAR_1);
 if (VAR_13)
  FUNC_0(VAR_4, &VAR_6->flags);

 return VAR_13;
}
