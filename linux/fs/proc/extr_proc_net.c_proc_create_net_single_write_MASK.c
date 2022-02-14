
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct proc_dir_entry {int (* single_show ) (struct seq_file*,void*) ;int write; int * proc_fops; } ;
typedef int proc_write_t ;


 int FUNC_0 (struct proc_dir_entry*) ;
 struct proc_dir_entry* FUNC_1 (char const*,int ,struct proc_dir_entry**,void*) ;
 int VAR_0 ;
 struct proc_dir_entry* FUNC_2 (struct proc_dir_entry*,struct proc_dir_entry*) ;

struct proc_dir_entry *FUNC_3(const char *VAR_1, umode_t VAR_2,
          struct proc_dir_entry *VAR_3,
          int (*VAR_4)(struct seq_file *, void *),
          proc_write_t VAR_5,
          void *VAR_6)
{
 struct proc_dir_entry *VAR_7;

 VAR_7 = FUNC_1(VAR_1, VAR_2, &VAR_3, VAR_6);
 if (!VAR_7)
  return ((void*)0);
 FUNC_0(VAR_7);
 VAR_7->proc_fops = &VAR_0;
 VAR_7->single_show = VAR_4;
 VAR_7->write = VAR_5;
 return FUNC_2(VAR_3, VAR_7);
}
