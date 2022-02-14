
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct chaoskey* private_data; } ;
struct chaoskey {int lock; int open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_interface*,char*) ;
 struct usb_interface* FUNC_4 (int *,int ) ;
 struct chaoskey* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 struct chaoskey *VAR_4;
 struct usb_interface *VAR_5;


 VAR_5 = FUNC_4(&VAR_1, FUNC_0(VAR_2));
 if (!VAR_5)
  return -VAR_0;

 FUNC_3(VAR_5, "open");

 VAR_4 = FUNC_5(VAR_5);
 if (!VAR_4) {
  FUNC_3(VAR_5, "open (dev)");
  return -VAR_0;
 }

 VAR_3->private_data = VAR_4;
 FUNC_1(&VAR_4->lock);
 ++VAR_4->open;
 FUNC_2(&VAR_4->lock);

 FUNC_3(VAR_5, "open success");
 return 0;
}
