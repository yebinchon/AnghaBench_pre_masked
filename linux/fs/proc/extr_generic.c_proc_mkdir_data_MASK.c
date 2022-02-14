
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct proc_dir_entry {int nlink; int * proc_iops; int * proc_fops; void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc_dir_entry* FUNC_0 (struct proc_dir_entry**,char const*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct proc_dir_entry* FUNC_1 (struct proc_dir_entry*,struct proc_dir_entry*) ;

struct proc_dir_entry *FUNC_2(const char *VAR_5, umode_t VAR_6,
  struct proc_dir_entry *VAR_7, void *VAR_8)
{
 struct proc_dir_entry *VAR_9;

 if (VAR_6 == 0)
  VAR_6 = VAR_1 | VAR_2;

 VAR_9 = FUNC_0(&VAR_7, VAR_5, VAR_0 | VAR_6, 2);
 if (VAR_9) {
  VAR_9->data = VAR_8;
  VAR_9->proc_fops = &VAR_4;
  VAR_9->proc_iops = &VAR_3;
  VAR_7->nlink++;
  VAR_9 = FUNC_1(VAR_7, VAR_9);
  if (!VAR_9)
   VAR_7->nlink--;
 }
 return VAR_9;
}
