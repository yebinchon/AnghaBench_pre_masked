
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {scalar_t__ data; scalar_t__ name; scalar_t__ inline_name; int mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct proc_dir_entry*) ;
 int VAR_0 ;

void FUNC_3(struct proc_dir_entry *VAR_1)
{
 if (FUNC_0(VAR_1->mode))
  FUNC_1(VAR_1->data);
 if (VAR_1->name != VAR_1->inline_name)
  FUNC_1(VAR_1->name);
 FUNC_2(VAR_0, VAR_1);
}
