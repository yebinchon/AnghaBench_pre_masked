
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct dwc3_request {int dummy; } ;
struct dwc3_ep {struct dwc3* dwc; } ;
struct dwc3 {int lock; } ;
typedef int gfp_t ;


 int FUNC_0 (struct dwc3_ep*,struct dwc3_request*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct dwc3_ep* FUNC_3 (struct usb_ep*) ;
 struct dwc3_request* FUNC_4 (struct usb_request*) ;

__attribute__((used)) static int FUNC_5(struct usb_ep *VAR_0, struct usb_request *VAR_1,
 gfp_t VAR_2)
{
 struct dwc3_request *VAR_3 = FUNC_4(VAR_1);
 struct dwc3_ep *VAR_4 = FUNC_3(VAR_0);
 struct dwc3 *VAR_5 = VAR_4->dwc;

 unsigned long VAR_6;

 int VAR_7;

 FUNC_1(&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_0(VAR_4, VAR_3);
 FUNC_2(&VAR_5->lock, VAR_6);

 return VAR_7;
}
