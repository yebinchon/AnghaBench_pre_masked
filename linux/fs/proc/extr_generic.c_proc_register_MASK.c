
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int low_ino; int name; struct proc_dir_entry* parent; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct proc_dir_entry*) ;
 int FUNC_2 (struct proc_dir_entry*,struct proc_dir_entry*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct proc_dir_entry *FUNC_7(struct proc_dir_entry *VAR_1,
  struct proc_dir_entry *VAR_2)
{
 if (FUNC_3(&VAR_2->low_ino))
  goto out_free_entry;

 FUNC_5(&VAR_0);
 VAR_2->parent = VAR_1;
 if (FUNC_2(VAR_1, VAR_2) == 0) {
  FUNC_0(1, "proc_dir_entry '%s/%s' already registered\n",
       VAR_1->name, VAR_2->name);
  FUNC_6(&VAR_0);
  goto out_free_inum;
 }
 FUNC_6(&VAR_0);

 return VAR_2;
out_free_inum:
 FUNC_4(VAR_2->low_ino);
out_free_entry:
 FUNC_1(VAR_2);
 return ((void*)0);
}
