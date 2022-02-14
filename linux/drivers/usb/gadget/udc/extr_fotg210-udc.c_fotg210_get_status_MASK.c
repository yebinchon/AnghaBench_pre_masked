
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct usb_ctrlrequest {int bRequestType; size_t wIndex; } ;
struct TYPE_3__ {int ep0; } ;
struct fotg210_udc {int ep0_data; int lock; TYPE_2__* ep0_req; TYPE_1__ gadget; int * ep; } ;
struct TYPE_4__ {int* buf; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fotg210_udc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct fotg210_udc *VAR_5,
    struct usb_ctrlrequest *VAR_6)
{
 u8 VAR_7;

 switch (VAR_6->bRequestType & VAR_4) {
 case 130:
  VAR_5->ep0_data = 1 << VAR_1;
  break;
 case 128:
  VAR_5->ep0_data = 0;
  break;
 case 129:
  VAR_7 = VAR_6->wIndex & VAR_3;
  if (VAR_7)
   VAR_5->ep0_data =
    FUNC_1(VAR_5->ep[VAR_7])
    << VAR_2;
  else
   FUNC_2(VAR_5);
  break;

 default:
  FUNC_2(VAR_5);
  return;
 }

 VAR_5->ep0_req->buf = &VAR_5->ep0_data;
 VAR_5->ep0_req->length = 2;

 FUNC_4(&VAR_5->lock);
 FUNC_0(VAR_5->gadget.ep0, VAR_5->ep0_req, VAR_0);
 FUNC_3(&VAR_5->lock);
}
