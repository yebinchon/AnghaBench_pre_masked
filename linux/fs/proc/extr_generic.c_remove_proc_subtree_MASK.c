
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {scalar_t__ nlink; int mode; struct proc_dir_entry* parent; int subdir; int subdir_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,struct proc_dir_entry**,char const**) ;
 int FUNC_2 (struct proc_dir_entry*) ;
 struct proc_dir_entry* FUNC_3 (struct proc_dir_entry*,char const*,unsigned int) ;
 struct proc_dir_entry* FUNC_4 (struct proc_dir_entry*) ;
 int FUNC_5 (struct proc_dir_entry*) ;
 int VAR_1 ;
 int FUNC_6 (int *,int *) ;
 unsigned int FUNC_7 (char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(const char *VAR_2, struct proc_dir_entry *VAR_3)
{
 struct proc_dir_entry *VAR_4 = ((void*)0), *VAR_5, *VAR_6;
 const char *VAR_7 = VAR_2;
 unsigned int VAR_8;

 FUNC_8(&VAR_1);
 if (FUNC_1(VAR_2, &VAR_3, &VAR_7) != 0) {
  FUNC_9(&VAR_1);
  return -VAR_0;
 }
 VAR_8 = FUNC_7(VAR_7);

 VAR_4 = FUNC_3(VAR_3, VAR_7, VAR_8);
 if (!VAR_4) {
  FUNC_9(&VAR_1);
  return -VAR_0;
 }
 FUNC_6(&VAR_4->subdir_node, &VAR_3->subdir);

 VAR_5 = VAR_4;
 while (1) {
  VAR_6 = FUNC_4(VAR_5);
  if (VAR_6) {
   FUNC_6(&VAR_6->subdir_node, &VAR_5->subdir);
   VAR_5 = VAR_6;
   continue;
  }
  FUNC_9(&VAR_1);

  FUNC_5(VAR_5);
  VAR_6 = VAR_5->parent;
  if (FUNC_0(VAR_5->mode))
   VAR_6->nlink--;
  VAR_5->nlink = 0;
  if (VAR_5 == VAR_4)
   break;
  FUNC_2(VAR_5);

  FUNC_8(&VAR_1);
  VAR_5 = VAR_6;
 }
 FUNC_2(VAR_4);
 return 0;
}
