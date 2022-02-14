
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct nubus_dirent {int type; } ;
struct nubus_board {int lanes; } ;
typedef int name ;


 struct proc_dir_entry* FUNC_0 (char*,int,struct proc_dir_entry*,void*) ;
 int FUNC_1 (char*,int,char*,int) ;

struct proc_dir_entry *FUNC_2(struct proc_dir_entry *VAR_0,
            const struct nubus_dirent *VAR_1,
            struct nubus_board *VAR_2)
{
 char VAR_3[9];
 int VAR_4 = VAR_2->lanes;

 if (!VAR_0)
  return ((void*)0);
 FUNC_1(VAR_3, sizeof(VAR_3), "%x", VAR_1->type);
 return FUNC_0(VAR_3, 0555, VAR_0, (void *)VAR_4);
}
