
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_ls {int ls_flags; int ls_wait_general; } ;
struct TYPE_2__ {int ci_recover_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_0 (struct dlm_ls*) ;
 int FUNC_1 (struct dlm_ls*,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int,int) ;

int FUNC_4(struct dlm_ls *VAR_5, int (*VAR_6) (struct dlm_ls *VAR_7))
{
 int VAR_8 = 0;
 int VAR_9;

 while (1) {
  VAR_9 = FUNC_3(VAR_5->ls_wait_general,
     VAR_6(VAR_5) || FUNC_0(VAR_5),
     VAR_4.ci_recover_timer * VAR_2);
  if (VAR_9)
   break;
  if (FUNC_2(VAR_3, &VAR_5->ls_flags)) {
   FUNC_1(VAR_5, "dlm_wait_function timed out");
   return -VAR_1;
  }
 }

 if (FUNC_0(VAR_5)) {
  FUNC_1(VAR_5, "dlm_wait_function aborted");
  VAR_8 = -VAR_0;
 }
 return VAR_8;
}
