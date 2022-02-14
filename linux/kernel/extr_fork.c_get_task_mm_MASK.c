
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; struct mm_struct* mm; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;

struct mm_struct *FUNC_3(struct task_struct *VAR_1)
{
 struct mm_struct *VAR_2;

 FUNC_1(VAR_1);
 VAR_2 = VAR_1->mm;
 if (VAR_2) {
  if (VAR_1->flags & VAR_0)
   VAR_2 = ((void*)0);
  else
   FUNC_0(VAR_2);
 }
 FUNC_2(VAR_1);
 return VAR_2;
}
