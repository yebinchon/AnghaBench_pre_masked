
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int dummy; } ;
struct ibmvscsis_tport {struct ibmvscsis_nexus* ibmv_nexus; } ;
struct ibmvscsis_nexus {struct se_session* se_sess; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibmvscsis_nexus*) ;
 int FUNC_1 (struct se_session*) ;

__attribute__((used)) static int FUNC_2(struct ibmvscsis_tport *VAR_1)
{
 struct se_session *VAR_2;
 struct ibmvscsis_nexus *VAR_3;

 VAR_3 = VAR_1->ibmv_nexus;
 if (!VAR_3)
  return -VAR_0;

 VAR_2 = VAR_3->se_sess;
 if (!VAR_2)
  return -VAR_0;




 FUNC_1(VAR_2);
 VAR_1->ibmv_nexus = ((void*)0);
 FUNC_0(VAR_3);

 return 0;
}
