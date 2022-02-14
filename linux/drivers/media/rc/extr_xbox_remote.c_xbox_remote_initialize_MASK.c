
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbox_remote {int inbuf; int irq_urb; struct usb_device* udev; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct usb_device*,int,int ,int,int ,struct xbox_remote*,int ) ;
 int FUNC_1 (struct usb_device*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct usb_device*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct xbox_remote *VAR_2,
      struct usb_endpoint_descriptor *VAR_3)
{
 struct usb_device *VAR_4 = VAR_2->udev;
 int VAR_5, VAR_6;


 VAR_5 = FUNC_3(VAR_4, VAR_3->bEndpointAddress);
 VAR_6 = FUNC_1(VAR_4, VAR_5, FUNC_2(VAR_5));
 VAR_6 = (VAR_6 > VAR_0) ? VAR_0 : VAR_6;

 FUNC_0(VAR_2->irq_urb, VAR_4, VAR_5, VAR_2->inbuf,
    VAR_6, VAR_1, VAR_2,
    VAR_3->bInterval);

 return 0;
}
