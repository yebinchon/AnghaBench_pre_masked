
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct usb_request {int length; scalar_t__ zero; } ;
struct usb_function {struct usb_configuration* config; } ;
struct usb_ctrlrequest {int bRequestType; int bRequest; int wLength; int wValue; int wIndex; } ;
struct usb_configuration {TYPE_2__* cdev; } ;
struct TYPE_5__ {TYPE_1__* gadget; struct usb_request* req; } ;
struct TYPE_4__ {int ep0; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,char*,int,int ,int,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_function *VAR_6,
  const struct usb_ctrlrequest *VAR_7)
{
 struct usb_configuration *VAR_8 = VAR_6->config;
 struct usb_request *VAR_9 = VAR_8->cdev->req;
 int VAR_10 = -VAR_0;
 u16 VAR_11 = FUNC_2(VAR_7->wIndex);
 u16 VAR_12 = FUNC_2(VAR_7->wValue);
 u16 VAR_13 = FUNC_2(VAR_7->wLength);

 VAR_9->length = VAR_2;




 switch (VAR_7->bRequest) {
 case 0x5b:
  if (VAR_7->bRequestType != (VAR_4|VAR_5))
   goto unknown;
  if (VAR_12 || VAR_11)
   break;

  if (VAR_13 > VAR_9->length)
   break;
  VAR_10 = VAR_13;
  break;
 case 0x5c:
  if (VAR_7->bRequestType != (VAR_3|VAR_5))
   goto unknown;
  if (VAR_12 || VAR_11)
   break;

  if (VAR_13 > VAR_9->length)
   break;
  VAR_10 = VAR_13;
  break;

 default:
unknown:
  FUNC_1(VAR_8->cdev,
   "unknown control req%02x.%02x v%04x i%04x l%d\n",
   VAR_7->bRequestType, VAR_7->bRequest,
   VAR_12, VAR_11, VAR_13);
 }


 if (VAR_10 >= 0) {
  FUNC_1(VAR_8->cdev, "source/sink req%02x.%02x v%04x i%04x l%d\n",
   VAR_7->bRequestType, VAR_7->bRequest,
   VAR_12, VAR_11, VAR_13);
  VAR_9->zero = 0;
  VAR_9->length = VAR_10;
  VAR_10 = FUNC_3(VAR_8->cdev->gadget->ep0, VAR_9, VAR_1);
  if (VAR_10 < 0)
   FUNC_0(VAR_8->cdev, "source/sink response, err %d\n",
     VAR_10);
 }


 return VAR_10;
}
