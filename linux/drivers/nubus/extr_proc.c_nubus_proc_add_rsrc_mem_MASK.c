
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct nubus_proc_pde_data {int dummy; } ;
struct nubus_dirent {int type; } ;
typedef int name ;


 int VAR_0 ;
 int FUNC_0 (struct nubus_dirent const*) ;
 struct nubus_proc_pde_data* FUNC_1 (int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,struct proc_dir_entry*,int ,struct nubus_proc_pde_data*) ;
 int FUNC_3 (char*,int,char*,int) ;

void FUNC_4(struct proc_dir_entry *VAR_2,
        const struct nubus_dirent *VAR_3,
        unsigned int VAR_4)
{
 char VAR_5[9];
 struct nubus_proc_pde_data *VAR_6;

 if (!VAR_2)
  return;

 FUNC_3(VAR_5, sizeof(VAR_5), "%x", VAR_3->type);
 if (VAR_4)
  VAR_6 = FUNC_1(FUNC_0(VAR_3), VAR_4);
 else
  VAR_6 = ((void*)0);
 FUNC_2(VAR_5, VAR_0 | 0444, VAR_2,
   VAR_1, VAR_6);
}
