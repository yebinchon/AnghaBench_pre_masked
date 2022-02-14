
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct dwc2_hsotg_ep {struct dwc2_hsotg* parent; } ;
struct dwc2_hsotg {int lock; } ;


 int FUNC_0 (struct usb_ep*,int,int) ;
 struct dwc2_hsotg_ep* FUNC_1 (struct usb_ep*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct usb_ep *VAR_0, int VAR_1)
{
 struct dwc2_hsotg_ep *VAR_2 = FUNC_1(VAR_0);
 struct dwc2_hsotg *VAR_3 = VAR_2->parent;
 unsigned long VAR_4 = 0;
 int VAR_5 = 0;

 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_5 = FUNC_0(VAR_0, VAR_1, 0);
 FUNC_3(&VAR_3->lock, VAR_4);

 return VAR_5;
}
