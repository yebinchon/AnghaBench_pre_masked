
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct seq_operations {int dummy; } ;
struct proc_dir_entry {unsigned int state_size; struct seq_operations const* seq_ops; int * proc_fops; } ;


 struct proc_dir_entry* FUNC_0 (char const*,int ,struct proc_dir_entry**,void*) ;
 struct proc_dir_entry* FUNC_1 (struct proc_dir_entry*,struct proc_dir_entry*) ;
 int VAR_0 ;

struct proc_dir_entry *FUNC_2(const char *VAR_1, umode_t VAR_2,
  struct proc_dir_entry *VAR_3, const struct seq_operations *VAR_4,
  unsigned int VAR_5, void *VAR_6)
{
 struct proc_dir_entry *VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, &VAR_3, VAR_6);
 if (!VAR_7)
  return ((void*)0);
 VAR_7->proc_fops = &VAR_0;
 VAR_7->seq_ops = VAR_4;
 VAR_7->state_size = VAR_5;
 return FUNC_1(VAR_3, VAR_7);
}
