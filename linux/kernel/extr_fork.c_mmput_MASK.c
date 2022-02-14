
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int mm_users; } ;


 int FUNC_0 (struct mm_struct*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;

void FUNC_3(struct mm_struct *VAR_0)
{
 FUNC_2();

 if (FUNC_1(&VAR_0->mm_users))
  FUNC_0(VAR_0);
}
