
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct cxl_calls {int (* cxl_slbia ) (struct mm_struct*) ;} ;


 struct cxl_calls* FUNC_0 () ;
 int FUNC_1 (struct cxl_calls*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct mm_struct*) ;

void FUNC_4(struct mm_struct *VAR_0)
{
 struct cxl_calls *VAR_1;

 VAR_1 = FUNC_0();
 if (!VAR_1)
  return;

 if (FUNC_2())
     VAR_1->cxl_slbia(VAR_0);

 FUNC_1(VAR_1);
}
