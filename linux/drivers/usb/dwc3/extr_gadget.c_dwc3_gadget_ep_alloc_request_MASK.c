
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct dwc3_request {struct usb_request request; int status; struct dwc3_ep* dep; int epnum; int direction; } ;
struct dwc3_ep {int number; int direction; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct dwc3_request* FUNC_0 (int,int ) ;
 struct dwc3_ep* FUNC_1 (struct usb_ep*) ;
 int FUNC_2 (struct dwc3_request*) ;

__attribute__((used)) static struct usb_request *FUNC_3(struct usb_ep *VAR_1,
  gfp_t VAR_2)
{
 struct dwc3_request *VAR_3;
 struct dwc3_ep *VAR_4 = FUNC_1(VAR_1);

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->direction = VAR_4->direction;
 VAR_3->epnum = VAR_4->number;
 VAR_3->dep = VAR_4;
 VAR_3->status = VAR_0;

 FUNC_2(VAR_3);

 return &VAR_3->request;
}
