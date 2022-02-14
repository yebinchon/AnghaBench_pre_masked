
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {struct max3421_ep* hcpriv; } ;
struct usb_hcd {int dummy; } ;
struct max3421_hcd {int lock; } ;
struct max3421_ep {int ep_list; } ;


 struct max3421_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct max3421_ep*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct usb_hcd *VAR_0, struct usb_host_endpoint *VAR_1)
{
 struct max3421_hcd *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 FUNC_4(&VAR_2->lock, VAR_3);

 if (VAR_1->hcpriv) {
  struct max3421_ep *VAR_4 = VAR_1->hcpriv;


  if (!FUNC_3(&VAR_4->ep_list))
   FUNC_2(&VAR_4->ep_list);
  FUNC_1(VAR_4);
  VAR_1->hcpriv = ((void*)0);
 }

 FUNC_5(&VAR_2->lock, VAR_3);
}
