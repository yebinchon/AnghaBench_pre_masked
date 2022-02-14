
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct whc_qset {int dummy; } ;
struct whc {int dummy; } ;
struct usb_host_endpoint {int desc; struct whc_qset* hcpriv; } ;
struct usb_hcd {int dummy; } ;


 int FUNC_0 (struct whc*,struct whc_qset*) ;
 int FUNC_1 (struct whc*,struct whc_qset*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct wusbhc* FUNC_4 (struct usb_hcd*) ;
 struct whc* FUNC_5 (struct wusbhc*) ;

__attribute__((used)) static void FUNC_6(struct usb_hcd *VAR_0,
     struct usb_host_endpoint *VAR_1)
{
 struct wusbhc *VAR_2 = FUNC_4(VAR_0);
 struct whc *VAR_3 = FUNC_5(VAR_2);
 struct whc_qset *VAR_4;

 VAR_4 = VAR_1->hcpriv;
 if (VAR_4) {
  VAR_1->hcpriv = ((void*)0);
  if (FUNC_2(&VAR_1->desc)
      || FUNC_3(&VAR_1->desc))
   FUNC_0(VAR_3, VAR_4);
  else
   FUNC_1(VAR_3, VAR_4);
 }
}
