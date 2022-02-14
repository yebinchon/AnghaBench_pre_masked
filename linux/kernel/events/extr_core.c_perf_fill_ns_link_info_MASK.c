
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct proc_ns_operations {int dummy; } ;
struct perf_ns_link_info {int ino; int dev; } ;
struct path {TYPE_1__* dentry; } ;
struct inode {int i_ino; TYPE_2__* i_sb; } ;
struct TYPE_4__ {int s_dev; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct path*,struct task_struct*,struct proc_ns_operations const*) ;
 int FUNC_2 (struct path*) ;

__attribute__((used)) static void FUNC_3(struct perf_ns_link_info *VAR_0,
       struct task_struct *VAR_1,
       const struct proc_ns_operations *VAR_2)
{
 struct path VAR_3;
 struct inode *VAR_4;
 void *VAR_5;

 VAR_5 = FUNC_1(&VAR_3, VAR_1, VAR_2);
 if (!VAR_5) {
  VAR_4 = VAR_3.dentry->d_inode;
  VAR_0->dev = FUNC_0(VAR_4->i_sb->s_dev);
  VAR_0->ino = VAR_4->i_ino;
  FUNC_2(&VAR_3);
 }
}
