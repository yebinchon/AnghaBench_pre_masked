
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct chaoskey* private_data; } ;
struct chaoskey {scalar_t__ open; int lock; int present; struct usb_interface* interface; } ;


 int VAR_0 ;
 int FUNC_0 (struct chaoskey*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_interface*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 struct chaoskey *VAR_3 = VAR_2->private_data;
 struct usb_interface *VAR_4;

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_4 = VAR_3->interface;

 FUNC_3(VAR_4, "release");

 FUNC_1(&VAR_3->lock);

 FUNC_3(VAR_4, "open count at release is %d", VAR_3->open);

 if (VAR_3->open <= 0) {
  FUNC_3(VAR_4, "invalid open count (%d)", VAR_3->open);
  FUNC_2(&VAR_3->lock);
  return -VAR_0;
 }

 --VAR_3->open;

 if (!VAR_3->present) {
  if (VAR_3->open == 0) {
   FUNC_2(&VAR_3->lock);
   FUNC_0(VAR_3);
  } else
   FUNC_2(&VAR_3->lock);
 } else
  FUNC_2(&VAR_3->lock);

 FUNC_3(VAR_4, "release success");
 return 0;
}
