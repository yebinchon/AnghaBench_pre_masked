
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_callback_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct dlm_ls *VAR_3)
{
 VAR_3->ls_callback_wq = FUNC_0("dlm_callback",
          VAR_1 | VAR_2, 0);
 if (!VAR_3->ls_callback_wq) {
  FUNC_1("can't start dlm_callback workqueue");
  return -VAR_0;
 }
 return 0;
}
