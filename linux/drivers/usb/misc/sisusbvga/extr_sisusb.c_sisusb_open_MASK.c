
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct sisusb_usb_data {int isopen; int lock; int kref; TYPE_1__* sisusb_dev; int devinit; int ready; int present; } ;
struct inode {int dummy; } ;
struct file {struct sisusb_usb_data* private_data; } ;
struct TYPE_2__ {scalar_t__ speed; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct sisusb_usb_data*,int ) ;
 struct usb_interface* FUNC_6 (int *,int) ;
 struct sisusb_usb_data* FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_6, struct file *VAR_7)
{
 struct sisusb_usb_data *VAR_8;
 struct usb_interface *VAR_9;
 int VAR_10 = FUNC_1(VAR_6);

 VAR_9 = FUNC_6(&VAR_5, VAR_10);
 if (!VAR_9)
  return -VAR_2;

 VAR_8 = FUNC_7(VAR_9);
 if (!VAR_8)
  return -VAR_2;

 FUNC_3(&VAR_8->lock);

 if (!VAR_8->present || !VAR_8->ready) {
  FUNC_4(&VAR_8->lock);
  return -VAR_2;
 }

 if (VAR_8->isopen) {
  FUNC_4(&VAR_8->lock);
  return -VAR_0;
 }

 if (!VAR_8->devinit) {
  if (VAR_8->sisusb_dev->speed == VAR_3 ||
    VAR_8->sisusb_dev->speed >= VAR_4) {
   if (FUNC_5(VAR_8, 0)) {
    FUNC_4(&VAR_8->lock);
    FUNC_0(&VAR_8->sisusb_dev->dev,
      "Failed to initialize device\n");
    return -VAR_1;
   }
  } else {
   FUNC_4(&VAR_8->lock);
   FUNC_0(&VAR_8->sisusb_dev->dev,
     "Device not attached to USB 2.0 hub\n");
   return -VAR_1;
  }
 }


 FUNC_2(&VAR_8->kref);

 VAR_8->isopen = 1;

 VAR_7->private_data = VAR_8;

 FUNC_4(&VAR_8->lock);

 return 0;
}
