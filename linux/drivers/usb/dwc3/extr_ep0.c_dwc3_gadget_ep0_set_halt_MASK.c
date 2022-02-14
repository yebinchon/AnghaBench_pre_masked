
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct dwc3_ep {struct dwc3* dwc; } ;
struct dwc3 {int lock; } ;


 int FUNC_0 (struct usb_ep*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct dwc3_ep* FUNC_3 (struct usb_ep*) ;

int FUNC_4(struct usb_ep *VAR_0, int VAR_1)
{
 struct dwc3_ep *VAR_2 = FUNC_3(VAR_0);
 struct dwc3 *VAR_3 = VAR_2->dwc;
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_3->lock, VAR_4);

 return VAR_5;
}
