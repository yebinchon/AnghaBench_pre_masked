
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optee_supp {int req_id; int reqs; int idr; int reqs_c; int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct optee_supp*,int ,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct optee_supp *VAR_0)
{
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));
 FUNC_4(&VAR_0->mutex);
 FUNC_2(&VAR_0->reqs_c);
 FUNC_1(&VAR_0->idr);
 FUNC_0(&VAR_0->reqs);
 VAR_0->req_id = -1;
}
