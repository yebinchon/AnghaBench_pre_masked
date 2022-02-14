
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct urbp {int urbp_list; scalar_t__ miter_started; struct urb* urb; } ;
struct urb {scalar_t__ dev; int error_count; int pipe; struct urbp* hcpriv; } ;
struct dummy_hcd {scalar_t__ udev; TYPE_1__* dum; int timer; struct urbp* next_frame_urbp; int urbp_list; } ;
typedef int gfp_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dummy_hcd*) ;
 int FUNC_2 (struct dummy_hcd*,struct urb*) ;
 struct dummy_hcd* FUNC_3 (struct usb_hcd*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct urbp*) ;
 struct urbp* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct usb_hcd*,struct urb*) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(
 struct usb_hcd *VAR_3,
 struct urb *VAR_4,
 gfp_t VAR_5
) {
 struct dummy_hcd *VAR_6;
 struct urbp *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(sizeof *VAR_7, VAR_5);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->urb = VAR_4;
 VAR_7->miter_started = 0;

 VAR_6 = FUNC_3(VAR_3);
 FUNC_8(&VAR_6->dum->lock, VAR_8);

 VAR_9 = FUNC_2(VAR_6, VAR_4);
 if (VAR_9) {
  FUNC_4(VAR_7);
  goto done;
 }

 VAR_9 = FUNC_13(VAR_3, VAR_4);
 if (VAR_9) {
  FUNC_4(VAR_7);
  goto done;
 }

 if (!VAR_6->udev) {
  VAR_6->udev = VAR_4->dev;
  FUNC_12(VAR_6->udev);
 } else if (FUNC_11(VAR_6->udev != VAR_4->dev))
  FUNC_0(FUNC_1(VAR_6), "usb_device address has changed!\n");

 FUNC_6(&VAR_7->urbp_list, &VAR_6->urbp_list);
 VAR_4->hcpriv = VAR_7;
 if (!VAR_6->next_frame_urbp)
  VAR_6->next_frame_urbp = VAR_7;
 if (FUNC_14(VAR_4->pipe) == VAR_1)
  VAR_4->error_count = 1;


 if (!FUNC_10(&VAR_6->timer))
  FUNC_7(&VAR_6->timer, VAR_2 + 1);

 done:
 FUNC_9(&VAR_6->dum->lock, VAR_8);
 return VAR_9;
}
