
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_request {int length; struct usb_cdc_notification* buf; } ;
struct usb_composite_dev {int gadget; } ;
struct usb_cdc_notification {int bmRequestType; void* wIndex; void* wLength; void* wValue; int bNotificationType; } ;
struct TYPE_5__ {TYPE_1__* config; } ;
struct TYPE_6__ {TYPE_2__ func; } ;
struct f_ecm {int notify_state; int ctrl_id; struct usb_request* notify_req; int notify; int is_open; TYPE_3__ port; } ;
typedef struct usb_cdc_notification __le32 ;
struct TYPE_4__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,...) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 struct usb_cdc_notification FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct usb_request*,int ) ;

__attribute__((used)) static void FUNC_5(struct f_ecm *VAR_4)
{
 struct usb_request *VAR_5 = VAR_4->notify_req;
 struct usb_cdc_notification *VAR_6;
 struct usb_composite_dev *VAR_7 = VAR_4->port.func.config->cdev;
 __le32 *VAR_8;
 int VAR_9;


 if (!VAR_5)
  return;

 VAR_6 = VAR_5->buf;
 switch (VAR_4->notify_state) {
 case 129:
  return;

 case 130:
  VAR_6->bNotificationType = VAR_2;
  if (VAR_4->is_open)
   VAR_6->wValue = FUNC_1(1);
  else
   VAR_6->wValue = FUNC_1(0);
  VAR_6->wLength = 0;
  VAR_5->length = sizeof *VAR_6;

  FUNC_0(VAR_7, "notify connect %s\n",
    VAR_4->is_open ? "true" : "false");
  VAR_4->notify_state = 128;
  break;

 case 128:
  VAR_6->bNotificationType = VAR_3;
  VAR_6->wValue = FUNC_1(0);
  VAR_6->wLength = FUNC_1(8);
  VAR_5->length = VAR_0;


  VAR_8 = VAR_5->buf + sizeof *VAR_6;
  VAR_8[0] = FUNC_2(FUNC_3(VAR_7->gadget));
  VAR_8[1] = VAR_8[0];

  FUNC_0(VAR_7, "notify speed %d\n", FUNC_3(VAR_7->gadget));
  VAR_4->notify_state = 129;
  break;
 }
 VAR_6->bmRequestType = 0xA1;
 VAR_6->wIndex = FUNC_1(VAR_4->ctrl_id);

 VAR_4->notify_req = ((void*)0);
 VAR_9 = FUNC_4(VAR_4->notify, VAR_5, VAR_1);
 if (VAR_9 < 0) {
  VAR_4->notify_req = VAR_5;
  FUNC_0(VAR_7, "notify --> %d\n", VAR_9);
 }
}
