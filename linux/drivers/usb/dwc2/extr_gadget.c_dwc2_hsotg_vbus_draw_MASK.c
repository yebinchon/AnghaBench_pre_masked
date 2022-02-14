
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct dwc2_hsotg {int uphy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct dwc2_hsotg* FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_1, unsigned int VAR_2)
{
 struct dwc2_hsotg *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_3->uphy))
  return -VAR_0;
 return FUNC_2(VAR_3->uphy, VAR_2);
}
