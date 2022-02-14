
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u16 ;
struct usb_request {unsigned int length; struct usb_cdc_notification* buf; } ;
struct usb_ep {int dummy; } ;
struct usb_cdc_notification {int bmRequestType; void* wLength; void* wIndex; void* wValue; int bNotificationType; } ;
struct TYPE_5__ {TYPE_1__* config; } ;
struct TYPE_6__ {TYPE_2__ func; } ;
struct f_acm {int pending; unsigned int ctrl_id; struct usb_request* notify_req; int port_num; TYPE_3__ port; int lock; struct usb_ep* notify; } ;
struct TYPE_4__ {int cdev; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (void*,void*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_ep*,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_6(struct f_acm *VAR_4, u8 VAR_5, u16 VAR_6,
  void *VAR_7, unsigned VAR_8)
{
 struct usb_ep *VAR_9 = VAR_4->notify;
 struct usb_request *VAR_10;
 struct usb_cdc_notification *VAR_11;
 const unsigned VAR_12 = sizeof(*VAR_11) + VAR_8;
 void *VAR_13;
 int VAR_14;

 VAR_10 = VAR_4->notify_req;
 VAR_4->notify_req = ((void*)0);
 VAR_4->pending = 0;

 VAR_10->length = VAR_12;
 VAR_11 = VAR_10->buf;
 VAR_13 = VAR_11 + 1;

 VAR_11->bmRequestType = VAR_1 | VAR_3
   | VAR_2;
 VAR_11->bNotificationType = VAR_5;
 VAR_11->wValue = FUNC_1(VAR_6);
 VAR_11->wIndex = FUNC_1(VAR_4->ctrl_id);
 VAR_11->wLength = FUNC_1(VAR_8);
 FUNC_2(VAR_13, VAR_7, VAR_8);


 FUNC_4(&VAR_4->lock);
 VAR_14 = FUNC_5(VAR_9, VAR_10, VAR_0);
 FUNC_3(&VAR_4->lock);

 if (VAR_14 < 0) {
  FUNC_0(VAR_4->port.func.config->cdev,
    "acm ttyGS%d can't notify serial state, %d\n",
    VAR_4->port_num, VAR_14);
  VAR_4->notify_req = VAR_10;
 }

 return VAR_14;
}
