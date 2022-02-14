
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int * proc_iops; scalar_t__ data; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct proc_dir_entry* FUNC_0 (struct proc_dir_entry**,char const*,int,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct proc_dir_entry*) ;
 int VAR_5 ;
 struct proc_dir_entry* FUNC_3 (struct proc_dir_entry*,struct proc_dir_entry*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

struct proc_dir_entry *FUNC_6(const char *VAR_6,
  struct proc_dir_entry *VAR_7, const char *VAR_8)
{
 struct proc_dir_entry *VAR_9;

 VAR_9 = FUNC_0(&VAR_7, VAR_6,
     (VAR_1 | VAR_2 | VAR_3 | VAR_4),1);

 if (VAR_9) {
  VAR_9->data = FUNC_1((VAR_9->size=FUNC_5(VAR_8))+1, VAR_0);
  if (VAR_9->data) {
   FUNC_4((char*)VAR_9->data,VAR_8);
   VAR_9->proc_iops = &VAR_5;
   VAR_9 = FUNC_3(VAR_7, VAR_9);
  } else {
   FUNC_2(VAR_9);
   VAR_9 = ((void*)0);
  }
 }
 return VAR_9;
}
