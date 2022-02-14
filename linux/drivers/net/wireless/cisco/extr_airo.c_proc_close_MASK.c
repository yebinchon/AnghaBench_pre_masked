
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_data {struct proc_data* wbuffer; struct proc_data* rbuffer; int (* on_close ) (struct inode*,struct file*) ;} ;
struct inode {int dummy; } ;
struct file {struct proc_data* private_data; } ;


 int FUNC_0 (struct proc_data*) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2( struct inode *VAR_0, struct file *VAR_1 )
{
 struct proc_data *VAR_2 = VAR_1->private_data;

 if (VAR_2->on_close != ((void*)0))
  VAR_2->on_close(VAR_0, VAR_1);
 FUNC_0(VAR_2->rbuffer);
 FUNC_0(VAR_2->wbuffer);
 FUNC_0(VAR_2);
 return 0;
}
