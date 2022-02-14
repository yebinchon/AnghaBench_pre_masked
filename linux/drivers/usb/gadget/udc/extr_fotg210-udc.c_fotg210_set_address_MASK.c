
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int wValue; } ;
struct fotg210_udc {int dummy; } ;


 int FUNC_0 (struct fotg210_udc*) ;
 int FUNC_1 (struct fotg210_udc*) ;
 int FUNC_2 (struct fotg210_udc*,int) ;

__attribute__((used)) static void FUNC_3(struct fotg210_udc *VAR_0,
    struct usb_ctrlrequest *VAR_1)
{
 if (VAR_1->wValue >= 0x0100) {
  FUNC_0(VAR_0);
 } else {
  FUNC_2(VAR_0, VAR_1->wValue);
  FUNC_1(VAR_0);
 }
}
