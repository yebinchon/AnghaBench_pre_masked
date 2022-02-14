
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvc_device {int quirks; int * status; TYPE_2__* udev; int * int_urb; struct usb_host_endpoint* int_ep; } ;
struct TYPE_4__ {int bInterval; int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_1__ desc; } ;
struct TYPE_5__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,TYPE_2__*,unsigned int,int *,int ,int ,struct uvc_device*,int) ;
 unsigned int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct uvc_device*) ;
 int VAR_5 ;

int FUNC_7(struct uvc_device *VAR_6)
{
 struct usb_host_endpoint *VAR_7 = VAR_6->int_ep;
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_7 == ((void*)0))
  return 0;

 FUNC_6(VAR_6);

 VAR_6->status = FUNC_2(VAR_3, VAR_1);
 if (VAR_6->status == ((void*)0))
  return -VAR_0;

 VAR_6->int_urb = FUNC_3(0, VAR_1);
 if (VAR_6->int_urb == ((void*)0)) {
  FUNC_1(VAR_6->status);
  return -VAR_0;
 }

 VAR_8 = FUNC_5(VAR_6->udev, VAR_7->desc.bEndpointAddress);




 VAR_9 = VAR_7->desc.bInterval;
 if (VAR_9 > 16 && VAR_6->udev->speed == VAR_2 &&
     (VAR_6->quirks & VAR_4))
  VAR_9 = FUNC_0(VAR_9) - 1;

 FUNC_4(VAR_6->int_urb, VAR_6->udev, VAR_8,
  VAR_6->status, VAR_3, VAR_5,
  VAR_6, VAR_9);

 return 0;
}
