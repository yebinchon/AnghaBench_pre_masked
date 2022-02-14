
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int dummy; } ;
struct nubus_board {int slot; } ;
typedef int name ;


 int VAR_0 ;
 struct proc_dir_entry* FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,char*,int) ;

struct proc_dir_entry *FUNC_2(struct nubus_board *VAR_1)
{
 char VAR_2[2];

 if (!VAR_0)
  return ((void*)0);
 FUNC_1(VAR_2, sizeof(VAR_2), "%x", VAR_1->slot);
 return FUNC_0(VAR_2, VAR_0);
}
