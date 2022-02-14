
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct usb_ctrlrequest {int bRequestType; int wIndex; } ;
struct fotg210_udc {int * ep; } ;


 size_t VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct fotg210_udc*) ;
 int FUNC_1 (struct fotg210_udc*) ;
 int FUNC_2 (struct fotg210_udc*) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct fotg210_udc *VAR_2,
    struct usb_ctrlrequest *VAR_3)
{
 switch (VAR_3->bRequestType & VAR_1) {
 case 130:
  FUNC_1(VAR_2);
  break;
 case 128:
  FUNC_1(VAR_2);
  break;
 case 129: {
  u8 VAR_4;
  VAR_4 = FUNC_4(VAR_3->wIndex) & VAR_0;
  if (VAR_4)
   FUNC_3(VAR_2->ep[VAR_4]);
  else
   FUNC_2(VAR_2);
  FUNC_1(VAR_2);
  }
  break;
 default:
  FUNC_0(VAR_2);
  break;
 }
}
