
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct dwc2_qh* hcpriv; } ;
struct dwc2_qh {int data_toggle; } ;
struct dwc2_hsotg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct dwc2_hsotg *VAR_2,
       struct usb_host_endpoint *VAR_3)
{
 struct dwc2_qh *VAR_4 = VAR_3->hcpriv;

 if (!VAR_4)
  return -VAR_1;

 VAR_4->data_toggle = VAR_0;

 return 0;
}
