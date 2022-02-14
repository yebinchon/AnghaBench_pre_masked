
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct seq_operations {int dummy; } ;
struct proc_dir_entry {unsigned int state_size; int write; struct seq_operations const* seq_ops; int * proc_fops; } ;
typedef int proc_write_t ;


 int FUNC_0 (struct proc_dir_entry*) ;
 struct proc_dir_entry* FUNC_1 (char const*,int ,struct proc_dir_entry**,void*) ;
 int VAR_0 ;
 struct proc_dir_entry* FUNC_2 (struct proc_dir_entry*,struct proc_dir_entry*) ;

struct proc_dir_entry *FUNC_3(const char *VAR_1, umode_t VAR_2,
        struct proc_dir_entry *VAR_3,
        const struct seq_operations *VAR_4,
        proc_write_t VAR_5,
        unsigned int VAR_6, void *VAR_7)
{
 struct proc_dir_entry *VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, &VAR_3, VAR_7);
 if (!VAR_8)
  return ((void*)0);
 FUNC_0(VAR_8);
 VAR_8->proc_fops = &VAR_0;
 VAR_8->seq_ops = VAR_4;
 VAR_8->state_size = VAR_6;
 VAR_8->write = VAR_5;
 return FUNC_2(VAR_3, VAR_8);
}
