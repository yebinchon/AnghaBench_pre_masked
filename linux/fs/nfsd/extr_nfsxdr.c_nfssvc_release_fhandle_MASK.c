
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct nfsd_fhandle* rq_resp; } ;
struct nfsd_fhandle {int fh; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct svc_rqst *VAR_0)
{
 struct nfsd_fhandle *VAR_1 = VAR_0->rq_resp;

 FUNC_0(&VAR_1->fh);
}
