
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* udev; int flags; int net; } ;
struct usb_cdc_speed_change {int dummy; } ;
struct usb_cdc_notification {int bNotificationType; int wValue; } ;
struct urb {int actual_length; struct usb_cdc_notification* transfer_buffer; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (struct usbnet*,struct usb_cdc_speed_change*) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct usbnet*,int ,int ,char*,char*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct usbnet*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct usbnet *VAR_2, struct urb *VAR_3)
{
 struct usb_cdc_notification *VAR_4;

 if (VAR_3->actual_length < sizeof(*VAR_4))
  return;


 if (FUNC_4(VAR_0, &VAR_2->flags)) {
  FUNC_0(VAR_2,
        (struct usb_cdc_speed_change *)VAR_3->transfer_buffer);
  return;
 }

 VAR_4 = VAR_3->transfer_buffer;

 switch (VAR_4->bNotificationType) {
 case 129:





  FUNC_2(VAR_2, VAR_1, VAR_2->net,
      "network connection: %sconnected\n",
      !!VAR_4->wValue ? "" : "dis");
  FUNC_5(VAR_2, !!VAR_4->wValue, 0);
  break;

 case 128:
  if (VAR_3->actual_length < (sizeof(*VAR_4) +
     sizeof(struct usb_cdc_speed_change)))
   FUNC_3(VAR_0, &VAR_2->flags);
  else
   FUNC_0(VAR_2,
          (struct usb_cdc_speed_change *)&VAR_4[1]);
  break;

 default:
  FUNC_1(&VAR_2->udev->dev,
   "NCM: unexpected notification 0x%02x!\n",
   VAR_4->bNotificationType);
  break;
 }
}
