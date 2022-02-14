
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct proc_dir_entry {int (* single_show ) (struct seq_file*,void*) ;int * proc_fops; } ;


 int FUNC_0 (struct proc_dir_entry*) ;
 struct proc_dir_entry* FUNC_1 (char const*,int ,struct proc_dir_entry**,void*) ;
 int VAR_0 ;
 struct proc_dir_entry* FUNC_2 (struct proc_dir_entry*,struct proc_dir_entry*) ;

struct proc_dir_entry *FUNC_3(const char *VAR_1, umode_t VAR_2,
  struct proc_dir_entry *VAR_3,
  int (*VAR_4)(struct seq_file *, void *), void *VAR_5)
{
 struct proc_dir_entry *VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_3, VAR_5);
 if (!VAR_6)
  return ((void*)0);
 FUNC_0(VAR_6);
 VAR_6->proc_fops = &VAR_0;
 VAR_6->single_show = VAR_4;
 return FUNC_2(VAR_3, VAR_6);
}
