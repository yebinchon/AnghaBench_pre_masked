
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct chardev_priv* private_data; } ;
struct chardev_priv {int events; int wait_event; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_2, poll_table *VAR_3)
{
 struct chardev_priv *VAR_4 = VAR_2->private_data;

 FUNC_1(VAR_2, &VAR_4->wait_event, VAR_3);

 if (FUNC_0(&VAR_4->events))
  return 0;

 return VAR_0 | VAR_1;
}
