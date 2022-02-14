
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_fhandle_pair* rq_resp; } ;
struct nfsd3_fhandle_pair {int fh2; int fh1; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct svc_rqst *VAR_0)
{
 struct nfsd3_fhandle_pair *VAR_1 = VAR_0->rq_resp;

 FUNC_0(&VAR_1->fh1);
 FUNC_0(&VAR_1->fh2);
}
