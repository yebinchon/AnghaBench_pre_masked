
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct usb_cdc_notification {scalar_t__ bNotificationType; scalar_t__ wValue; } ;
struct urb {int actual_length; struct usb_cdc_notification* transfer_buffer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct usbnet*,int ,int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct usbnet*,struct urb*) ;
 int FUNC_4 (struct usbnet*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct usbnet *VAR_2, struct urb *VAR_3)
{
 struct usb_cdc_notification *VAR_4;

 if (VAR_3->actual_length < sizeof(*VAR_4))
  return;

 VAR_4 = VAR_3->transfer_buffer;

 if (VAR_4->bNotificationType != VAR_0) {
  FUNC_3(VAR_2, VAR_3);
  return;
 }

 FUNC_2(VAR_2, VAR_1, VAR_2->net, "CDC: carrier %s\n",
    VAR_4->wValue ? "on" : "off");

 if (VAR_4->wValue &&
     FUNC_1(VAR_2->net))
  FUNC_0(VAR_2->net);

 FUNC_4(VAR_2, !!VAR_4->wValue, 0);
}
