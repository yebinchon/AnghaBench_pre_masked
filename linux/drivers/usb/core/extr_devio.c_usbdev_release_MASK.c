
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct usb_dev_state {int cred; int disc_pid; int suspend_allowed; scalar_t__ ifclaimed; int list; struct usb_device* dev; } ;
struct inode {int dummy; } ;
struct file {struct usb_dev_state* private_data; } ;
struct async {int dummy; } ;


 struct async* FUNC_0 (struct usb_dev_state*) ;
 int FUNC_1 (struct usb_dev_state*) ;
 int FUNC_2 (struct async*) ;
 int FUNC_3 (struct usb_dev_state*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_dev_state*,unsigned int) ;
 scalar_t__ FUNC_10 (unsigned int,scalar_t__*) ;
 int FUNC_11 (struct usb_device*) ;
 int FUNC_12 (struct usb_device*,struct usb_dev_state*) ;
 int FUNC_13 (struct usb_device*) ;
 int FUNC_14 (struct usb_device*) ;
 int FUNC_15 (struct usb_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_1, struct file *VAR_2)
{
 struct usb_dev_state *VAR_3 = VAR_2->private_data;
 struct usb_device *VAR_4 = VAR_3->dev;
 unsigned int VAR_5;
 struct async *VAR_6;

 FUNC_13(VAR_4);
 FUNC_12(VAR_4, VAR_3);


 FUNC_5(&VAR_0);
 FUNC_4(&VAR_3->list);
 FUNC_6(&VAR_0);

 for (VAR_5 = 0; VAR_3->ifclaimed && VAR_5 < 8*sizeof(VAR_3->ifclaimed);
   VAR_5++) {
  if (FUNC_10(VAR_5, &VAR_3->ifclaimed))
   FUNC_9(VAR_3, VAR_5);
 }
 FUNC_1(VAR_3);
 if (!VAR_3->suspend_allowed)
  FUNC_11(VAR_4);
 FUNC_15(VAR_4);
 FUNC_14(VAR_4);
 FUNC_8(VAR_3->disc_pid);
 FUNC_7(VAR_3->cred);

 VAR_6 = FUNC_0(VAR_3);
 while (VAR_6) {
  FUNC_2(VAR_6);
  VAR_6 = FUNC_0(VAR_3);
 }

 FUNC_3(VAR_3);
 return 0;
}
