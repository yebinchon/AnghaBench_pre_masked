
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wrapper_priv_data {struct dwc2_hsotg* hsotg; } ;
struct usb_hcd {int hcd_priv; } ;
struct dwc2_hsotg {int dummy; } ;



__attribute__((used)) static struct dwc2_hsotg *FUNC_0(struct usb_hcd *VAR_0)
{
 struct wrapper_priv_data *VAR_1;

 VAR_1 = (struct wrapper_priv_data *)&VAR_0->hcd_priv;
 return VAR_1->hsotg;
}
