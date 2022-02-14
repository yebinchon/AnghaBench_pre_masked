
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbtmc_file_data {int err_lock; scalar_t__ out_status; scalar_t__ in_status; int in_anchor; int submitted; int srq_asserted; struct usbtmc_device_data* data; } ;
struct usbtmc_device_data {int io_mutex; TYPE_1__* intf; int waitq; scalar_t__ zombie; } ;
struct file {struct usbtmc_file_data* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static __poll_t FUNC_8(struct file *VAR_7, poll_table *VAR_8)
{
 struct usbtmc_file_data *VAR_9 = VAR_7->private_data;
 struct usbtmc_device_data *VAR_10 = VAR_9->data;
 __poll_t VAR_11;

 FUNC_2(&VAR_10->io_mutex);

 if (VAR_10->zombie) {
  VAR_11 = VAR_1 | VAR_0;
  goto no_poll;
 }

 FUNC_4(VAR_7, &VAR_10->waitq, VAR_8);




 VAR_11 = 0;
 if (FUNC_0(&VAR_9->srq_asserted))
  VAR_11 |= VAR_4;





 if (FUNC_7(&VAR_9->submitted))
  VAR_11 |= (VAR_3 | VAR_6);
 if (!FUNC_7(&VAR_9->in_anchor))
  VAR_11 |= (VAR_2 | VAR_5);

 FUNC_5(&VAR_9->err_lock);
 if (VAR_9->in_status || VAR_9->out_status)
  VAR_11 |= VAR_0;
 FUNC_6(&VAR_9->err_lock);

 FUNC_1(&VAR_10->intf->dev, "poll mask = %x\n", VAR_11);

no_poll:
 FUNC_3(&VAR_10->io_mutex);
 return VAR_11;
}
