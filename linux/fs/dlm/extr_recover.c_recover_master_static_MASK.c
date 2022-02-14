
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_master_nodeid; int res_nodeid; } ;


 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dlm_rsb*) ;
 int FUNC_3 (struct dlm_rsb*) ;

__attribute__((used)) static int FUNC_4(struct dlm_rsb *VAR_0, unsigned int *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = VAR_2;

 if (VAR_2 == FUNC_1())
  VAR_3 = 0;

 FUNC_2(VAR_0);
 VAR_0->res_master_nodeid = VAR_2;
 VAR_0->res_nodeid = VAR_3;
 FUNC_3(VAR_0);
 (*VAR_1)++;
 return 0;
}
