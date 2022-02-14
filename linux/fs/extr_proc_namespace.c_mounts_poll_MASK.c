
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int poll_event; struct proc_mounts* private; } ;
struct proc_mounts {struct mnt_namespace* ns; } ;
struct mnt_namespace {int event; int poll; } ;
struct file {struct seq_file* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_4, poll_table *VAR_5)
{
 struct seq_file *VAR_6 = VAR_4->private_data;
 struct proc_mounts *VAR_7 = VAR_6->private;
 struct mnt_namespace *VAR_8 = VAR_7->ns;
 __poll_t VAR_9 = VAR_1 | VAR_3;
 int VAR_10;

 FUNC_1(VAR_4, &VAR_7->ns->poll, VAR_5);

 VAR_10 = FUNC_0(VAR_8->event);
 if (VAR_6->poll_event != VAR_10) {
  VAR_6->poll_event = VAR_10;
  VAR_9 |= VAR_0 | VAR_2;
 }

 return VAR_9;
}
