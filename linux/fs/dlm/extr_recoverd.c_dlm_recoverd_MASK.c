
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_in_recovery; int ls_flags; int ls_recover_lock_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dlm_ls* FUNC_0 (void*) ;
 int FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,void*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(void *VAR_5)
{
 struct dlm_ls *VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6) {
  FUNC_5("dlm_recoverd: no lockspace %p", VAR_5);
  return -1;
 }

 FUNC_3(&VAR_6->ls_in_recovery);
 FUNC_7(VAR_1, &VAR_6->ls_flags);
 FUNC_12(&VAR_6->ls_recover_lock_wait);

 while (1) {





  FUNC_8(VAR_3);
  if (FUNC_4()) {
   FUNC_8(VAR_4);
   break;
  }
  if (!FUNC_10(VAR_2, &VAR_6->ls_flags) &&
      !FUNC_10(VAR_0, &VAR_6->ls_flags)) {
   if (FUNC_4())
    break;
   FUNC_6();
  }
  FUNC_8(VAR_4);

  if (FUNC_9(VAR_0, &VAR_6->ls_flags)) {
   FUNC_3(&VAR_6->ls_in_recovery);
   FUNC_7(VAR_1, &VAR_6->ls_flags);
   FUNC_12(&VAR_6->ls_recover_lock_wait);
  }

  if (FUNC_9(VAR_2, &VAR_6->ls_flags))
   FUNC_2(VAR_6);
 }

 if (FUNC_10(VAR_1, &VAR_6->ls_flags))
  FUNC_11(&VAR_6->ls_in_recovery);

 FUNC_1(VAR_6);
 return 0;
}
