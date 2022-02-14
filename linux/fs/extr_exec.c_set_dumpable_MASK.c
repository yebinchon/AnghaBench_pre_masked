
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct mm_struct *VAR_2, int VAR_3)
{
 if (FUNC_0((unsigned)VAR_3 > VAR_1))
  return;

 FUNC_1(&VAR_2->flags, VAR_0, VAR_3);
}
