
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_master_nodeid; scalar_t__ res_nodeid; struct dlm_ls* res_ls; } ;
struct dlm_ls {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 (struct dlm_ls*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dlm_rsb*,int) ;
 scalar_t__ FUNC_4 (struct dlm_rsb*) ;
 int FUNC_5 (struct dlm_rsb*) ;
 int FUNC_6 (struct dlm_rsb*,int ) ;
 int FUNC_7 (struct dlm_rsb*) ;

__attribute__((used)) static int FUNC_8(struct dlm_rsb *VAR_1, unsigned int *VAR_2)
{
 struct dlm_ls *VAR_3 = VAR_1->res_ls;
 int VAR_4, VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 if (FUNC_4(VAR_1))
  return 0;

 VAR_6 = FUNC_1(VAR_3, VAR_1->res_nodeid);

 if (!VAR_6 && !FUNC_6(VAR_1, VAR_0))
  return 0;

 VAR_4 = FUNC_2();
 VAR_5 = FUNC_0(VAR_1);

 if (VAR_5 == VAR_4) {
  if (VAR_6) {
   VAR_1->res_master_nodeid = VAR_4;
   VAR_1->res_nodeid = 0;
  }




  FUNC_7(VAR_1);
  VAR_7 = 0;
 } else {
  FUNC_5(VAR_1);
  VAR_7 = FUNC_3(VAR_1, VAR_5);
 }

 (*VAR_2)++;
 return VAR_7;
}
