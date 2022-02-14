
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {struct qm_portal_config* config; } ;
struct qm_portal_config {int cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 struct qman_portal* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct qman_portal*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

const struct qm_portal_config *FUNC_6(void)
{
 struct qman_portal *VAR_2 = FUNC_1();
 const struct qm_portal_config *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->config;
 VAR_4 = VAR_3->cpu;

 FUNC_3(VAR_2);

 FUNC_4(&VAR_1);
 FUNC_0(VAR_4, &VAR_0);
 FUNC_5(&VAR_1);
 FUNC_2();
 return VAR_3;
}
