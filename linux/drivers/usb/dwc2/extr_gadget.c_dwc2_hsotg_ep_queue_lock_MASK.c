
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct dwc2_hsotg_ep {struct dwc2_hsotg* parent; } ;
struct dwc2_hsotg {int lock; } ;
typedef int gfp_t ;


 int FUNC_0 (struct usb_ep*,struct usb_request*,int ) ;
 struct dwc2_hsotg_ep* FUNC_1 (struct usb_ep*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct usb_ep *VAR_0, struct usb_request *VAR_1,
        gfp_t VAR_2)
{
 struct dwc2_hsotg_ep *VAR_3 = FUNC_1(VAR_0);
 struct dwc2_hsotg *VAR_4 = VAR_3->parent;
 unsigned long VAR_5 = 0;
 int VAR_6 = 0;

 FUNC_2(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_3(&VAR_4->lock, VAR_5);

 return VAR_6;
}
