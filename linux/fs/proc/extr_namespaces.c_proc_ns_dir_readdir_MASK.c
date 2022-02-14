
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct proc_ns_operations {int name; } ;
struct file {int dummy; } ;
struct dir_context {int pos; } ;


 int FUNC_0 (struct proc_ns_operations**) ;
 int VAR_0 ;
 int FUNC_1 (struct file*,struct dir_context*) ;
 int FUNC_2 (struct file*) ;
 struct task_struct* FUNC_3 (int ) ;
 struct proc_ns_operations** VAR_1 ;
 int FUNC_4 (struct file*,struct dir_context*,int ,int ,int ,struct task_struct*,struct proc_ns_operations const*) ;
 int VAR_2 ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3, struct dir_context *VAR_4)
{
 struct task_struct *VAR_5 = FUNC_3(FUNC_2(VAR_3));
 const struct proc_ns_operations **VAR_6, **VAR_7;

 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_1(VAR_3, VAR_4))
  goto out;
 if (VAR_4->pos >= 2 + FUNC_0(VAR_1))
  goto out;
 VAR_6 = VAR_1 + (VAR_4->pos - 2);
 VAR_7 = &VAR_1[FUNC_0(VAR_1) - 1];
 while (VAR_6 <= VAR_7) {
  const struct proc_ns_operations *VAR_8 = *VAR_6;
  if (!FUNC_4(VAR_3, VAR_4, VAR_8->name, FUNC_6(VAR_8->name),
         VAR_2, VAR_5, VAR_8))
   break;
  VAR_4->pos++;
  VAR_6++;
 }
out:
 FUNC_5(VAR_5);
 return 0;
}
