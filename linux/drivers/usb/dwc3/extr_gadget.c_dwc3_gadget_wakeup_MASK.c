
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct dwc3 {int lock; } ;


 int FUNC_0 (struct dwc3*) ;
 struct dwc3* FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_0)
{
 struct dwc3 *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(&VAR_1->lock, VAR_2);
 VAR_3 = FUNC_0(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_2);

 return VAR_3;
}
