
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct ctl_table_header {int dummy; } ;
struct ctl_table {TYPE_1__* poll; int proc_handler; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_4__ {struct ctl_table* sysctl_entry; } ;
struct TYPE_3__ {int event; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ctl_table_header*) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 unsigned long FUNC_2 (int *) ;
 struct inode* FUNC_3 (struct file*) ;
 struct ctl_table_header* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct file*,int *,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct ctl_table_header*) ;

__attribute__((used)) static __poll_t FUNC_8(struct file *VAR_6, poll_table *VAR_7)
{
 struct inode *VAR_8 = FUNC_3(VAR_6);
 struct ctl_table_header *VAR_9 = FUNC_4(VAR_8);
 struct ctl_table *VAR_10 = FUNC_1(VAR_8)->sysctl_entry;
 __poll_t VAR_11 = VAR_0;
 unsigned long VAR_12;


 if (FUNC_0(VAR_9))
  return VAR_1 | VAR_2;

 if (!VAR_10->proc_handler)
  goto out;

 if (!VAR_10->poll)
  goto out;

 VAR_12 = (unsigned long)VAR_6->private_data;
 FUNC_5(VAR_6, &VAR_10->poll->wait, VAR_7);

 if (VAR_12 != FUNC_2(&VAR_10->poll->event)) {
  VAR_6->private_data = FUNC_6(VAR_10->poll);
  VAR_11 = VAR_3 | VAR_5 | VAR_1 | VAR_4;
 }

out:
 FUNC_7(VAR_9);

 return VAR_11;
}
