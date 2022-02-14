
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct kernfs_open_file {int kn; TYPE_3__* file; } ;
struct cgroup {scalar_t__ dom_cgrp; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct TYPE_6__ {TYPE_2__ f_path; } ;
struct TYPE_4__ {int d_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct cgroup*,struct task_struct*,int) ;
 struct cgroup* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct cgroup*,struct cgroup*,int ) ;
 struct task_struct* FUNC_6 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (char*) ;
 struct cgroup* FUNC_10 (struct task_struct*,int *) ;

__attribute__((used)) static ssize_t FUNC_11(struct kernfs_open_file *VAR_4,
        char *VAR_5, size_t VAR_6, loff_t VAR_7)
{
 struct cgroup *VAR_8, *VAR_9;
 struct task_struct *VAR_10;
 ssize_t VAR_11;

 VAR_5 = FUNC_9(VAR_5);

 VAR_9 = FUNC_2(VAR_4->kn, 0);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_6(VAR_5, 0);
 VAR_11 = FUNC_0(VAR_10);
 if (VAR_11)
  goto out_unlock;


 FUNC_7(&VAR_3);
 VAR_8 = FUNC_10(VAR_10, &VAR_2);
 FUNC_8(&VAR_3);


 VAR_11 = FUNC_5(VAR_8, VAR_9,
         VAR_4->file->f_path.dentry->d_sb);
 if (VAR_11)
  goto out_finish;


 VAR_11 = -VAR_1;
 if (VAR_8->dom_cgrp != VAR_9->dom_cgrp)
  goto out_finish;

 VAR_11 = FUNC_1(VAR_9, VAR_10, 0);

out_finish:
 FUNC_4(VAR_10);
out_unlock:
 FUNC_3(VAR_4->kn);

 return VAR_11 ?: VAR_6;
}
