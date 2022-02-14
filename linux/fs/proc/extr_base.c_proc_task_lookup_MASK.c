
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {TYPE_1__* d_sb; int d_name; } ;
struct TYPE_2__ {struct pid_namespace* s_fs_info; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct task_struct* FUNC_1 (unsigned int,struct pid_namespace*) ;
 struct task_struct* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct task_struct*) ;
 unsigned int FUNC_4 (int *) ;
 struct dentry* FUNC_5 (struct dentry*,struct task_struct*,int *) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct task_struct*,struct task_struct*) ;

__attribute__((used)) static struct dentry *FUNC_10(struct inode *VAR_1, struct dentry * VAR_2, unsigned int VAR_3)
{
 struct task_struct *VAR_4;
 struct task_struct *VAR_5 = FUNC_2(VAR_1);
 unsigned VAR_6;
 struct pid_namespace *VAR_7;
 struct dentry *VAR_8 = FUNC_0(-VAR_0);

 if (!VAR_5)
  goto out_no_task;

 VAR_6 = FUNC_4(&VAR_2->d_name);
 if (VAR_6 == ~0U)
  goto out;

 VAR_7 = VAR_2->d_sb->s_fs_info;
 FUNC_7();
 VAR_4 = FUNC_1(VAR_6, VAR_7);
 if (VAR_4)
  FUNC_3(VAR_4);
 FUNC_8();
 if (!VAR_4)
  goto out;
 if (!FUNC_9(VAR_5, VAR_4))
  goto out_drop_task;

 VAR_8 = FUNC_5(VAR_2, VAR_4, ((void*)0));
out_drop_task:
 FUNC_6(VAR_4);
out:
 FUNC_6(VAR_5);
out_no_task:
 return VAR_8;
}
