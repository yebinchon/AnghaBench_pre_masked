
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct tm6000_fh {int fh; int vb_vidq; int radio; struct tm6000_core* dev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_3__ {scalar_t__ endp; } ;
struct tm6000_core {int lock; TYPE_2__ isoc_in; int udev; TYPE_1__ int_in; int users; } ;
struct file {struct tm6000_fh* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct tm6000_core*,int ,char*,int ,int ) ;
 int FUNC_1 (struct tm6000_fh*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tm6000_core*,struct tm6000_fh*) ;
 int FUNC_5 (struct tm6000_core*) ;
 int FUNC_6 (struct tm6000_core*) ;
 int FUNC_7 (struct tm6000_core*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct video_device* FUNC_12 (struct file*) ;
 int FUNC_13 (struct video_device*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_1)
{
 struct tm6000_fh *VAR_2 = VAR_1->private_data;
 struct tm6000_core *VAR_3 = VAR_2->dev;
 struct video_device *VAR_4 = FUNC_12(VAR_1);

 FUNC_0(VAR_3, VAR_0, "tm6000: close called (dev=%s, users=%d)\n",
  FUNC_13(VAR_4), VAR_3->users);

 FUNC_2(&VAR_3->lock);
 VAR_3->users--;

 FUNC_4(VAR_3, VAR_2);

 if (!VAR_3->users) {
  FUNC_7(VAR_3);


  FUNC_6(VAR_3);

  FUNC_8(VAR_3->udev);

  if (VAR_3->int_in.endp)
   FUNC_9(VAR_3->udev,
     VAR_3->isoc_in.bInterfaceNumber, 2);
  else
   FUNC_9(VAR_3->udev,
     VAR_3->isoc_in.bInterfaceNumber, 0);


  FUNC_5(VAR_3);

  if (!VAR_2->radio)
   FUNC_14(&VAR_2->vb_vidq);
 }
 FUNC_10(&VAR_2->fh);
 FUNC_11(&VAR_2->fh);
 FUNC_1(VAR_2);
 FUNC_3(&VAR_3->lock);

 return 0;
}
