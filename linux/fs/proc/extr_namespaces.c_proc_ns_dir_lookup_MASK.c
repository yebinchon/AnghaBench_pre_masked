
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct proc_ns_operations {int name; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {unsigned int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 size_t FUNC_0 (struct proc_ns_operations**) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (int ) ;
 struct task_struct* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 struct proc_ns_operations** VAR_1 ;
 struct dentry* FUNC_4 (struct dentry*,struct task_struct*,struct proc_ns_operations const*) ;
 int FUNC_5 (struct task_struct*) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static struct dentry *FUNC_7(struct inode *VAR_2,
    struct dentry *VAR_3, unsigned int VAR_4)
{
 struct task_struct *VAR_5 = FUNC_2(VAR_2);
 const struct proc_ns_operations **VAR_6, **VAR_7;
 unsigned int VAR_8 = VAR_3->d_name.len;
 struct dentry *VAR_9 = FUNC_1(-VAR_0);

 if (!VAR_5)
  goto out_no_task;

 VAR_7 = &VAR_1[FUNC_0(VAR_1)];
 for (VAR_6 = VAR_1; VAR_6 < VAR_7; VAR_6++) {
  if (FUNC_6((*VAR_6)->name) != VAR_8)
   continue;
  if (!FUNC_3(VAR_3->d_name.name, (*VAR_6)->name, VAR_8))
   break;
 }
 if (VAR_6 == VAR_7)
  goto out;

 VAR_9 = FUNC_4(VAR_3, VAR_5, *VAR_6);
out:
 FUNC_5(VAR_5);
out_no_task:
 return VAR_9;
}
