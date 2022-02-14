
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct whc_qset {int remove; int reset; } ;
struct whc {int lock; int periodic_work; int workqueue; int async_work; } ;
struct usb_host_endpoint {int desc; struct whc_qset* hcpriv; } ;
struct usb_hcd {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct wusbhc* FUNC_5 (struct usb_hcd*) ;
 struct whc* FUNC_6 (struct wusbhc*) ;

__attribute__((used)) static void FUNC_7(struct usb_hcd *VAR_0,
          struct usb_host_endpoint *VAR_1)
{
 struct wusbhc *VAR_2 = FUNC_5(VAR_0);
 struct whc *VAR_3 = FUNC_6(VAR_2);
 struct whc_qset *VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_3->lock, VAR_5);

 VAR_4 = VAR_1->hcpriv;
 if (VAR_4) {
  VAR_4->remove = 1;
  VAR_4->reset = 1;

  if (FUNC_3(&VAR_1->desc)
      || FUNC_4(&VAR_1->desc))
   FUNC_0(VAR_3->workqueue, &VAR_3->async_work);
  else
   FUNC_0(VAR_3->workqueue, &VAR_3->periodic_work);
 }

 FUNC_2(&VAR_3->lock, VAR_5);
}
