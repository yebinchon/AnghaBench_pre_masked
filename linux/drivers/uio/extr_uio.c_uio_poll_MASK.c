
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_listener {scalar_t__ event_count; struct uio_device* dev; } ;
struct uio_device {int event; int wait; int info_lock; TYPE_1__* info; } ;
struct file {struct uio_listener* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_3, poll_table *VAR_4)
{
 struct uio_listener *VAR_5 = VAR_3->private_data;
 struct uio_device *VAR_6 = VAR_5->dev;
 __poll_t VAR_7 = 0;

 FUNC_1(&VAR_6->info_lock);
 if (!VAR_6->info || !VAR_6->info->irq)
  VAR_7 = -VAR_0;
 FUNC_2(&VAR_6->info_lock);

 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_3, &VAR_6->wait, VAR_4);
 if (VAR_5->event_count != FUNC_0(&VAR_6->event))
  return VAR_1 | VAR_2;
 return 0;
}
