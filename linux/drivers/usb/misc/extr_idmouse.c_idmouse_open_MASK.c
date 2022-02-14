
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_idmouse {int lock; scalar_t__ open; } ;
struct inode {int dummy; } ;
struct file {struct usb_idmouse* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_idmouse*) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*) ;
 struct usb_interface* FUNC_6 (int *,int ) ;
 struct usb_idmouse* FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 struct usb_idmouse *VAR_6;
 struct usb_interface *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_6 (&VAR_2, FUNC_1 (VAR_4));
 if (!VAR_7)
  return -VAR_1;

 FUNC_2(&VAR_3);

 VAR_6 = FUNC_7(VAR_7);
 if (!VAR_6) {
  FUNC_3(&VAR_3);
  return -VAR_1;
 }


 FUNC_2(&VAR_6->lock);
 FUNC_3(&VAR_3);


 if (VAR_6->open) {


  VAR_8 = -VAR_0;

 } else {


  VAR_8 = FUNC_4(VAR_7);
  if (VAR_8)
   goto error;
  VAR_8 = FUNC_0 (VAR_6);
  FUNC_5(VAR_7);
  if (VAR_8)
   goto error;


  ++VAR_6->open;


  VAR_5->private_data = VAR_6;

 }

error:


 FUNC_3(&VAR_6->lock);
 return VAR_8;
}
