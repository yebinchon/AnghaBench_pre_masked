
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_ftdi {int sw_lock; } ;
struct inode {int dummy; } ;
struct file {struct usb_ftdi* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct usb_ftdi*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,int) ;
 struct usb_interface* FUNC_4 (int *,int) ;
 struct usb_ftdi* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5;
 struct usb_interface *VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_4(&VAR_2, VAR_5);

 if (!VAR_6) {
  FUNC_3("can't find device for minor %d\n", VAR_5);
  return -VAR_1;
 } else {
  struct usb_ftdi *VAR_7 = FUNC_5(VAR_6);
  if (!VAR_7) {
   return -VAR_1;
  } else {
   if (FUNC_0(&VAR_7->sw_lock)) {
    return -VAR_0;
   } else {
    FUNC_1(VAR_7);
    VAR_4->private_data = VAR_7;
    return 0;
   }
  }
 }
}
