
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pid_entry {scalar_t__ len; int name; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct task_struct* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 struct dentry* FUNC_3 (struct dentry*,struct task_struct*,struct pid_entry const*) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static struct dentry *FUNC_5(struct inode *VAR_1,
      struct dentry *VAR_2,
      const struct pid_entry *VAR_3,
      const struct pid_entry *VAR_4)
{
 struct task_struct *VAR_5 = FUNC_1(VAR_1);
 struct dentry *VAR_6 = FUNC_0(-VAR_0);

 if (!VAR_5)
  goto out_no_task;





 for (; VAR_3 < VAR_4; VAR_3++) {
  if (VAR_3->len != VAR_2->d_name.len)
   continue;
  if (!FUNC_2(VAR_2->d_name.name, VAR_3->name, VAR_3->len)) {
   VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_3);
   break;
  }
 }
 FUNC_4(VAR_5);
out_no_task:
 return VAR_6;
}
