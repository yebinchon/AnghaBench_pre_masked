
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct c67x00_sie {struct c67x00_hcd* private_data; } ;
struct c67x00_hcd {int dummy; } ;


 struct usb_hcd* FUNC_0 (struct c67x00_hcd*) ;
 int FUNC_1 (struct c67x00_hcd*) ;
 int FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;

void FUNC_4(struct c67x00_sie *VAR_0)
{
 struct c67x00_hcd *VAR_1 = VAR_0->private_data;
 struct usb_hcd *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
}
