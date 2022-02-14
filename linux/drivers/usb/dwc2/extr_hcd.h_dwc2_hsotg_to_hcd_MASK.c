
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct dwc2_hsotg {scalar_t__ priv; } ;



__attribute__((used)) static inline struct usb_hcd *FUNC_0(struct dwc2_hsotg *VAR_0)
{
 return (struct usb_hcd *)VAR_0->priv;
}
