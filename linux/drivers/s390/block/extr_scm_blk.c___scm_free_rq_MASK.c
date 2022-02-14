
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_request {struct aob_rq_header* request; scalar_t__ aob; } ;
struct aob_rq_header {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct aob_rq_header*) ;
 struct aob_rq_header* FUNC_2 (struct scm_request*) ;

__attribute__((used)) static void FUNC_3(struct scm_request *VAR_0)
{
 struct aob_rq_header *VAR_1 = FUNC_2(VAR_0);

 FUNC_0((unsigned long) VAR_0->aob);
 FUNC_1(VAR_0->request);
 FUNC_1(VAR_1);
}
