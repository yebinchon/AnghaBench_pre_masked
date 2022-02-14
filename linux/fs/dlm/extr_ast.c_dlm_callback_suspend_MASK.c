
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {scalar_t__ ls_callback_wq; int ls_flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct dlm_ls *VAR_1)
{
 FUNC_1(VAR_0, &VAR_1->ls_flags);

 if (VAR_1->ls_callback_wq)
  FUNC_0(VAR_1->ls_callback_wq);
}
