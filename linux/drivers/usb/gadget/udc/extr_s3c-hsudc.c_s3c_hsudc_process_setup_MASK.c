
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_ctrlrequest {int bRequestType; int bRequest; int member_0; } ;
struct s3c_hsudc_ep {int bEndpointAddress; int ep; } ;
struct s3c_hsudc {void* ep0state; int dev; int lock; int gadget; TYPE_1__* driver; struct s3c_hsudc_ep* ep; } ;
struct TYPE_2__ {int (* setup ) (int *,struct usb_ctrlrequest*) ;} ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct s3c_hsudc*,struct usb_ctrlrequest*) ;
 int FUNC_2 (struct s3c_hsudc_ep*,int ) ;
 int FUNC_3 (struct s3c_hsudc*,struct usb_ctrlrequest*) ;
 int FUNC_4 (struct s3c_hsudc*,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct usb_ctrlrequest*) ;

__attribute__((used)) static void FUNC_9(struct s3c_hsudc *VAR_9)
{
 struct s3c_hsudc_ep *VAR_10 = &VAR_9->ep[0];
 struct usb_ctrlrequest VAR_11 = {0};
 int VAR_12;

 FUNC_2(VAR_10, -VAR_2);
 FUNC_4(VAR_9, (u16 *)&VAR_11);

 if (VAR_11.bRequestType & VAR_3) {
  VAR_10->bEndpointAddress |= VAR_3;
  VAR_9->ep0state = VAR_1;
 } else {
  VAR_10->bEndpointAddress &= ~VAR_3;
  VAR_9->ep0state = VAR_0;
 }

 switch (VAR_11.bRequest) {
 case 129:
  if (VAR_11.bRequestType != (VAR_7 | VAR_4))
   break;
  VAR_9->ep0state = VAR_8;
  return;

 case 130:
  if ((VAR_11.bRequestType & VAR_6) != VAR_7)
   break;
  FUNC_3(VAR_9, &VAR_11);
  return;

 case 128:
 case 131:
  if ((VAR_11.bRequestType & VAR_6) != VAR_7)
   break;
  FUNC_1(VAR_9, &VAR_11);
  VAR_9->ep0state = VAR_8;
  return;
 }

 if (VAR_9->driver) {
  FUNC_7(&VAR_9->lock);
  VAR_12 = VAR_9->driver->setup(&VAR_9->gadget, &VAR_11);
  FUNC_6(&VAR_9->lock);

  if (VAR_11.bRequest == VAR_5) {
   VAR_10->bEndpointAddress &= ~VAR_3;
   VAR_9->ep0state = VAR_8;
  }

  if (VAR_12 < 0) {
   FUNC_0(VAR_9->dev, "setup failed, returned %d\n",
      VAR_12);
   FUNC_5(&VAR_10->ep, 1);
   VAR_9->ep0state = VAR_8;
   VAR_10->bEndpointAddress &= ~VAR_3;
  }
 }
}
