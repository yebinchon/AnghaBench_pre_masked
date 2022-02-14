
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct dwc2_hsotg_req {struct usb_request req; } ;
struct dwc2_hsotg_ep {int dir_in; } ;
struct dwc2_hsotg {int gadget; } ;


 int FUNC_0 (int *,struct usb_request*,int ) ;

__attribute__((used)) static void FUNC_1(struct dwc2_hsotg *VAR_0,
     struct dwc2_hsotg_ep *VAR_1,
    struct dwc2_hsotg_req *VAR_2)
{
 struct usb_request *VAR_3 = &VAR_2->req;

 FUNC_0(&VAR_0->gadget, VAR_3, VAR_1->dir_in);
}
