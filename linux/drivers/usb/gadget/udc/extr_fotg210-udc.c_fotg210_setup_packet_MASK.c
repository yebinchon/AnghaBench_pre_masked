
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct usb_ctrlrequest {int bRequestType; int bRequest; } ;
struct TYPE_4__ {scalar_t__ speed; } ;
struct fotg210_udc {TYPE_2__ gadget; scalar_t__ reg; TYPE_1__** ep; } ;
struct TYPE_3__ {int dir_in; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;





 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fotg210_udc*,struct usb_ctrlrequest*) ;
 int FUNC_1 (struct fotg210_udc*,struct usb_ctrlrequest*) ;
 int FUNC_2 (struct fotg210_udc*,int*) ;
 int FUNC_3 (struct fotg210_udc*,struct usb_ctrlrequest*) ;
 int FUNC_4 (struct fotg210_udc*) ;
 int FUNC_5 (struct fotg210_udc*,struct usb_ctrlrequest*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct fotg210_udc *VAR_8,
    struct usb_ctrlrequest *VAR_9)
{
 u8 *VAR_10 = (u8 *)VAR_9;
 u8 VAR_11 = 0;

 FUNC_2(VAR_8, VAR_10);

 VAR_8->ep[0]->dir_in = VAR_9->bRequestType & VAR_2;

 if (VAR_8->gadget.speed == VAR_5) {
  u32 VAR_12 = FUNC_6(VAR_8->reg + VAR_1);
  VAR_8->gadget.speed = VAR_12 & VAR_0 ?
    VAR_4 : VAR_3;
 }


 if ((VAR_9->bRequestType & VAR_6) == VAR_7) {
  switch (VAR_9->bRequest) {
  case 131:
   FUNC_1(VAR_8, VAR_9);
   break;
  case 132:
   FUNC_0(VAR_8, VAR_9);
   break;
  case 128:
   FUNC_5(VAR_8, VAR_9);
   break;
  case 130:
   FUNC_3(VAR_8, VAR_9);
   break;
  case 129:
   FUNC_4(VAR_8);
   VAR_11 = 1;
   break;
  default:
   VAR_11 = 1;
   break;
  }
 } else {
  VAR_11 = 1;
 }

 return VAR_11;
}
