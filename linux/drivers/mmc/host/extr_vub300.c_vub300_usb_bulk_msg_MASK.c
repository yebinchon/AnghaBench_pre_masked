
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct vub300_mmc_host {TYPE_1__* urb; struct usb_device* udev; } ;
struct usb_device {int dummy; } ;
struct completion {int dummy; } ;
struct TYPE_6__ {int actual_length; int status; struct completion* context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,struct usb_device*,unsigned int,void*,int,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_8 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_9(struct vub300_mmc_host *VAR_4,
          unsigned int VAR_5, void *VAR_6, int VAR_7,
          int *VAR_8, int VAR_9)
{

 struct usb_device *VAR_10 = VAR_4->udev;
 struct completion VAR_11;
 int VAR_12;
 VAR_4->urb = FUNC_3(0, VAR_2);
 if (!VAR_4->urb)
  return -VAR_0;
 FUNC_4(VAR_4->urb, VAR_10, VAR_5, VAR_6, VAR_7,
     VAR_3, ((void*)0));
 FUNC_0(&VAR_11);
 VAR_4->urb->context = &VAR_11;
 VAR_4->urb->actual_length = 0;
 VAR_12 = FUNC_7(VAR_4->urb, VAR_2);
 if (FUNC_2(VAR_12))
  goto out;
 if (!FUNC_8
     (&VAR_11, FUNC_1(VAR_9))) {
  VAR_12 = -VAR_1;
  FUNC_6(VAR_4->urb);
 } else {
  VAR_12 = VAR_4->urb->status;
 }
out:
 *VAR_8 = VAR_4->urb->actual_length;
 FUNC_5(VAR_4->urb);
 VAR_4->urb = ((void*)0);
 return VAR_12;
}
