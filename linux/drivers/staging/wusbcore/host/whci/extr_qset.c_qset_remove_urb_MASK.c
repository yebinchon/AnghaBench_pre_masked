
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int usb_hcd; } ;
struct whc_urb {int dummy; } ;
struct whc_qset {int dummy; } ;
struct whc {int lock; struct wusbhc wusbhc; } ;
struct urb {struct whc_urb* hcpriv; } ;


 int FUNC_0 (struct whc_urb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct urb*) ;
 int FUNC_4 (struct wusbhc*,struct urb*,int) ;

void FUNC_5(struct whc *VAR_0, struct whc_qset *VAR_1,
       struct urb *VAR_2, int VAR_3)
{
 struct wusbhc *VAR_4 = &VAR_0->wusbhc;
 struct whc_urb *VAR_5 = VAR_2->hcpriv;

 FUNC_3(&VAR_4->usb_hcd, VAR_2);

 FUNC_2(&VAR_0->lock);
 FUNC_4(VAR_4, VAR_2, VAR_3);
 FUNC_1(&VAR_0->lock);

 FUNC_0(VAR_5);
}
