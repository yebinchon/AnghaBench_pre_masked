
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbtmc_file_data {TYPE_1__* data; int file_elem; } ;
struct inode {int dummy; } ;
struct file {struct usbtmc_file_data* private_data; } ;
struct TYPE_2__ {int kref; int io_mutex; int dev_lock; } ;


 int FUNC_0 (struct usbtmc_file_data*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct file *VAR_2)
{
 struct usbtmc_file_data *VAR_3 = VAR_2->private_data;


 FUNC_3(&VAR_3->data->io_mutex);
 FUNC_5(&VAR_3->data->dev_lock);

 FUNC_2(&VAR_3->file_elem);

 FUNC_6(&VAR_3->data->dev_lock);
 FUNC_4(&VAR_3->data->io_mutex);

 FUNC_1(&VAR_3->data->kref, VAR_0);
 VAR_3->data = ((void*)0);
 FUNC_0(VAR_3);
 return 0;
}
