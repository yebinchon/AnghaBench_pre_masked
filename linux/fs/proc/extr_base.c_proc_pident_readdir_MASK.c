
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid_entry {int len; int name; } ;
struct file {int dummy; } ;
struct dir_context {unsigned int pos; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct dir_context*) ;
 int FUNC_1 (struct file*) ;
 struct task_struct* FUNC_2 (int ) ;
 int FUNC_3 (struct file*,struct dir_context*,int ,int ,int ,struct task_struct*,struct pid_entry const*) ;
 int VAR_1 ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, struct dir_context *VAR_3,
  const struct pid_entry *VAR_4, unsigned int VAR_5)
{
 struct task_struct *VAR_6 = FUNC_2(FUNC_1(VAR_2));
 const struct pid_entry *VAR_7;

 if (!VAR_6)
  return -VAR_0;

 if (!FUNC_0(VAR_2, VAR_3))
  goto out;

 if (VAR_3->pos >= VAR_5 + 2)
  goto out;

 for (VAR_7 = VAR_4 + (VAR_3->pos - 2); VAR_7 < VAR_4 + VAR_5; VAR_7++) {
  if (!FUNC_3(VAR_2, VAR_3, VAR_7->name, VAR_7->len,
    VAR_1, VAR_6, VAR_7))
   break;
  VAR_3->pos++;
 }
out:
 FUNC_4(VAR_6);
 return 0;
}
