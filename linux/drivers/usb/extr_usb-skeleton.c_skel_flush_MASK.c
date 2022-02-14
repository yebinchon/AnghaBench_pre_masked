
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_skel {int errors; int io_mutex; int err_lock; } ;
struct file {struct usb_skel* private_data; } ;
typedef int fl_owner_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_skel*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, fl_owner_t VAR_4)
{
 struct usb_skel *VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->private_data;
 if (VAR_5 == ((void*)0))
  return -VAR_1;


 FUNC_0(&VAR_5->io_mutex);
 FUNC_2(VAR_5);


 FUNC_3(&VAR_5->err_lock);
 VAR_6 = VAR_5->errors ? (VAR_5->errors == -VAR_2 ? -VAR_2 : -VAR_0) : 0;
 VAR_5->errors = 0;
 FUNC_4(&VAR_5->err_lock);

 FUNC_1(&VAR_5->io_mutex);

 return VAR_6;
}
