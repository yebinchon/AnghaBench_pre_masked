
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_file_data {int err_lock; scalar_t__ out_transfer_size; scalar_t__ out_status; scalar_t__ in_urbs_used; scalar_t__ in_transfer_size; scalar_t__ in_status; struct usbtmc_device_data* data; int closing; } ;
struct usbtmc_device_data {int io_mutex; int waitq; } ;
struct file {struct usbtmc_file_data* private_data; } ;
typedef int fl_owner_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usbtmc_file_data*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_1, fl_owner_t VAR_2)
{
 struct usbtmc_file_data *VAR_3;
 struct usbtmc_device_data *VAR_4;

 VAR_3 = VAR_1->private_data;
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_3->closing, 1);
 VAR_4 = VAR_3->data;


 FUNC_1(&VAR_4->io_mutex);

 FUNC_5(VAR_3);

 FUNC_3(&VAR_3->err_lock);
 VAR_3->in_status = 0;
 VAR_3->in_transfer_size = 0;
 VAR_3->in_urbs_used = 0;
 VAR_3->out_status = 0;
 VAR_3->out_transfer_size = 0;
 FUNC_4(&VAR_3->err_lock);

 FUNC_6(&VAR_4->waitq);
 FUNC_2(&VAR_4->io_mutex);

 return 0;
}
