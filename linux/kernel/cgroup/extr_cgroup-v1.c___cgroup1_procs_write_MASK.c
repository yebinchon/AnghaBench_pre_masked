
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct kernfs_open_file {int kn; } ;
struct cred {int suid; int euid; int uid; } ;
struct cgroup {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct cgroup*,struct task_struct*,int) ;
 struct cgroup* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct task_struct*) ;
 struct task_struct* FUNC_5 (char*,int) ;
 struct cred* FUNC_6 () ;
 struct cred* FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct cred const*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_10(struct kernfs_open_file *VAR_3,
         char *VAR_4, size_t VAR_5, loff_t VAR_6,
         bool VAR_7)
{
 struct cgroup *VAR_8;
 struct task_struct *VAR_9;
 const struct cred *VAR_10, *VAR_11;
 ssize_t VAR_12;

 VAR_8 = FUNC_2(VAR_3->kn, 0);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_4, VAR_7);
 VAR_12 = FUNC_0(VAR_9);
 if (VAR_12)
  goto out_unlock;





 VAR_10 = FUNC_6();
 VAR_11 = FUNC_7(VAR_9);
 if (!FUNC_9(VAR_10->euid, VAR_2) &&
     !FUNC_9(VAR_10->euid, VAR_11->uid) &&
     !FUNC_9(VAR_10->euid, VAR_11->suid))
  VAR_12 = -VAR_0;
 FUNC_8(VAR_11);
 if (VAR_12)
  goto out_finish;

 VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_7);

out_finish:
 FUNC_4(VAR_9);
out_unlock:
 FUNC_3(VAR_3->kn);

 return VAR_12 ?: VAR_5;
}
