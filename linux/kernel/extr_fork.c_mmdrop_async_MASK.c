
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int async_put_work; int mm_count; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mm_struct *VAR_1)
{
 if (FUNC_3(FUNC_1(&VAR_1->mm_count))) {
  FUNC_0(&VAR_1->async_put_work, VAR_0);
  FUNC_2(&VAR_1->async_put_work);
 }
}
