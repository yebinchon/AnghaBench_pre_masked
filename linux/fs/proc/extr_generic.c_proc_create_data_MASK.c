
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct proc_dir_entry {struct file_operations const* proc_fops; } ;
struct file_operations {int dummy; } ;


 int FUNC_0 (int ) ;
 struct proc_dir_entry* FUNC_1 (char const*,int ,struct proc_dir_entry**,void*) ;
 struct proc_dir_entry* FUNC_2 (struct proc_dir_entry*,struct proc_dir_entry*) ;

struct proc_dir_entry *FUNC_3(const char *VAR_0, umode_t VAR_1,
  struct proc_dir_entry *VAR_2,
  const struct file_operations *VAR_3, void *VAR_4)
{
 struct proc_dir_entry *VAR_5;

 FUNC_0(VAR_3 == ((void*)0));

 VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_2, VAR_4);
 if (!VAR_5)
  return ((void*)0);
 VAR_5->proc_fops = VAR_3;
 return FUNC_2(VAR_2, VAR_5);
}
