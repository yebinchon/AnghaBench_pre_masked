
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int usb_hcd; } ;
struct wusb_dev {int devconnect_acked_work; int cack_node; int entry_ts; } ;
struct urb {int dev; } ;


 struct wusb_dev* FUNC_0 (struct wusbhc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,struct urb*,int) ;
 int FUNC_4 (struct wusb_dev*) ;
 int VAR_1 ;

void FUNC_5(struct wusbhc *VAR_2, struct urb *VAR_3, int VAR_4)
{
 struct wusb_dev *VAR_5 = FUNC_0(VAR_2,
     VAR_3->dev);

 if (VAR_4 == 0 && VAR_5) {
  VAR_5->entry_ts = VAR_0;



  if (!FUNC_1(&VAR_5->cack_node))
   FUNC_2(VAR_1, &VAR_5->devconnect_acked_work);
  else
   FUNC_4(VAR_5);
 }

 FUNC_3(&VAR_2->usb_hcd, VAR_3, VAR_4);
}
