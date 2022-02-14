
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {int sw_lock; } ;
struct inode {int dummy; } ;
struct file {struct usb_ftdi* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ftdi*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct usb_ftdi *VAR_3 = VAR_2->private_data;
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 FUNC_1(&VAR_3->sw_lock);
 FUNC_0(VAR_3);
 return 0;
}
