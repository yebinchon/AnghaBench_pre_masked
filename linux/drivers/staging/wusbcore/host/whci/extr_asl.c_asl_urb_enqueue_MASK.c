
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct whc_qset {int remove; int in_sw_list; } ;
struct TYPE_2__ {int usb_hcd; } ;
struct whc {int async_work; int workqueue; int lock; TYPE_1__ wusbhc; } ;
struct urb {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct whc*,struct whc_qset*) ;
 struct whc_qset* FUNC_1 (struct whc*,struct urb*,int ) ;
 int FUNC_2 (struct whc*,struct whc_qset*,struct urb*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,struct urb*) ;
 int FUNC_7 (int *,struct urb*) ;

int FUNC_8(struct whc *VAR_2, struct urb *VAR_3, gfp_t VAR_4)
{
 struct whc_qset *VAR_5;
 int VAR_6;
 unsigned long VAR_7;

 FUNC_4(&VAR_2->lock, VAR_7);

 VAR_6 = FUNC_6(&VAR_2->wusbhc.usb_hcd, VAR_3);
 if (VAR_6 < 0) {
  FUNC_5(&VAR_2->lock, VAR_7);
  return VAR_6;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_5 == ((void*)0))
  VAR_6 = -VAR_0;
 else
  VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_3, VAR_1);
 if (!VAR_6) {
  if (!VAR_5->in_sw_list && !VAR_5->remove)
   FUNC_0(VAR_2, VAR_5);
 } else
  FUNC_7(&VAR_2->wusbhc.usb_hcd, VAR_3);

 FUNC_5(&VAR_2->lock, VAR_7);

 if (!VAR_6)
  FUNC_3(VAR_2->workqueue, &VAR_2->async_work);

 return VAR_6;
}
