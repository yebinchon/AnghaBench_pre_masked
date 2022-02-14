
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct dwc2_qh* hcpriv; } ;
struct dwc2_qh {int qh_list_entry; } ;
struct dwc2_hsotg {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct dwc2_hsotg *VAR_0,
        struct usb_host_endpoint *VAR_1)
{
 struct dwc2_qh *VAR_2 = VAR_1->hcpriv;

 if (VAR_2 && !FUNC_0(&VAR_2->qh_list_entry))
  return 1;

 return 0;
}
