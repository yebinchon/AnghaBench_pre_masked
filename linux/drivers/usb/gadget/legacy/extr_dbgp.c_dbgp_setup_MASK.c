
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct usb_request {int length; int zero; int complete; int buf; } ;
struct usb_gadget {TYPE_2__* ep0; } ;
struct usb_ctrlrequest {scalar_t__ bRequest; int wLength; int wValue; } ;
struct TYPE_8__ {TYPE_1__* gadget; int serial; struct usb_request* req; } ;
struct TYPE_7__ {int bMaxPacketSize0; } ;
struct TYPE_6__ {int maxpacket; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 () ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,...) ;
 TYPE_3__ VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (int,int) ;
 int VAR_9 ;
 int FUNC_7 (TYPE_2__*,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_gadget *VAR_10,
        const struct usb_ctrlrequest *VAR_11)
{
 struct usb_request *VAR_12 = VAR_6.req;
 u8 VAR_13 = VAR_11->bRequest;
 u16 VAR_14 = FUNC_4(VAR_11->wValue);
 u16 VAR_15 = FUNC_4(VAR_11->wLength);
 int VAR_16 = -VAR_0;
 void *VAR_17 = ((void*)0);
 u16 VAR_18 = 0;

 if (VAR_13 == VAR_3) {
  switch (VAR_14>>8) {
  case 128:
   FUNC_2(&VAR_6.gadget->dev, "setup: desc device\n");
   VAR_18 = sizeof VAR_8;
   VAR_17 = &VAR_8;
   VAR_8.bMaxPacketSize0 = VAR_10->ep0->maxpacket;
   break;
  case 129:
   FUNC_2(&VAR_6.gadget->dev, "setup: desc debug\n");
   VAR_18 = sizeof VAR_5;
   VAR_17 = &VAR_5;
   break;
  default:
   goto fail;
  }
  VAR_16 = 0;
 } else if (VAR_13 == VAR_4 &&
     VAR_14 == VAR_2) {
  FUNC_2(&VAR_6.gadget->dev, "setup: feat debug\n");



  VAR_16 = FUNC_0(VAR_10);
  if (VAR_16 < 0) {
   goto fail;
  }
  VAR_16 = FUNC_3(VAR_6.serial, VAR_9);

  if (VAR_16 < 0)
   goto fail;
 } else
  goto fail;

 VAR_12->length = FUNC_6(VAR_15, VAR_18);
 VAR_12->zero = VAR_18 < VAR_12->length;
 if (VAR_17 && VAR_12->length)
  FUNC_5(VAR_12->buf, VAR_17, VAR_12->length);

 VAR_12->complete = VAR_7;
 return FUNC_7(VAR_10->ep0, VAR_12, VAR_1);

fail:
 FUNC_2(&VAR_6.gadget->dev,
  "setup: failure req %x v %x\n", VAR_13, VAR_14);
 return VAR_16;
}
