
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct proc_dir_entry {int nlink; int * proc_iops; int * proc_fops; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc_dir_entry* FUNC_0 (struct proc_dir_entry**,char const*,int,int) ;
 struct proc_dir_entry* FUNC_1 (struct proc_dir_entry*,struct proc_dir_entry*) ;

struct proc_dir_entry *FUNC_2(const char *VAR_3)
{
 umode_t VAR_4 = VAR_0 | VAR_1 | VAR_2;
 struct proc_dir_entry *VAR_5, *VAR_6 = ((void*)0);

 VAR_5 = FUNC_0(&VAR_6, VAR_3, VAR_4, 2);
 if (VAR_5) {
  VAR_5->data = ((void*)0);
  VAR_5->proc_fops = ((void*)0);
  VAR_5->proc_iops = ((void*)0);
  VAR_6->nlink++;
  VAR_5 = FUNC_1(VAR_6, VAR_5);
  if (!VAR_5)
   VAR_6->nlink--;
 }
 return VAR_5;
}
