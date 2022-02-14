
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int fs; struct nsproxy* nsproxy; } ;
struct seq_file {struct proc_mounts* private; int poll_event; } ;
struct path {int dummy; } ;
struct proc_mounts {int (* show ) (struct seq_file*,struct vfsmount*) ;unsigned long long cached_event; struct path root; struct mnt_namespace* ns; } ;
struct nsproxy {struct mnt_namespace* mnt_ns; } ;
struct mnt_namespace {int event; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct path*) ;
 int FUNC_1 (struct mnt_namespace*) ;
 struct task_struct* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int FUNC_3 (struct path*) ;
 int FUNC_4 (struct mnt_namespace*) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct file*,int *,int) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (struct task_struct*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_3, struct file *VAR_4,
         int (*VAR_5)(struct seq_file *, struct vfsmount *))
{
 struct task_struct *VAR_6 = FUNC_2(VAR_3);
 struct nsproxy *VAR_7;
 struct mnt_namespace *VAR_8 = ((void*)0);
 struct path VAR_9;
 struct proc_mounts *VAR_10;
 struct seq_file *VAR_11;
 int VAR_12 = -VAR_0;

 if (!VAR_6)
  goto err;

 FUNC_7(VAR_6);
 VAR_7 = VAR_6->nsproxy;
 if (!VAR_7 || !VAR_7->mnt_ns) {
  FUNC_8(VAR_6);
  FUNC_5(VAR_6);
  goto err;
 }
 VAR_8 = VAR_7->mnt_ns;
 FUNC_1(VAR_8);
 if (!VAR_6->fs) {
  FUNC_8(VAR_6);
  FUNC_5(VAR_6);
  VAR_12 = -VAR_1;
  goto err_put_ns;
 }
 FUNC_0(VAR_6->fs, &VAR_9);
 FUNC_8(VAR_6);
 FUNC_5(VAR_6);

 VAR_12 = FUNC_6(VAR_4, &VAR_2, sizeof(struct proc_mounts));
 if (VAR_12)
  goto err_put_path;

 VAR_11 = VAR_4->private_data;
 VAR_11->poll_event = VAR_8->event;

 VAR_10 = VAR_11->private;
 VAR_10->ns = VAR_8;
 VAR_10->root = VAR_9;
 VAR_10->show = VAR_5;
 VAR_10->cached_event = ~0ULL;

 return 0;

 err_put_path:
 FUNC_3(&VAR_9);
 err_put_ns:
 FUNC_4(VAR_8);
 err:
 return VAR_12;
}
