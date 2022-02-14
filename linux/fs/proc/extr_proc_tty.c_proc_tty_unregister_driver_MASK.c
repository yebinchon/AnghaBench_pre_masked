
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {struct proc_dir_entry* proc_entry; } ;
struct proc_dir_entry {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct tty_driver *VAR_1)
{
 struct proc_dir_entry *VAR_2;

 VAR_2 = VAR_1->proc_entry;
 if (!VAR_2)
  return;

 FUNC_0(VAR_2->name, VAR_0);

 VAR_1->proc_entry = ((void*)0);
}
