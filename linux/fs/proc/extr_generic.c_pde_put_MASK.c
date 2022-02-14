
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int low_ino; int refcnt; } ;


 int FUNC_0 (struct proc_dir_entry*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct proc_dir_entry *VAR_0)
{
 if (FUNC_2(&VAR_0->refcnt)) {
  FUNC_1(VAR_0->low_ino);
  FUNC_0(VAR_0);
 }
}
