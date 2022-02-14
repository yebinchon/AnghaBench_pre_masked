
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct dentry {TYPE_1__* d_sb; int d_name; } ;
struct TYPE_2__ {struct pid_namespace* s_fs_info; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct task_struct* FUNC_1 (unsigned int,struct pid_namespace*) ;
 int FUNC_2 (struct task_struct*) ;
 unsigned int FUNC_3 (int *) ;
 struct dentry* FUNC_4 (struct dentry*,struct task_struct*,int *) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

struct dentry *FUNC_8(struct dentry *VAR_1, unsigned int VAR_2)
{
 struct task_struct *VAR_3;
 unsigned VAR_4;
 struct pid_namespace *VAR_5;
 struct dentry *VAR_6 = FUNC_0(-VAR_0);

 VAR_4 = FUNC_3(&VAR_1->d_name);
 if (VAR_4 == ~0U)
  goto out;

 VAR_5 = VAR_1->d_sb->s_fs_info;
 FUNC_6();
 VAR_3 = FUNC_1(VAR_4, VAR_5);
 if (VAR_3)
  FUNC_2(VAR_3);
 FUNC_7();
 if (!VAR_3)
  goto out;

 VAR_6 = FUNC_4(VAR_1, VAR_3, ((void*)0));
 FUNC_5(VAR_3);
out:
 return VAR_6;
}
