
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_waitqueue; int res_convertqueue; int res_grantqueue; struct dlm_ls* res_ls; } ;
struct dlm_ls {int dummy; } ;


 int FUNC_0 (struct dlm_ls*,struct dlm_rsb*,int *) ;

void FUNC_1(struct dlm_rsb *VAR_0)
{
 struct dlm_ls *VAR_1 = VAR_0->res_ls;

 FUNC_0(VAR_1, VAR_0, &VAR_0->res_grantqueue);
 FUNC_0(VAR_1, VAR_0, &VAR_0->res_convertqueue);
 FUNC_0(VAR_1, VAR_0, &VAR_0->res_waitqueue);
}
