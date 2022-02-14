
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_host_endpoint {struct dwc2_qh* hcpriv; } ;
struct dwc2_qh {int host_us; } ;
struct dwc2_hsotg {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline u16 FUNC_1(struct dwc2_hsotg *VAR_0,
         struct usb_host_endpoint *VAR_1)
{
 struct dwc2_qh *VAR_2 = VAR_1->hcpriv;

 if (!VAR_2) {
  FUNC_0(1);
  return 0;
 }

 return VAR_2->host_us;
}
