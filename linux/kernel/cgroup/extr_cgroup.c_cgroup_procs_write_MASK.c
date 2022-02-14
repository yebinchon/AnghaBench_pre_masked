
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct kernfs_open_file {int kn; TYPE_3__* file; } ;
struct cgroup {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct TYPE_6__ {TYPE_2__ f_path; } ;
struct TYPE_4__ {int d_sb; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct task_struct*) ;
 size_t FUNC_1 (struct cgroup*,struct task_struct*,int) ;
 struct cgroup* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct task_struct*) ;
 size_t FUNC_5 (struct cgroup*,struct cgroup*,int ) ;
 struct task_struct* FUNC_6 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct cgroup* FUNC_9 (struct task_struct*,int *) ;

__attribute__((used)) static ssize_t FUNC_10(struct kernfs_open_file *VAR_3,
      char *VAR_4, size_t VAR_5, loff_t VAR_6)
{
 struct cgroup *VAR_7, *VAR_8;
 struct task_struct *VAR_9;
 ssize_t VAR_10;

 VAR_8 = FUNC_2(VAR_3->kn, 0);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_4, 1);
 VAR_10 = FUNC_0(VAR_9);
 if (VAR_10)
  goto out_unlock;


 FUNC_7(&VAR_2);
 VAR_7 = FUNC_9(VAR_9, &VAR_1);
 FUNC_8(&VAR_2);

 VAR_10 = FUNC_5(VAR_7, VAR_8,
         VAR_3->file->f_path.dentry->d_sb);
 if (VAR_10)
  goto out_finish;

 VAR_10 = FUNC_1(VAR_8, VAR_9, 1);

out_finish:
 FUNC_4(VAR_9);
out_unlock:
 FUNC_3(VAR_3->kn);

 return VAR_10 ?: VAR_5;
}
