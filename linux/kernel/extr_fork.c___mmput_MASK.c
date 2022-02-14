
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {TYPE_1__* binfmt; int mmlist; int mm_users; } ;
struct TYPE_2__ {int module; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (struct mm_struct*) ;
 int VAR_0 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct mm_struct*,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct mm_struct*) ;

__attribute__((used)) static inline void FUNC_15(struct mm_struct *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_1->mm_users));

 FUNC_14(VAR_1);
 FUNC_2(VAR_1);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_8(VAR_1);
 FUNC_11(VAR_1, ((void*)0));
 if (!FUNC_7(&VAR_1->mmlist)) {
  FUNC_12(&VAR_0);
  FUNC_6(&VAR_1->mmlist);
  FUNC_13(&VAR_0);
 }
 if (VAR_1->binfmt)
  FUNC_10(VAR_1->binfmt->module);
 FUNC_9(VAR_1);
}
