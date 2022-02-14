
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd3_attrstat* rq_resp; } ;
struct nfsd3_attrstat {int fh; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct svc_rqst *VAR_0)
{
 struct nfsd3_attrstat *VAR_1 = VAR_0->rq_resp;

 FUNC_0(&VAR_1->fh);
}
