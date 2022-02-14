
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {size_t wIndex; int bRequestType; } ;
struct fotg210_udc {struct fotg210_ep** ep; } ;
struct fotg210_ep {int ep; int stall; int wedged; } ;


 size_t VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct fotg210_udc*) ;
 int FUNC_1 (struct fotg210_udc*) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct fotg210_udc *VAR_2,
    struct usb_ctrlrequest *VAR_3)
{
 struct fotg210_ep *VAR_4 =
  VAR_2->ep[VAR_3->wIndex & VAR_0];

 switch (VAR_3->bRequestType & VAR_1) {
 case 130:
  FUNC_1(VAR_2);
  break;
 case 128:
  FUNC_1(VAR_2);
  break;
 case 129:
  if (VAR_3->wIndex & VAR_0) {
   if (VAR_4->wedged) {
    FUNC_1(VAR_2);
    break;
   }
   if (VAR_4->stall)
    FUNC_2(&VAR_4->ep, 0, 0);
  }
  FUNC_1(VAR_2);
  break;
 default:
  FUNC_0(VAR_2);
  break;
 }
}
